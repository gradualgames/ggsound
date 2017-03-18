;expects palette_address to have address of palette
ppu_load_palette:
    ldy #0
    lda #$3F
    sta $2006
    lda #$00
    sta $2006
    ldx #$00
-
    lda (palette_address),y
    sta $2007
    inx
    iny
    cpx #$20
    bne -
    rts

ppu_load_palette_bg:
    ldy #0
    lda #$3F
    sta $2006
    lda #$00
    sta $2006
    ldx #$00
-
    lda (w0),y
    sta $2007
    inx
    iny
    cpx #$10
    bne -
    rts

ppu_load_black_palette:
    ldy #0
    lda #$3F
    sta $2006
    lda #$00
    sta $2006
    ldx #$00
    lda #$0e
-
    sta $2007
    inx
    iny
    cpx #$20
    bne -
    rts

;loads a nametable and attribute table located at address in w0
;assumes VRAM points to the nametable that is to be loaded
ppu_load_nametable:
    ldy #$00
    ldx #$04
-
    lda (w0),y
    sta $2007
    iny
    bne -
    inc w0+1
    dex
    bne -

    rts
