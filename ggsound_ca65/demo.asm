;file: soundengine_demo.asm
;author: Derek Andrews <derek.george.andrews@gmail.com>
;description: This program is a demo of my sound and music engine.
;It is just a bunch of boilerplate to initialize the NES and set
;up IRQ vectors and so forth. To understand how the sound engine
;is used, check out the usage.asm module.

.feature force_range
.include "ppu.inc"
.include "sprite.inc"
.include "zp.inc"
.include "ram.inc"
.include "ggsound.inc"
.include "tracks.inc"
.include "controller.inc"

.segment "HEADER"
.byte "NES",$1a   ;iNES header
.byte $02         ;# of PRG-ROM blocks. These are 16kb each. $4000 hex.
.byte $01         ;# of CHR-ROM blocks. These are 8kb each. $2000 hex.
.byte $01         ;Vertical mirroring. SRAM disabled. No trainer. Four-screen mirroring disabled. Mapper #0 (NROM)
.byte $00         ;Rest of NROM bits (all 0)

.segment "CODE"

palette:
    .byte $0e,$08,$18,$20,$0e,$0e,$12,$20,$0e,$0e,$0e,$0e,$0e,$0e,$0e,$0e
    .byte $0e,$0e,$09,$1a,$0e,$0e,$0e,$0e,$0e,$0e,$0e,$0e,$0e,$0e,$0e,$0e

tv_system_to_sound_region:
    .byte SOUND_REGION_NTSC, SOUND_REGION_PAL, SOUND_REGION_DENDY, SOUND_REGION_NTSC

reset:
    ;Set interrupt disable flag.
    sei

    ;Clear binary encoded decimal flag.
    cld

    ;Disable APU frame IRQ.
    lda #$40
    sta $4017

    ;Initialize stack.
    ldx #$FF
    txs

    ;Turn off all graphics, and clear PPU registers.
    lda #$00
    sta ppu_2000
    sta ppu_2001
    upload_ppu_2000
    upload_ppu_2001

    ;Disable DMC IRQs.
    lda #$00
    sta $4010

    ;Clear the vblank flag, so we know that we are waiting for the
    ;start of a vertical blank and not powering on with the
    ;vblank flag spuriously set.
    bit $2002

    ;Wait for PPU to be ready.
    wait_vblank
    wait_vblank

    ;Install nmi routine for just counting nmis (detecting system)
    lda #<vblank_get_tv_system
    sta vblank_routine
    lda #>vblank_get_tv_system
    sta vblank_routine+1

    ;Initialize ppu registers with settings we're never going to change.
    set_ppu_2000_bit PPU0_EXECUTE_NMI
    set_ppu_2001_bit PPU1_SPRITE_CLIPPING
    set_ppu_2001_bit PPU1_BACKGROUND_CLIPPING
    clear_ppu_2000_bit PPU0_BACKGROUND_PATTERN_TABLE_ADDRESS
    set_ppu_2000_bit PPU0_SPRITE_PATTERN_TABLE_ADDRESS
    upload_ppu_2000
    upload_ppu_2001

    ;Load palette.
    lda #<palette
    sta palette_address
    lda #>palette
    sta palette_address+1
    jsr ppu_load_palette

    ;Load nametable.
    lda #$20
    sta ppu_2006
    lda #$00
    sta ppu_2006+1
    upload_ppu_2006
    lda #<name_table
    sta w0
    lda #>name_table
    sta w0+1
    jsr ppu_load_nametable

    lda #0
    sta next_sprite_address

    ;Draw sprite overlay.
    lda #<sprite_overlay
    sta w0
    lda #>sprite_overlay
    sta w0+1
    jsr sprite_draw_overlay

    ;Get the sprites on the screen.
    lda #>(sprite)
    sta $4014

    lda #$20
    sta ppu_2006+1
    lda #0
    sta ppu_2006
    sta ppu_2005
    lda #-8
    sta ppu_2005+1
    upload_ppu_2006
    upload_ppu_2005

    ;Turn on graphics and sprites.
    set_ppu_2001_bit PPU1_SPRITE_VISIBILITY
    set_ppu_2001_bit PPU1_BACKGROUND_VISIBILITY
    upload_ppu_2001

    lda #0
    sta current_song
    sta pause_flag

    wait_vblank

    ;initialize modules
    lda #0
    sta nmis
    jsr get_tv_system
    tax
    lda tv_system_to_sound_region,x
    sta sound_param_byte_0
    lda #<song_list
    sta sound_param_word_0
    lda #>song_list
    sta sound_param_word_0+1
    lda #<sfx_list
    sta sound_param_word_1
    lda #>sfx_list
    sta sound_param_word_1+1
    lda #<instrument_list
    sta sound_param_word_2
    lda #>instrument_list
    sta sound_param_word_2+1
    lda #<dpcm_list
    sta sound_param_word_3
    lda #>dpcm_list
    sta sound_param_word_3+1
    jsr sound_initialize

    ;load a song
    lda current_song
    sta sound_param_byte_0
    jsr play_song

    lda #<vblank_demo
    sta vblank_routine
    lda #>vblank_demo
    sta vblank_routine+1

