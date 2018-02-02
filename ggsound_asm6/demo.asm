include "ppu.inc"
include "controller.inc"
include "sprite.inc"
include "ggsound.inc"

;****************************************************************
;iNES header
;****************************************************************
.byte "NES",$1a
.byte $01 ; 1 PRG-ROM block
.byte $01 ; 1 CHR-ROM block
; ROM control bytes: Horizontal mirroring, no SRAM
; or trainer, Mapper #0
.byte $01 ;
.byte $00 ;
.byte 0,0,0,0,0,0,0,0  ; pad header to 16 bytes

;****************************************************************
;ZP variables
;****************************************************************
.base $0000
.enum $0000

include "demo_zp.inc"
include "ggsound_zp.inc"

.ende

;****************************************************************
;RAM variables
;****************************************************************
.base $0200
.enum $0200

include "demo_ram.inc"
include "ggsound_ram.inc"

.ende

;****************************************************************
;Engine code, music data, and helper modules
;****************************************************************
.base $C000
include "get_tv_system.asm"
include "sprite.asm"
include "ppu.asm"
include "controller.asm"
include "ggsound.asm"
include "track_data.inc"
.align 64
include "track_dpcm.inc"

;****************************************************************
;Data used for demo
;****************************************************************

palette:
    .db $0e,$08,$18,$20,$0e,$0e,$12,$20,$0e,$0e,$0e,$0e,$0e,$0e,$0e,$0e
    .db $0e,$0e,$09,$1a,$0e,$0e,$0e,$0e,$0e,$0e,$0e,$0e,$0e,$0e,$0e,$0e

tv_system_to_sound_region:
    .db SOUND_REGION_NTSC, SOUND_REGION_PAL, SOUND_REGION_DENDY, SOUND_REGION_NTSC

;****************************************************************
;Demo entry point
;****************************************************************
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
    lda #<(vblank_get_tv_system)
    sta vblank_routine
    lda #>(vblank_get_tv_system)
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
    lda #<(palette)
    sta palette_address
    lda #>(palette)
    sta palette_address+1
    jsr ppu_load_palette

    ;Load nametable.
    lda #$20
    sta ppu_2006
    lda #$00
    sta ppu_2006+1
    upload_ppu_2006
    lda #<(name_table)
    sta w0
    lda #>(name_table)
    sta w0+1
    jsr ppu_load_nametable

    lda #0
    sta next_sprite_address

    ;Draw sprite overlay.
    lda #<(sprite_overlay)
    sta w0
    lda #>(sprite_overlay)
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
    lda #<(song_list)
    sta sound_param_word_0
    lda #>(song_list)
    sta sound_param_word_0+1
    lda #<(sfx_list)
    sta sound_param_word_1
    lda #>(sfx_list)
    sta sound_param_word_1+1
    lda #<(instrument_list)
    sta sound_param_word_2
    lda #>(instrument_list)
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

    lda #<(vblank_demo)
    sta vblank_routine
    lda #>(vblank_demo)
    sta vblank_routine+1

main_loop:
    clear_vblank_done
    wait_vblank_done

    jsr controller_read

    lda controller_buffer+buttons_a
    and #%00000011
    cmp #%00000001
    bne skipa

    lda #sfx_index_sfx_collide
    sta sound_param_byte_0
    lda #soundeffect_one
    sta sound_param_byte_1
    jsr play_sfx

skipa:

    lda controller_buffer+buttons_b
    and #%00000011
    cmp #%00000001
    bne skipb

    lda #sfx_index_sfx_dpcm
    sta sound_param_byte_0
    lda #soundeffect_two
    sta sound_param_byte_1
    jsr play_sfx

skipb:

    lda controller_buffer+buttons_up
    and #%00000011
    cmp #%00000001
    bne skipup

    inc current_song
    lda current_song
    cmp #7
    bne +
    lda #6
    sta current_song
+

    lda current_song
    sta sound_param_byte_0
    jsr play_song

skipup:

    lda controller_buffer+buttons_down
    and #%00000011
    cmp #%00000001
    bne skipdown

    dec current_song
    lda current_song
    cmp #$ff
    bne +
    lda #0
    sta current_song
+

    lda current_song
    sta sound_param_byte_0
    jsr play_song
skipdown:

    lda controller_buffer+buttons_start
    and #%00000011
    cmp #%00000001
    bne skipstart

    lda pause_flag
    eor #1
    sta pause_flag
    lda pause_flag
    bne paused
unpaused:

    jsr resume_song

    jmp done
paused:

    jsr pause_song

done:

skipstart:

    jmp main_loop

vblank_get_tv_system:
    inc nmis
    rts

vblank_demo:
    ;Just use up vblank cycles to push monochrome bit
    ;CPU usage display of sound engine onto the screen.
    ldy #130
    lda sound_region
    cmp #SOUND_REGION_PAL
    bne +
    ldy #255
+
--  ldx #7
-   dex
    bne -
    dey
    bne --

    ;turn on monochrome color while the sound engine runs
    set_ppu_2001_bit PPU1_DISPLAY_TYPE
    upload_ppu_2001

    ;update the sound engine. This should always be done at the
    ;end of vblank, this way it is always running at the same speed
    ;even if your game s<s down.
    soundengine_update

    ;turn off monochrome color now that the sound engine is
    ;done. You should see a nice gray bar that shows how much
    ;cpu time the sound engine is using.
    clear_ppu_2001_bit PPU1_DISPLAY_TYPE
    upload_ppu_2001

    rts

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

vblank_indirect:
    jmp (vblank_routine)

name_table:
include "name_table.inc"

sprite_overlay:
include "sprite_overlay.inc"

;****************************************************************
;Vectors
;****************************************************************
.org $FFFA     ;first of the three vectors starts here
.dw vblank     ;when an NMI happens (once per frame if enabled) the
               ;processor will jump to the label NMI:
.dw reset      ;when the processor first turns on or is reset, it will jump
               ;to the label RESET:
.dw irq        ;external interrupt IRQ is not used in this tutorial

;****************************************************************
;CHR-ROM data
;****************************************************************
.base $0000
.include "bg_chr.inc"
.org $1000
.include "spr_chr.inc"
.pad $2000
