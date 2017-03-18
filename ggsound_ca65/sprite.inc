.ifndef SPRITE_INC
SPRITE_INC = 1

.global sprite_draw_overlay

.struct sprite_struct
  ycoord .byte
  tile .byte
  attribute .byte
  xcoord .byte
.endstruct

.endif
