.ifndef PPU_INC
PPU_INC = 1

.global ppu_vblank_nop
.global ppu_load_palette
.global ppu_load_palette_bg
.global ppu_load_black_palette
.global ppu_load_chr_amount
.global ppu_load_nametable
.global ppu_safely_disable_graphics
.global ppu_safely_enable_graphics
.global ppu_load_dynamic_palette_brightness
.global ppu_load_dynamic_palette_brightness_bg
.global ppu_load_dynamic_palette_brightness_spr
.global ppu_fade_in_palette
.global ppu_fade_out_palette
.global ppu_upload_dynamic_palette_ppu

MIN_BRIGHTNESS_LEVEL = 0
MAX_BRIGHTNESS_LEVEL = 4
FADING_SPEED = 5

;bit positions for PPU control register $2000
PPU0_EXECUTE_NMI = 7
PPU0_MASTER_SLAVE = 6
PPU0_SPRITE_SIZE = 5
PPU0_BACKGROUND_PATTERN_TABLE_ADDRESS = 4
PPU0_SPRITE_PATTERN_TABLE_ADDRESS = 3
PPU0_ADDRESS_INCREMENT = 2
PPU0_NAMETABLE_ADDRESS1 = 1
PPU0_NAMETABLE_ADDRESS0 = 0

;bit positions for PPU control register $2001
PPU1_FULL_BACKGROUND_COLOR_2 = 7
PPU1_FULL_BACKGROUND_COLOR_1 = 6
PPU1_FULL_BACKGROUND_COLOR_0 = 5
PPU1_COLOR_INTENSITY_2 = 7
PPU1_COLOR_INTENSITY_1 = 6
PPU1_COLOR_INTENSITY_0 = 5
PPU1_SPRITE_VISIBILITY = 4
PPU1_BACKGROUND_VISIBILITY = 3
PPU1_SPRITE_CLIPPING = 2
PPU1_BACKGROUND_CLIPPING = 1
PPU1_DISPLAY_TYPE = 0

.macro set_ppu_2006 nametable, row, column

    lda #nametable
    ;or in the upper two bits of row
    ora #(row >> 3)
    sta $2006
    lda #column
    ;or in the lower three bits of row
    ora #<(row << 5)
    sta $2006

.endmacro

;also sets ppu 2006 but uses absolute rather than immediate addressing
.macro set_ppu_2006_abs nametable, row, column

    ;get the upper two bits of row
    lda row
    lsr
    lsr
    lsr
    ;or in the nametable bits
    ora nametable
    sta ppu_2006
    ;get the lower three bits of row
    lda row
    asl
    asl
    asl
    asl
    asl
    ;or in the column
    ora column
    sta ppu_2006+1

.endmacro

.macro set_ppu_2000_bit bit_position

    ;load the current state of the ppu register
    lda ppu_2000
    ora #( 1 << bit_position )
    sta ppu_2000

.endmacro

.macro clear_ppu_2000_bit bit_position

    ;load the current state of the ppu register
    lda ppu_2000
    and #( ~( 1 << bit_position ) )
    sta ppu_2000

.endmacro

.macro set_ppu_2001_bit bit_position

    ;load the current state of the ppu register
    lda ppu_2001
    ora #( 1 << bit_position )
    sta ppu_2001

.endmacro

.macro clear_ppu_2001_bit bit_position

    ;load the current state of the ppu register
    lda ppu_2001
    and #( ~( 1 << bit_position ) )
    sta ppu_2001

.endmacro

.macro upload_ppu_2000

    lda ppu_2000
    sta $2000

.endmacro

.macro upload_ppu_2001

    lda ppu_2001
    sta $2001

.endmacro

.macro upload_ppu_2005

    lda ppu_2005
    sta $2005
    lda ppu_2005+1
    sta $2005

.endmacro

.macro upload_ppu_2006

    lda ppu_2006
    sta $2006
    lda ppu_2006+1
    sta $2006

.endmacro

.macro wait_vblank

.scope
wait:
    bit $2002
    bpl wait
.endscope
    
.endmacro

.macro wait_vblank_done

;wait til vblank says it is done
.scope
wait:
    lda vblank_done_flag
    beq wait
.endscope

.endmacro

;clear the vblank done flag (usually used right before a wait,
;so that we can be certain we're outside of vblank and not about
;to be interrupted)
.macro clear_vblank_done

    lda #0
    sta vblank_done_flag

.endmacro

;set the vblank done flag.
;use this flag to determine when it is safe to
;operate on the PPU when graphics are off, or swap out the
;indirect vblank_routine itself.
.macro set_vblank_done

    lda #1
    sta vblank_done_flag

.endmacro

.endif