main_loop:
    clear_vblank_done
    wait_vblank_done

    jsr controller_read

    lda controller_buffer+buttons::_a
    and #%00000011
    cmp #%00000001
    bne :+

    lda #sfx_index_sfx_collide
    sta sound_param_byte_0
    lda #soundeffect_one
    sta sound_param_byte_1
    jsr play_sfx

:

    lda controller_buffer+buttons::_b
    and #%00000011
    cmp #%00000001
    bne :+

    lda #sfx_index_sfx_dpcm
    sta sound_param_byte_0
    lda #soundeffect_two
    sta sound_param_byte_1
    jsr play_sfx

:

    lda controller_buffer+buttons::_up
    and #%00000011
    cmp #%00000001
    bne :++

    inc current_song
    lda current_song
    cmp #(MAX_TRACKS)
    bne :+
    lda #(MAX_TRACKS-1)
    sta current_song
:

    lda #0
    sta pause_flag
    lda current_song
    sta sound_param_byte_0
    jsr play_song

:

    lda controller_buffer+buttons::_down
    and #%00000011
    cmp #%00000001
    bne :++

    dec current_song
    lda current_song
    cmp #$ff
    bne :+
    lda #0
    sta current_song
:

    lda #0
    sta pause_flag
    lda current_song
    sta sound_param_byte_0
    jsr play_song
:

    lda controller_buffer+buttons::_start
    and #%00000011
    cmp #%00000001
    bne :+

    .scope
    lda pause_flag
    eor #1
    sta pause_flag

    lda pause_flag
    beq unpause
pause:
    jsr pause_song
    jmp done
unpause:
    jsr resume_song
done:
    .endscope

:

    jmp main_loop

