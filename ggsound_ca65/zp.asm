.include "zp.inc"

.segment "ZEROPAGE"

b0: .res 1
b1: .res 1
b2: .res 1
b3: .res 1
b4: .res 1
b5: .res 1
b6: .res 1
b7: .res 1
b8: .res 1
b9: .res 1
b10: .res 1
b11: .res 1

w0:  .res 2
w1:  .res 2
w2:  .res 2
w3:  .res 2
w4:  .res 2
w5:  .res 2
w6:  .res 2
w7:  .res 2
w8:  .res 2
w9:  .res 2
w10: .res 2
w11: .res 2
w12: .res 2
w13: .res 2
w14: .res 2
w15: .res 2
w16: .res 2
w17: .res 2
w18: .res 2
w19: .res 2
w20: .res 2
ppu_2000: .res 1
ppu_2001: .res 1
ppu_2005: .res 1
ppu_2006: .res 1
palette_address: .res 2
controller_buffer: .res 8
controller_routine: .res 2
vblank_routine: .res 2
vblank_done_flag: .res 1
current_song: .res 1
pause_flag: .res 1
next_sprite_address: .res 1
nmis: .res 1
