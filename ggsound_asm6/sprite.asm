;this routine uses the same data structure as metasprites, but it
;is intended for a full screen overlay for cut-scenes.
;expects w0 to be address to the sprite overlay to draw
sprite_draw_overlay:
count = b0

  ldy #0
  lda (w0),y
  sta count

  clc
  lda w0
  adc #1
  sta w0
  lda w0+1
  adc #0
  sta w0+1

  ldx next_sprite_address

-

  ldy #sprite_struct_ycoord
  sec
  lda (w0),y
  sbc #1
  sta sprite,x
  inx

  ldy #sprite_struct_tile
  lda (w0),y
  sta sprite,x
  inx

  ldy #sprite_struct_attribute
  lda (w0),y
  sta sprite,x
  inx

  ldy #sprite_struct_xcoord
  lda (w0),y
  sta sprite,x
  inx

  stx next_sprite_address

  clc
  lda w0
  adc #5
  sta w0
  lda w0+1
  adc #0
  sta w0+1

  dec count
  bne -

  rts