;
; NES TV system detection code
; Copyright 2011 Damian Yerrick
;
; Copying and distribution of this file, with or without
; modification, are permitted in any medium without royalty provided
; the copyright notice and this notice are preserved in any source
; code copies.  This file is offered as-is, without any warranty.
;
.align 32
;;
; Detects which of NTSC, PAL, or Dendy is in use by counting cycles
; between NMIs.
;
; NTSC NES produces 262 scanlines, with 341/3 CPU cycles per line.
; PAL NES produces 312 scanlines, with 341/3.2 CPU cycles per line.
; Its vblank is longer than NTSC, and its CPU is slower.
; Dendy is a Russian famiclone distributed by Steepler that uses the
; PAL signal with a CPU as fast as the NTSC CPU.  Its vblank is as
; long as PAL's, but its NMI occurs toward the end of vblank (line
; 291 instead of 241) so that cycle offsets from NMI remain the same
; as NTSC, keeping Balloon Fight and any game using a CPU cycle-
; counting mapper (e.g. FDS, Konami VRC) working.
;
; nmis is a variable that the NMI handler modifies every frame.
; Make sure your NMI handler finishes within 1500 or so cycles (not
; taking the whole NMI or waiting for sprite 0) while calling this,
; or the result in A will be wrong.
;
; @return A: TV system (0: NTSC, 1: PAL, 2: Dendy; 3: unknown
;         Y: high byte of iterations used (1 iteration = 11 cycles)
;         X: low byte of iterations used
.proc get_tv_system
  ldx #0
  ldy #0
  lda nmis
nmiwait1:
  cmp nmis
  beq nmiwait1
  lda nmis

nmiwait2:
  ; Each iteration takes 11 cycles.
  ; NTSC NES: 29780 cycles or 2707 = $A93 iterations
  ; PAL NES:  33247 cycles or 3022 = $BCE iterations
  ; Dendy:    35464 cycles or 3224 = $C98 iterations
  ; so we can divide by $100 (rounding down), subtract ten,
  ; and end up with 0=ntsc, 1=pal, 2=dendy, 3=unknown
  inx
  bne :+
  iny
:
  cmp nmis
  beq nmiwait2
  tya
  sec
  sbc #10
  cmp #3
  bcc notAbove3
  lda #3
notAbove3:
  rts
.endproc

.proc vblank_get_tv_system
    inc nmis
    rts
.endproc

.proc vblank_demo

    ;Just use up vblank cycles to push monochrome bit
    ;CPU usage display of sound engine onto the screen.
    ldy #130
    lda sound_region
    cmp #SOUND_REGION_PAL
    bne :+
    ldy #255
:
:   ldx #7
:   dex
    bne :-
    dey
    bne :--

    ;turn on monochrome color while the sound engine runs
    set_ppu_2001_bit PPU1_DISPLAY_TYPE
    upload_ppu_2001

    ;update the sound engine. This should always be done at the
    ;end of vblank, this way it is always running at the same speed
    ;even if your game slows down.
    soundengine_update

    ;turn off monochrome color now that the sound engine is
    ;done. You should see a nice gray bar that shows how much
    ;cpu time the sound engine is using.
    clear_ppu_2001_bit PPU1_DISPLAY_TYPE
    upload_ppu_2001

    rts
.endproc

vblank:

    pha
    txa
    pha
    tya
    pha
    php

    jsr vblank_indirect

    lda #1
    sta vblank_done_flag

    plp
    pla
    tay
    pla
    tax
    pla

irq:
    rti

.proc vblank_indirect
    jmp (vblank_routine)
.endproc

name_table:
.include "name_table.inc"

sprite_overlay:
  .byte $22
  .byte $70,$01,$00,$c0,$38
  .byte $70,$02,$00,$c8,$30
  .byte $78,$03,$00,$b8,$40
  .byte $78,$04,$00,$c0,$38
  .byte $78,$05,$00,$c8,$30
  .byte $78,$06,$00,$d0,$28
  .byte $80,$07,$00,$b0,$48
  .byte $80,$08,$00,$b8,$40
  .byte $80,$09,$00,$c0,$38
  .byte $80,$0a,$00,$c8,$30
  .byte $88,$0b,$00,$78,$80
  .byte $88,$0c,$00,$80,$78
  .byte $88,$0d,$00,$88,$70
  .byte $88,$0e,$00,$b0,$48
  .byte $88,$0f,$00,$b8,$40
  .byte $88,$10,$00,$c0,$38
  .byte $90,$11,$00,$78,$80
  .byte $90,$12,$00,$80,$78
  .byte $90,$13,$00,$88,$70
  .byte $90,$14,$00,$90,$68
  .byte $90,$15,$00,$a8,$50
  .byte $90,$16,$00,$b0,$48
  .byte $90,$17,$00,$b8,$40
  .byte $90,$18,$00,$c0,$38
  .byte $98,$19,$00,$80,$78
  .byte $98,$1a,$00,$88,$70
  .byte $98,$1b,$00,$90,$68
  .byte $98,$1c,$00,$98,$60
  .byte $98,$1d,$00,$a0,$58
  .byte $98,$1e,$00,$a8,$50
  .byte $98,$1f,$00,$b0,$48
  .byte $98,$20,$00,$b8,$40
  .byte $a0,$21,$00,$90,$68
  .byte $a0,$22,$00,$a0,$58

.segment "VECTORS"
    .word vblank
    .word reset
    .word irq

.segment "BGCHR0"
.include "bg_chr.inc"

.segment "SPRCHR0"
.include "spr_chr.inc"
