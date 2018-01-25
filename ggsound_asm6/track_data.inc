song_index_robot_adv = 0
song_index_k466 = 1
song_index_k11 = 2
song_index_soler42 = 3
song_index_antagonist = 4
song_index_arps = 5
song_index_noise_arps = 6

sfx_index_sfx_shot = 0
sfx_index_sfx_laser = 1
sfx_index_sfx_dpcm = 2
sfx_index_sfx_zap = 3
sfx_index_sfx_collide = 4

song_list:
  .dw robot_adv
  .dw k466
  .dw k11
  .dw soler42
  .dw antagonist
  .dw arps
  .dw noise_arps

sfx_list:
  .dw sfx_shot
  .dw sfx_laser
  .dw sfx_dpcm
  .dw sfx_zap
  .dw sfx_collide

envelopes_list:
  .dw volume
  .dw arpeggio
  .dw pitch
  .dw duty

dpcm_list:
  .dw dpcm_samples_list
  .dw dpcm_note_to_sample_index
  .dw dpcm_note_to_sample_length
  .dw dpcm_note_to_loop_pitch_index

volume:
  .dw volume0
  .dw volume1
  .dw volume2
  .dw volume3
  .dw volume4
  .dw volume5
  .dw volume6
  .dw volume7
  .dw volume8
  .dw volume9
  .dw volume10
  .dw volume11
  .dw volume12
  .dw volume13
  .dw volume14
  .dw volume15
  .dw volume16
  .dw volume17
  .dw volume18
  .dw volume19
  .dw volume20
  .dw volume21
  .dw volume22

arpeggio:
  .dw arpeggio0
  .dw arpeggio1
  .dw arpeggio2
  .dw arpeggio3
  .dw arpeggio4
  .dw arpeggio5

pitch:
  .dw pitch0
  .dw pitch1
  .dw pitch2
  .dw pitch3
  .dw pitch4
  .dw pitch5
  .dw pitch6

duty:
  .dw duty0
  .dw duty1
  .dw duty2
  .dw duty3
  .dw duty4
  .dw duty5
  .dw duty6
  .dw duty7
  .dw duty8
  .dw duty9

volume0:
  .db 12,10,6,4,3,4,5,8,10,8,5,3,3,ENV_STOP
volume1:
  .db 11,8,7,8,10,8,5,3,1,1,2,4,5,5,3,2,1,1,ENV_STOP
volume2:
  .db 10,10,10,10,10,10,0,ENV_STOP
volume3:
  .db 12,5,3,1,0,ENV_STOP
volume4:
  .db 0,ENV_STOP
volume5:
  .db 15,6,10,11,11,10,9,8,7,6,5,4,3,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,ENV_STOP
volume6:
  .db 14,14,14,11,4,2,2,2,ENV_STOP
volume7:
  .db 14,13,12,11,10,9,8,8,7,6,5,4,3,2,1,0,ENV_STOP
volume8:
  .db 6,9,11,11,7,6,5,5,ENV_STOP
volume9:
  .db 15,2,0,0,0,0,ENV_STOP
volume10:
  .db 0,ENV_STOP
volume11:
  .db 9,9,9,6,2,1,1,1,ENV_STOP
volume12:
  .db 3,4,4,5,5,5,5,5,5,5,5,4,4,4,4,4,4,4,3,3,3,ENV_STOP
volume13:
  .db 0,ENV_STOP
volume14:
  .db 8,4,3,2,2,1,1,0,ENV_STOP
volume15:
  .db 3,4,4,5,5,5,5,5,5,5,5,4,4,4,4,4,4,4,3,3,3,ENV_STOP
volume16:
  .db 1,ENV_STOP
volume17:
  .db 5,4,3,3,2,2,1,1,0,ENV_STOP
volume18:
  .db 3,3,4,5,5,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,1,ENV_STOP
volume19:
  .db 4,3,2,1,0,ENV_STOP
volume20:
  .db 4,4,5,5,6,6,5,5,4,4,3,3,2,2,1,1,1,1,0,ENV_STOP
volume21:
  .db 1,ENV_STOP
volume22:
  .db 0,ENV_STOP

arpeggio0:
  .db ARP_TYPE_ABSOLUTE,0,3,7,12,ENV_LOOP,1
arpeggio1:
  .db ARP_TYPE_ABSOLUTE,0,4,7,12,ENV_LOOP,1
arpeggio2:
  .db ARP_TYPE_ABSOLUTE,0,3,6,12,ENV_LOOP,1
arpeggio3:
  .db ARP_TYPE_FIXED,7,ENV_STOP
arpeggio4:
  .db ARP_TYPE_FIXED,0,1,2,3,4,5,6,7,8,ENV_STOP
arpeggio5:
  .db ARP_TYPE_ABSOLUTE,ENV_STOP

pitch0:
  .db 12,12,12,12,12,12,12,12,12,12,ENV_STOP
pitch1:
  .db 10,10,10,10,10,10,10,10,10,10,10,10,10,10,ENV_STOP
pitch2:
  .db 0,0,0,0,0,0,0,0,0,-1,-1,1,1,1,1,-1,-1,-1,-1,ENV_LOOP,11
pitch3:
  .db 1,1,1,1,1,1,1,1,1,1,1,1,1,1,ENV_STOP
pitch4:
  .db 0,0,0,0,0,0,0,0,0,-1,-1,1,1,1,1,-1,-1,-1,-1,ENV_LOOP,11
pitch5:
  .db 0,0,0,0,0,0,0,0,0,-1,-1,1,1,1,1,-1,-1,-1,-1,ENV_LOOP,11
pitch6:
  .db 0,ENV_STOP

duty0:
  .db 128,DUTY_ENV_STOP
duty1:
  .db 64,DUTY_ENV_STOP
duty2:
  .db 128,DUTY_ENV_STOP
duty3:
  .db 128,0,DUTY_ENV_STOP
duty4:
  .db 128,0,DUTY_ENV_STOP
duty5:
  .db 192,DUTY_ENV_STOP
duty6:
  .db 128,DUTY_ENV_STOP
duty7:
  .db 192,64,DUTY_ENV_STOP
duty8:
  .db 64,DUTY_ENV_STOP
duty9:
  .db 0,DUTY_ENV_STOP

dpcm_samples_list:
  .db <(dpcm_sample_bde >> 6)
  .db <(dpcm_sample_sd1 >> 6)
  .db <(dpcm_sample_sfx >> 6)

dpcm_note_to_sample_index:
  .db $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff
  .db $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$00,$01,$02,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff
  .db $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff
  .db $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff

dpcm_note_to_sample_length:
  .db $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff
  .db $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$0f,$2f,$86,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff
  .db $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff
  .db $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff

dpcm_note_to_loop_pitch_index:
  .db $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff
  .db $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$0f,$0f,$0f,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff
  .db $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff
  .db $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff

robot_adv:
  .db 0
  .db 6
  .db 0
  .db 5
  .dw robot_adv_square1
  .dw robot_adv_square2
  .dw robot_adv_triangle
  .dw robot_adv_noise
  .dw robot_adv_dpcm

robot_adv_square1:
robot_adv_square1_loop:
  .db CAL,<(robot_adv_square1_0),>(robot_adv_square1_0)
  .db CAL,<(robot_adv_square1_1),>(robot_adv_square1_1)
  .db CAL,<(robot_adv_square1_2),>(robot_adv_square1_2)
  .db CAL,<(robot_adv_square1_3),>(robot_adv_square1_3)
  .db GOT
  .dw robot_adv_square1_loop

robot_adv_square2:
robot_adv_square2_loop:
  .db CAL,<(robot_adv_square2_0),>(robot_adv_square2_0)
  .db CAL,<(robot_adv_square2_1),>(robot_adv_square2_1)
  .db CAL,<(robot_adv_square2_2),>(robot_adv_square2_2)
  .db CAL,<(robot_adv_square2_3),>(robot_adv_square2_3)
  .db GOT
  .dw robot_adv_square2_loop

robot_adv_triangle:
robot_adv_triangle_loop:
  .db CAL,<(robot_adv_triangle_0),>(robot_adv_triangle_0)
  .db CAL,<(robot_adv_triangle_1),>(robot_adv_triangle_1)
  .db CAL,<(robot_adv_triangle_2),>(robot_adv_triangle_2)
  .db CAL,<(robot_adv_triangle_3),>(robot_adv_triangle_3)
  .db GOT
  .dw robot_adv_triangle_loop

robot_adv_noise:
robot_adv_noise_loop:
  .db CAL,<(robot_adv_noise_0),>(robot_adv_noise_0)
  .db CAL,<(robot_adv_noise_1),>(robot_adv_noise_1)
  .db CAL,<(robot_adv_noise_2),>(robot_adv_noise_2)
  .db CAL,<(robot_adv_noise_3),>(robot_adv_noise_3)
  .db GOT
  .dw robot_adv_noise_loop

robot_adv_dpcm:
robot_adv_dpcm_loop:
  .db CAL,<(robot_adv_dpcm_0),>(robot_adv_dpcm_0)
  .db CAL,<(robot_adv_dpcm_0),>(robot_adv_dpcm_0)
  .db CAL,<(robot_adv_dpcm_0),>(robot_adv_dpcm_0)
  .db CAL,<(robot_adv_dpcm_0),>(robot_adv_dpcm_0)
  .db GOT
  .dw robot_adv_dpcm_loop

robot_adv_square1_0:
  .db STV,18,SAR,5,STP,5,SDU,7,SL1,DS3,D3,C3,D3,SL4,C3,SL1,C3,STV,22
  .db STP,6,SDU,9,A0,STV,18,STP,5,SDU,7,C3,STV,22,STP,6,SDU,9
  .db A0,STV,18,STP,5,SDU,7,C3,C3,STV,22,STP,6,SDU,9,SL2,A0,STV,18
  .db STP,5,SDU,7,SL1,D3,C3,B2,C3,SL4,B2,SL1,B2,STV,22,STP,6
  .db SDU,9,A0,STV,18,STP,5,SDU,7,B2,STV,22,STP,6,SDU,9,A0,STV,18
  .db STP,5,SDU,7,B2,B2,STV,22,STP,6,SDU,9,SL2,A0,STV,18,STP,5
  .db SDU,7,SL1,C3,B2,A2,B2,SL8,A2,SL4,A2,SL8,G2,SL1,DS3,D3,C3
  .db B2,C3,B2,A2,G2
  .db RET

robot_adv_square1_1:
  .db STV,18,SAR,5,STP,5,SDU,7,SL1,DS3,D3,C3,D3,SL4,C3,SL1,C3,STV,22
  .db STP,6,SDU,9,A0,STV,18,STP,5,SDU,7,C3,STV,22,STP,6,SDU,9
  .db A0,STV,18,STP,5,SDU,7,C3,C3,STV,22,STP,6,SDU,9,SL2,A0,STV,18
  .db STP,5,SDU,7,SL1,D3,C3,B2,C3,SL4,B2,SL1,B2,STV,22,STP,6
  .db SDU,9,A0,STV,18,STP,5,SDU,7,B2,STV,22,STP,6,SDU,9,A0,STV,18
  .db STP,5,SDU,7,B2,B2,STV,22,STP,6,SDU,9,SL2,A0,STV,18,STP,5
  .db SDU,7,SL1,C3,B2,A2,B2,SL8,A2,SL4,A2,SL8,G2,SL1,DS3,D3,C3
  .db B2,C3,B2,C3,D3
  .db RET

robot_adv_square1_2:
  .db STV,18,SAR,5,STP,5,SDU,7,SL1,AS2,C3,AS2,SL5,C3,SL1,C3,AS2
  .db GS2,G2,F2,DS2,D2,C2,SL0,D2,SL1,C3,D3,C3,SL5,D3,SL1,D3,C3
  .db B2,A2,B2,C3,D3,F3,SL0,DS3
  .db RET

robot_adv_square1_3:
  .db STV,18,SAR,5,STP,5,SDU,7,SL1,AS2,C3,AS2,SL5,C3,SL1,C3,AS2
  .db C3,D3,DS3,F3,G3,AS3,SL0,F3,SL1,AS3,B3,AS3,SL5,B3,SL1,G4,F4
  .db DS4,D4,C4,B3,A3,G3,SL0,DS3
  .db RET

robot_adv_square2_0:
  .db STV,18,SAR,5,STP,5,SDU,7,SL1,G3,F3,DS3,F3,SL4,DS3,SL1,DS3
  .db STV,22,STP,6,SDU,9,A0,STV,18,STP,5,SDU,7,DS3,STV,22,STP,6
  .db SDU,9,A0,STV,18,STP,5,SDU,7,DS3,DS3,STV,22,STP,6,SDU,9
  .db SL2,A0,STV,18,STP,5,SDU,7,SL1,F3,DS3,D3,DS3,SL4,D3,SL1,D3
  .db STV,22,STP,6,SDU,9,A0,STV,18,STP,5,SDU,7,D3,STV,22,STP,6
  .db SDU,9,A0,STV,18,STP,5,SDU,7,D3,D3,STV,22,STP,6,SDU,9,SL2
  .db A0,STV,18,STP,5,SDU,7,SL1,DS3,D3,C3,D3,SL8,C3,SL4,FS3,SL8
  .db G3,SL1,G3,F3,DS3,D3,DS3,D3,C3,B2
  .db RET

robot_adv_square2_1:
  .db STV,18,SAR,5,STP,5,SDU,7,SL1,G3,F3,DS3,F3,SL4,DS3,SL1,DS3
  .db STV,22,STP,6,SDU,9,A0,STV,18,STP,5,SDU,7,DS3,STV,22,STP,6
  .db SDU,9,A0,STV,18,STP,5,SDU,7,DS3,DS3,STV,22,STP,6,SDU,9
  .db SL2,A0,STV,18,STP,5,SDU,7,SL1,F3,DS3,D3,DS3,SL4,D3,SL1,D3
  .db STV,22,STP,6,SDU,9,A0,STV,18,STP,5,SDU,7,D3,STV,22,STP,6
  .db SDU,9,A0,STV,18,STP,5,SDU,7,D3,D3,STV,22,STP,6,SDU,9,SL2
  .db A0,STV,18,STP,5,SDU,7,SL1,DS3,D3,C3,D3,SL8,C3,SL4,A3,SL8
  .db B3,SL1,G3,F3,DS3,D3,DS3,D3,DS3,F3
  .db RET

robot_adv_square2_2:
  .db STV,18,SAR,5,STP,5,SDU,7,SL1,G3,GS3,G3,SL5,GS3,SL1,GS3,G3
  .db F3,DS3,D3,C3,AS2,GS2,SL0,AS2,SL1,DS3,F3,DS3,SL5,F3,SL1,F3
  .db DS3,D3,C3,D3,G2,A2,B2,SL0,C3
  .db RET

robot_adv_square2_3:
  .db STV,18,SAR,5,STP,5,SDU,7,SL1,G3,GS3,G3,SL5,GS3,SL1,GS3,G3
  .db GS3,AS3,C4,D4,DS4,F4,SL0,D4,SL1,FS4,G4,FS4,SL5,G4,SL1,B4
  .db A4,G4,F4,DS4,D4,C4,B3,SL0,C4
  .db RET

robot_adv_triangle_0:
  .db STV,21,SAR,5,STP,6,SDU,9,SL1,C3,STV,22,A0,STV,21,C3,STV,22
  .db A0,STV,21,SL3,C3,STV,22,SL1,A0,STV,21,SL3,C3,STV,22,SL1
  .db A0,STV,21,SL3,C3,STV,22,SL1,A0,STV,21,G3,STV,22,A0,STV,21
  .db G3,STV,22,A0,STV,21,SL3,G3,STV,22,SL1,A0,STV,21,SL3,G3,STV,22
  .db SL1,A0,STV,21,SL3,G3,STV,22,SL1,A0,STV,21,A3,STV,22,A0,STV,21
  .db A3,STV,22,A0,STV,21,SL3,A3,STV,22,SL1,A0,STV,21,SL3,FS3
  .db STV,22,SL1,A0,STV,21,SL3,FS3,STV,22,SL1,A0,STV,21,G3,STV,22
  .db A0,STV,21,G3,STV,22,A0,STV,21,SL3,G3,STV,22,SL1,A0,STV,21
  .db SL3,G3,STV,22,SL1,A0,STV,21,SL3,D3,STV,22,SL1,A0
  .db RET

robot_adv_triangle_1:
  .db STV,21,SAR,5,STP,6,SDU,9,SL1,C3,STV,22,A0,STV,21,C3,STV,22
  .db A0,STV,21,SL3,C3,STV,22,SL1,A0,STV,21,SL3,C3,STV,22,SL1
  .db A0,STV,21,SL3,C3,STV,22,SL1,A0,STV,21,G3,STV,22,A0,STV,21
  .db G3,STV,22,A0,STV,21,SL3,G3,STV,22,SL1,A0,STV,21,SL3,G3,STV,22
  .db SL1,A0,STV,21,SL3,G3,STV,22,SL1,A0,STV,21,A3,STV,22,A0,STV,21
  .db A3,STV,22,A0,STV,21,SL3,A3,STV,22,SL1,A0,STV,21,SL3,FS3
  .db STV,22,SL1,A0,STV,21,SL3,FS3,STV,22,SL1,A0,STV,21,G3,STV,22
  .db A0,STV,21,G3,STV,22,A0,STV,21,SL3,G3,STV,22,SL1,A0,STV,21
  .db SL3,G3,STV,22,SL1,A0,STV,21,SL3,D3,STV,22,SL1,A0
  .db RET

robot_adv_triangle_2:
  .db STV,21,SAR,5,STP,6,SDU,9,SL1,GS2,STV,22,A0,STV,21,GS2,STV,22
  .db A0,STV,21,GS2,STV,22,A0,STV,21,GS2,STV,22,A0,STV,21,GS2
  .db STV,22,A0,STV,21,GS2,STV,22,A0,STV,21,GS2,STV,22,A0,STV,21
  .db GS2,STV,22,A0,STV,21,AS2,STV,22,A0,STV,21,AS2,STV,22
  .db A0,STV,21,AS2,STV,22,A0,STV,21,AS2,STV,22,A0,STV,21,AS2
  .db STV,22,A0,STV,21,AS2,STV,22,A0,STV,21,AS2,STV,22,A0,STV,21
  .db AS2,STV,22,A0,STV,21,B2,STV,22,A0,STV,21,B2,STV,22,A0,STV,21
  .db B2,STV,22,A0,STV,21,B2,STV,22,A0,STV,21,B2,STV,22,A0,STV,21
  .db B2,STV,22,A0,STV,21,B2,STV,22,A0,STV,21,B2,STV,22,A0,STV,21
  .db C3,STV,22,A0,STV,21,C3,STV,22,A0,STV,21,C3,STV,22,A0,STV,21
  .db C3,STV,22,A0,STV,21,C3,STV,22,A0,STV,21,C3,STV,22,A0,STV,21
  .db C3,STV,22,A0,STV,21,C3,STV,22,A0
  .db RET

robot_adv_triangle_3:
  .db STV,21,SAR,5,STP,6,SDU,9,SL1,GS2,STV,22,A0,STV,21,GS2,STV,22
  .db A0,STV,21,GS2,STV,22,A0,STV,21,GS2,STV,22,A0,STV,21,GS2
  .db STV,22,A0,STV,21,GS2,STV,22,A0,STV,21,GS2,STV,22,A0,STV,21
  .db GS2,STV,22,A0,STV,21,AS2,STV,22,A0,STV,21,AS2,STV,22
  .db A0,STV,21,AS2,STV,22,A0,STV,21,AS2,STV,22,A0,STV,21,AS2
  .db STV,22,A0,STV,21,AS2,STV,22,A0,STV,21,AS2,STV,22,A0,STV,21
  .db AS2,STV,22,A0,STV,21,B2,STV,22,A0,STV,21,B2,STV,22,A0,STV,21
  .db B2,STV,22,A0,STV,21,B2,STV,22,A0,STV,21,B2,STV,22,A0,STV,21
  .db B2,STV,22,A0,STV,21,B2,STV,22,A0,STV,21,B2,STV,22,A0,STV,21
  .db C3,STV,22,A0,STV,21,C3,STV,22,A0,STV,21,C3,STV,22,A0,STV,21
  .db C3,STV,22,A0,STV,21,C3,STV,22,A0,STV,21,C3,STV,22,A0,STV,21
  .db C3,STV,22,A0,STV,21,C3,STV,22,A0
  .db RET

robot_adv_noise_0:
  .db STV,14,SAR,5,STP,6,SDU,9,SL1,13,15,14,15,13,15,14,15,13,15
  .db 14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13
  .db 15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15
  .db 13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15
  .db RET

robot_adv_noise_1:
  .db STV,14,SAR,5,STP,6,SDU,9,SL1,13,15,14,15,13,15,14,15,13,15
  .db 14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13
  .db 15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15
  .db 13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15
  .db RET

robot_adv_noise_2:
  .db STV,14,SAR,5,STP,6,SDU,9,SL1,13,15,14,15,13,15,14,15,13,15
  .db 14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13
  .db 15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15
  .db 13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15
  .db RET

robot_adv_noise_3:
  .db STV,14,SAR,5,STP,6,SDU,9,SL1,13,15,14,15,13,15,14,15,13,15
  .db 14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13
  .db 15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15
  .db 13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15
  .db RET

robot_adv_dpcm_0:
  .db STV,14,SAR,5,STP,6,SDU,9,SL1,C3,SL3,C3,SL2,CS3,SL1,C3,SL5
  .db C3,SL2,CS3,C3,SL1,C3,SL3,C3,SL2,CS3,SL1,C3,SL3,C3,SL2,C3
  .db CS3,SL1,CS3,CS3,C3,SL3,C3,SL2,CS3,SL1,C3,SL5,C3,SL2,CS3
  .db C3,SL1,C3,SL3,C3,SL2,CS3,SL1,C3,SL3,C3,SL2,C3,SL1,CS3,CS3
  .db CS3,CS3
  .db RET

k466:
  .db 0
  .db 7
  .db 213
  .db 5
  .dw k466_square1
  .dw k466_square2
  .dw k466_triangle
  .dw 0
  .dw 0

k466_square1:
k466_square1_loop:
  .db CAL,<(k466_square1_0),>(k466_square1_0)
  .db CAL,<(k466_square1_1),>(k466_square1_1)
  .db CAL,<(k466_square1_2),>(k466_square1_2)
  .db CAL,<(k466_square1_3),>(k466_square1_3)
  .db CAL,<(k466_square1_4),>(k466_square1_4)
  .db CAL,<(k466_square1_5),>(k466_square1_5)
  .db CAL,<(k466_square1_6),>(k466_square1_6)
  .db CAL,<(k466_square1_7),>(k466_square1_7)
  .db GOT
  .dw k466_square1_loop

k466_square2:
k466_square2_loop:
  .db CAL,<(k466_square2_0),>(k466_square2_0)
  .db CAL,<(k466_square2_1),>(k466_square2_1)
  .db CAL,<(k466_square2_2),>(k466_square2_2)
  .db CAL,<(k466_square2_3),>(k466_square2_3)
  .db CAL,<(k466_square2_4),>(k466_square2_4)
  .db CAL,<(k466_square2_5),>(k466_square2_5)
  .db CAL,<(k466_square2_6),>(k466_square2_6)
  .db CAL,<(k466_square2_7),>(k466_square2_7)
  .db GOT
  .dw k466_square2_loop

k466_triangle:
k466_triangle_loop:
  .db CAL,<(k466_triangle_0),>(k466_triangle_0)
  .db CAL,<(k466_triangle_1),>(k466_triangle_1)
  .db CAL,<(k466_triangle_2),>(k466_triangle_2)
  .db CAL,<(k466_triangle_3),>(k466_triangle_3)
  .db CAL,<(k466_triangle_3),>(k466_triangle_3)
  .db CAL,<(k466_triangle_3),>(k466_triangle_3)
  .db CAL,<(k466_triangle_3),>(k466_triangle_3)
  .db CAL,<(k466_triangle_3),>(k466_triangle_3)
  .db GOT
  .dw k466_triangle_loop

k466_square1_0:
  .db STV,22,SAR,5,STP,6,SDU,9,SL3,A0,STV,0,SDU,0,GS4,C5,GS4,F4
  .db C4,CS4,GS3,AS3,G4,AS4,G4,E4,C4,CS4,AS3
  .db RET

k466_square1_1:
  .db STV,0,SAR,5,STP,6,SDU,0,SL3,C4,F4,GS4,F4,C4,GS3,F3,C3,CS4
  .db E3,F3,C4,G3,AS3,GS3,G3
  .db RET

k466_square1_2:
  .db STV,4,SAR,5,STP,6,SDU,9,SLL,18,C4,STV,0,SDU,0,SL2,E4,F4,G4
  .db F4,E4,SLE,F4,SL2,E4,F4,G4
  .db RET

k466_square1_3:
  .db STV,0,SAR,5,STP,6,SDU,0,SL2,F4,E4,SLE,F4,SL2,D4,DS4,F4,DS4
  .db D4,SLE,C4,SL2,B3,C4,D4
  .db RET

k466_square1_4:
  .db STV,0,SAR,5,STP,6,SDU,0,SL2,C4,B3,SLE,C4,SL2,B3,C4,D4,SL3
  .db G4,F4,F4,DS4,DS4,D4,D4,C4
  .db RET

k466_square1_5:
  .db STV,0,SAR,5,STP,6,SDU,0,SLL,18,B3,SL2,C4,B3,C4,SLL,18
  .db D4,SL2,C4,B3,C4
  .db RET

k466_square1_6:
  .db STV,0,SAR,5,STP,6,SDU,0,SLL,18,D4,SL2,D4,DS4,F4,DS4,D4,SLE
  .db C4,SL2,D4,DS4,F4
  .db RET

k466_square1_7:
  .db STV,0,SAR,5,STP,6,SDU,0,SL3,G3,F4,DS4,C4,F4,D4,C4,B3,SLL,24
  .db C4
  .db RET

k466_square2_0:
  .db STV,0,SAR,5,STP,6,SDU,0,SLC,F2,F2,G2,G2
  .db RET

k466_square2_1:
  .db STV,0,SAR,5,STP,6,SDU,0,SLC,GS3,GS3,SL6,AS3,GS3,G3,C3
  .db RET

k466_square2_2:
  .db STV,0,SAR,5,STP,6,SDU,0,SL3,F2,F3,GS3,F3,CS3,AS2,G2,E3,GS2
  .db F3,GS3,F3,CS3,AS2,G2,E3
  .db RET

k466_square2_3:
  .db STV,0,SAR,5,STP,6,SDU,0,SL3,GS2,F3,GS3,F3,D3,F3,G2,B2,C2
  .db C3,DS3,C3,GS2,C3,D2,B2
  .db RET

k466_square2_4:
  .db STV,0,SAR,5,STP,6,SDU,0,SL3,DS2,C3,DS3,C3,GS2,C3,D2,B2,SL6
  .db DS2,C3,F2,GS2
  .db RET

k466_square2_5:
  .db STV,0,SAR,5,STP,6,SDU,0,SL3,G2,F3,GS3,F3,D3,F3,GS2,F3,G2
  .db F3,GS3,F3,D3,F3,GS2,F3
  .db RET

k466_square2_6:
  .db STV,0,SAR,5,STP,6,SDU,0,SL3,G2,F3,GS3,F3,D3,F3,G2,B2,C2,C3
  .db DS3,C3,GS2,C3,F2,GS2
  .db RET

k466_square2_7:
  .db STV,0,SAR,5,STP,6,SDU,0,SLC,G1,G1,SLL,24,C1
  .db RET

k466_triangle_0:
  .db STV,22,SAR,5,STP,6,SDU,9,SLL,24,A0,STV,0,SDU,0,SLC,F3,E3
  .db RET

k466_triangle_1:
  .db STV,0,SAR,5,STP,6,SDU,0,SLC,F3,C3,SL6,CS3,C3,AS2,C3
  .db RET

k466_triangle_2:
  .db STV,4,SAR,5,STP,6,SDU,9,SLL,48,C4
  .db RET

k466_triangle_3:
  .db STV,22,SAR,5,STP,6,SDU,9,SLL,48,A0
  .db RET

k11:
  .db 0
  .db 5
  .db 42
  .db 4
  .dw k11_square1
  .dw k11_square2
  .dw k11_triangle
  .dw k11_noise
  .dw 0

k11_square1:
k11_square1_loop:
  .db CAL,<(k11_square1_0),>(k11_square1_0)
  .db CAL,<(k11_square1_1),>(k11_square1_1)
  .db CAL,<(k11_square1_2),>(k11_square1_2)
  .db CAL,<(k11_square1_3),>(k11_square1_3)
  .db CAL,<(k11_square1_4),>(k11_square1_4)
  .db CAL,<(k11_square1_5),>(k11_square1_5)
  .db CAL,<(k11_square1_6),>(k11_square1_6)
  .db GOT
  .dw k11_square1_loop

k11_square2:
k11_square2_loop:
  .db CAL,<(k11_square2_0),>(k11_square2_0)
  .db CAL,<(k11_square2_1),>(k11_square2_1)
  .db CAL,<(k11_square2_2),>(k11_square2_2)
  .db CAL,<(k11_square2_3),>(k11_square2_3)
  .db CAL,<(k11_square2_4),>(k11_square2_4)
  .db CAL,<(k11_square2_5),>(k11_square2_5)
  .db CAL,<(k11_square2_6),>(k11_square2_6)
  .db GOT
  .dw k11_square2_loop

k11_triangle:
k11_triangle_loop:
  .db CAL,<(k11_triangle_0),>(k11_triangle_0)
  .db CAL,<(k11_triangle_1),>(k11_triangle_1)
  .db CAL,<(k11_triangle_2),>(k11_triangle_2)
  .db CAL,<(k11_triangle_3),>(k11_triangle_3)
  .db CAL,<(k11_triangle_4),>(k11_triangle_4)
  .db CAL,<(k11_triangle_5),>(k11_triangle_5)
  .db CAL,<(k11_triangle_6),>(k11_triangle_6)
  .db GOT
  .dw k11_triangle_loop

k11_noise:
k11_noise_loop:
  .db CAL,<(k11_noise_0),>(k11_noise_0)
  .db CAL,<(k11_noise_0),>(k11_noise_0)
  .db CAL,<(k11_noise_0),>(k11_noise_0)
  .db CAL,<(k11_noise_0),>(k11_noise_0)
  .db CAL,<(k11_noise_0),>(k11_noise_0)
  .db CAL,<(k11_noise_0),>(k11_noise_0)
  .db CAL,<(k11_noise_0),>(k11_noise_0)
  .db GOT
  .dw k11_noise_loop

k11_square1_0:
  .db STV,1,SAR,5,STP,6,SDU,1,SL8,G3,SL1,C4,B3,C4,B3,C4,B3,A3,B3
  .db SLC,C4,SL4,D4,DS4,F4,G4,C4,B3,A3,G3,F3
  .db RET

k11_square1_1:
  .db STV,1,SAR,5,STP,6,SDU,1,SL4,DS3,F3,G3,C3,B2,A2,G2,D4,DS4
  .db F4,G4,C4,B3,A3,G3,D4
  .db RET

k11_square1_2:
  .db STV,1,SAR,5,STP,6,SDU,2,SL4,DS4,G3,D4,G3,C4,SL2,B3,A3,B3
  .db G3,B3,D4,SL4,DS4,G3,D4,G3,C4,SL2,B3,A3,B3,G3,B3,D4
  .db RET

k11_square1_3:
  .db STV,1,SAR,5,STP,6,SDU,2,SL4,F4,G3,DS4,G3,D4,SL2,C4,B3,C4
  .db G3,C4,DS4,SL4,F4,G3,DS4,G3,D4,SL2,C4,B3,C4,G3,C4,DS4
  .db RET

k11_square1_4:
  .db STV,1,SAR,5,STP,6,SDU,1,SL2,DS4,D4,C4,AS3,C4,AS3,A3,G3,A3
  .db G3,FS3,E3,FS3,D3,E3,FS3,G3,D3,G3,AS3,SL4,D4,C4,SL1,C4,AS3
  .db C4,AS3,C4,AS3,A3,G3,AS3,A3,AS3,A3,AS3,A3,G3,FS3
  .db RET

k11_square1_5:
  .db STV,1,SAR,5,STP,6,SDU,1,SL2,G3,D3,G3,AS3,SL4,D4,C4,SL1,C4
  .db AS3,C4,AS3,C4,AS3,A3,G3,AS3,A3,AS3,A3,AS3,A3,G3,FS3,SL2
  .db D4,G3,AS3,D4,SL4,G4,C4,SL1,C4,AS3,C4,AS3,C4,AS3,A3,G3,AS3
  .db A3,AS3,A3,AS3,A3,G3,FS3
  .db RET

k11_square1_6:
  .db STV,1,SAR,5,STP,6,SDU,1,SL2,G3,G4,F4,DS4,D4,C4,B3,A3,G3,G3
  .db F3,DS3,D3,C3,B2,A2,SL8,G2,D4,SL0,G4
  .db RET

k11_square2_0:
  .db STV,1,SAR,5,STP,6,SDU,1,SL8,C3,D3,SL4,DS3,D3,C3,B2,C3,D3
  .db DS3,F3,G3,A2,B2,G2
  .db RET

k11_square2_1:
  .db STV,1,SAR,5,STP,6,SDU,1,SL4,C2,D2,DS2,F2,SL8,G2,SL4,G1,B2
  .db C3,D3,DS3,F3,SL0,G3
  .db RET

k11_square2_2:
  .db STV,1,SAR,5,STP,6,SDU,2,SL8,G4,F4,DS4,D4,G4,F4,DS4,D4
  .db RET

k11_square2_3:
  .db STV,1,SAR,5,STP,6,SDU,2,SL8,GS4,G4,F4,DS4,GS4,G4,F4,DS4
  .db RET

k11_square2_4:
  .db STV,1,SAR,5,STP,6,SDU,1,SL4,C5,AS4,A4,G4,FS4,E4,D4,C4,SLC
  .db AS3,SL4,DS3,SL8,D3,C3
  .db RET

k11_square2_5:
  .db STV,1,SAR,5,STP,6,SDU,1,SLC,AS2,SL4,DS3,SL8,D3,C3,SLC,AS2
  .db SL4,C2,SL8,D2,D1
  .db RET

k11_square2_6:
  .db STV,1,SAR,5,STP,6,SDU,1,SLL,34,G1,SL2,D2,E2,FS2,G2,B1,C2
  .db D2,SL0,G1
  .db RET

k11_triangle_0:
  .db STV,2,SAR,5,STP,6,SDU,1,SL8,C3,D3,SL4,DS3,D3,C3,B2,C3,D3
  .db DS3,F3,G3,A2,B2,G2
  .db RET

k11_triangle_1:
  .db STV,2,SAR,5,STP,6,SDU,1,SL4,C2,D2,DS2,F2,SL8,G2,SL4,G1,B2
  .db C3,D3,DS3,F3,SL0,G3
  .db RET

k11_triangle_2:
  .db STV,2,SAR,5,STP,6,SDU,1,SL4,DS4,G3,D4,G3,C4,SL2,B3,A3,B3
  .db G3,B3,D4,SL4,DS4,G3,D4,G3,C4,SL2,B3,A3,B3,G3,B3,D4
  .db RET

k11_triangle_3:
  .db STV,2,SAR,5,STP,6,SDU,1,SL4,F4,G3,DS4,G3,D4,SL2,C4,B3,C4
  .db G3,C4,DS4,SL4,F4,G3,DS4,G3,D4,SL2,C4,B3,C4,G3,C4,DS4
  .db RET

k11_triangle_4:
  .db STV,2,SAR,5,STP,6,SDU,1,SL2,DS4,D4,C4,AS3,C4,AS3,A3,G3,A3
  .db G3,FS3,E3,FS3,D3,E3,FS3,G3,D3,G3,AS3,SL4,D4,C4,SL1,C4,AS3
  .db C4,AS3,C4,AS3,A3,G3,AS3,A3,AS3,A3,AS3,A3,G3,FS3
  .db RET

k11_triangle_5:
  .db STV,1,SAR,5,STP,6,SDU,1,SLC,AS2,SL4,DS3,SL8,D3,C3,SLC,AS2
  .db SL4,C2,SL8,D2,D1
  .db RET

k11_triangle_6:
  .db STV,1,SAR,5,STP,6,SDU,1,SLL,34,G1,SL2,D2,E2,FS2,G2,B1,C2
  .db D2,SL0,G1
  .db RET

k11_noise_0:
  .db STV,3,SAR,5,STP,6,SDU,9,SL8,3,3,SL4,3,0,3,0,3,0,3,0,3,0,3
  .db 0
  .db RET

soler42:
  .db 0
  .db 3
  .db 128
  .db 2
  .dw soler42_square1
  .dw soler42_square2
  .dw soler42_triangle
  .dw soler42_noise
  .dw 0

soler42_square1:
soler42_square1_loop:
  .db CAL,<(soler42_square1_0),>(soler42_square1_0)
  .db CAL,<(soler42_square1_1),>(soler42_square1_1)
  .db CAL,<(soler42_square1_2),>(soler42_square1_2)
  .db CAL,<(soler42_square1_3),>(soler42_square1_3)
  .db CAL,<(soler42_square1_4),>(soler42_square1_4)
  .db CAL,<(soler42_square1_5),>(soler42_square1_5)
  .db CAL,<(soler42_square1_6),>(soler42_square1_6)
  .db CAL,<(soler42_square1_7),>(soler42_square1_7)
  .db CAL,<(soler42_square1_8),>(soler42_square1_8)
  .db CAL,<(soler42_square1_9),>(soler42_square1_9)
  .db CAL,<(soler42_square1_10),>(soler42_square1_10)
  .db CAL,<(soler42_square1_11),>(soler42_square1_11)
  .db CAL,<(soler42_square1_12),>(soler42_square1_12)
  .db CAL,<(soler42_square1_13),>(soler42_square1_13)
  .db GOT
  .dw soler42_square1_loop

soler42_square2:
soler42_square2_loop:
  .db CAL,<(soler42_square2_0),>(soler42_square2_0)
  .db CAL,<(soler42_square2_1),>(soler42_square2_1)
  .db CAL,<(soler42_square2_2),>(soler42_square2_2)
  .db CAL,<(soler42_square2_3),>(soler42_square2_3)
  .db CAL,<(soler42_square2_4),>(soler42_square2_4)
  .db CAL,<(soler42_square2_5),>(soler42_square2_5)
  .db CAL,<(soler42_square2_6),>(soler42_square2_6)
  .db CAL,<(soler42_square2_7),>(soler42_square2_7)
  .db CAL,<(soler42_square2_8),>(soler42_square2_8)
  .db CAL,<(soler42_square2_9),>(soler42_square2_9)
  .db CAL,<(soler42_square2_10),>(soler42_square2_10)
  .db CAL,<(soler42_square2_11),>(soler42_square2_11)
  .db CAL,<(soler42_square2_12),>(soler42_square2_12)
  .db CAL,<(soler42_square2_13),>(soler42_square2_13)
  .db GOT
  .dw soler42_square2_loop

soler42_triangle:
soler42_triangle_loop:
  .db CAL,<(soler42_triangle_0),>(soler42_triangle_0)
  .db CAL,<(soler42_triangle_1),>(soler42_triangle_1)
  .db CAL,<(soler42_triangle_2),>(soler42_triangle_2)
  .db CAL,<(soler42_triangle_3),>(soler42_triangle_3)
  .db CAL,<(soler42_triangle_4),>(soler42_triangle_4)
  .db CAL,<(soler42_triangle_5),>(soler42_triangle_5)
  .db CAL,<(soler42_triangle_6),>(soler42_triangle_6)
  .db CAL,<(soler42_triangle_7),>(soler42_triangle_7)
  .db CAL,<(soler42_triangle_8),>(soler42_triangle_8)
  .db CAL,<(soler42_triangle_9),>(soler42_triangle_9)
  .db CAL,<(soler42_triangle_10),>(soler42_triangle_10)
  .db CAL,<(soler42_triangle_11),>(soler42_triangle_11)
  .db CAL,<(soler42_triangle_12),>(soler42_triangle_12)
  .db CAL,<(soler42_triangle_13),>(soler42_triangle_13)
  .db GOT
  .dw soler42_triangle_loop

soler42_noise:
soler42_noise_loop:
  .db CAL,<(soler42_noise_0),>(soler42_noise_0)
  .db CAL,<(soler42_noise_0),>(soler42_noise_0)
  .db CAL,<(soler42_noise_0),>(soler42_noise_0)
  .db CAL,<(soler42_noise_0),>(soler42_noise_0)
  .db CAL,<(soler42_noise_0),>(soler42_noise_0)
  .db CAL,<(soler42_noise_0),>(soler42_noise_0)
  .db CAL,<(soler42_noise_0),>(soler42_noise_0)
  .db CAL,<(soler42_noise_0),>(soler42_noise_0)
  .db CAL,<(soler42_noise_0),>(soler42_noise_0)
  .db CAL,<(soler42_noise_0),>(soler42_noise_0)
  .db CAL,<(soler42_noise_0),>(soler42_noise_0)
  .db CAL,<(soler42_noise_0),>(soler42_noise_0)
  .db CAL,<(soler42_noise_0),>(soler42_noise_0)
  .db CAL,<(soler42_noise_1),>(soler42_noise_1)
  .db GOT
  .dw soler42_noise_loop

soler42_square1_0:
  .db STV,6,SAR,5,STP,6,SDU,9,SL4,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .db G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .db RET

soler42_square1_1:
  .db STV,6,SAR,5,STP,6,SDU,9,SL4,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .db G1,G2,FS1,G1,G2,A1,AS1,AS2,C2,D2,D3,FS3,D3,C3,A2
  .db RET

soler42_square1_2:
  .db STV,6,SAR,5,STP,6,SDU,9,SL4,AS2,D3,G2,FS2,D3,D2,G1,G2,FS1
  .db G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .db RET

soler42_square1_3:
  .db STV,6,SAR,5,STP,6,SDU,9,SL4,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .db G1,G2,FS1,G1,G2,A1,AS1,AS2,C2,D2,D3,FS3,D3,C3,A2
  .db RET

soler42_square1_4:
  .db STV,6,SAR,5,STP,6,SDU,9,SL2,A2,STV,11,A2,STV,6,A3,STV,11
  .db A3,STV,6,C4,STV,11,C4,STV,6,A3,STV,11,A3,STV,6,FS3,STV,11
  .db FS3,STV,6,D3,STV,11,D3,STV,6,G2,STV,11,G2,STV,6,G3,STV,11
  .db G3,STV,6,AS3,STV,11,AS3,STV,6,G3,STV,11,G3,STV,6,E3,STV,11
  .db E3,STV,6,C3,STV,11,C3,STV,6,F2,STV,11,F2,STV,6,F3,STV,11
  .db F3,STV,6,A3,STV,11,A3,STV,6,F3,STV,11,F3,STV,6,D3,STV,11
  .db D3,STV,6,AS2,STV,11,AS2,STV,6,E2,STV,11,E2,STV,6,E3,STV,11
  .db E3,STV,6,G3,STV,11,G3,STV,6,E3,STV,11,E3,STV,6,CS3,STV,11
  .db CS3,STV,6,A2,STV,11,A2
  .db RET

soler42_square1_5:
  .db STV,6,SAR,5,STP,6,SDU,9,SL4,D2,D3,F3,C2,C3,E3,AS1,AS2,D3
  .db A1,A2,C3,G1,G2,AS2,F1,F2,A2,E1,E2,G2,D1,D2,F2
  .db RET

soler42_square1_6:
  .db STV,6,SAR,5,STP,6,SDU,9,SL4,A0,CS1,E1,A1,CS2,E2,A1,CS2,E2
  .db A2,CS3,E3,A1,A2,B1,CS2,A2,D2,E2,A2,F2,G2,A2,F2
  .db RET

soler42_square1_7:
  .db STV,6,SAR,5,STP,6,SDU,9,SL4,E2,A2,D2,CS2,A2,D2,A1,A2,B1,CS2
  .db A2,D2,E2,A2,F2,G2,A2,F2,E2,A2,D2,CS2,A2,D2
  .db RET

soler42_square1_8:
  .db STV,6,SAR,5,STP,6,SDU,9,SL4,A1,A2,CS3,A2,E2,CS2,D2,D3,F3
  .db A3,F3,D3,G1,G2,AS2,D3,AS2,G2,A1,A2,D3,A1,A2,CS3
  .db RET

soler42_square1_9:
  .db STV,6,SAR,5,STP,6,SDU,9,SL4,D1,D2,F2,A2,F2,D2,A1,A2,B1,CS2
  .db A2,D2,E2,A2,F2,G2,A2,F2,E2,A2,D2,CS2,A2,D2
  .db RET

soler42_square1_10:
  .db STV,6,SAR,5,STP,6,SDU,9,SL4,A1,A2,B1,CS2,A2,D2,E2,A2,F2,G2
  .db A2,F2,E2,A2,D2,CS2,A2,D2,A1,A2,CS3,A2,E2,CS2
  .db RET

soler42_square1_11:
  .db STV,6,SAR,5,STP,6,SDU,9,SL2,D1,STV,11,D1,STV,6,D2,STV,11
  .db D2,STV,6,F2,STV,11,F2,STV,6,A2,STV,11,A2,STV,6,F2,STV,11
  .db F2,STV,6,D2,STV,11,D2,STV,6,G1,STV,11,G1,STV,6,G2,STV,11
  .db G2,STV,6,AS2,STV,11,AS2,STV,6,D3,STV,11,D3,STV,6,AS2,STV,11
  .db AS2,STV,6,G2,STV,11,G2,STV,6,A1,STV,11,A1,STV,6,A2,STV,11
  .db A2,STV,6,D3,STV,11,D3,STV,6,A1,STV,11,A1,STV,6,A2,STV,11
  .db A2,STV,6,CS3,STV,11,CS3,STV,6,D2,STV,11,D2,STV,6,D3,STV,11
  .db D3,STV,6,F3,STV,11,F3,STV,6,A3,STV,11,A3,STV,6,F3,STV,11
  .db F3,STV,6,D3,STV,11,D3
  .db RET

soler42_square1_12:
  .db STV,6,SAR,5,STP,6,SDU,9,SL2,G1,STV,11,G1,STV,6,G2,STV,11
  .db G2,STV,6,AS2,STV,11,AS2,STV,6,D3,STV,11,D3,STV,6,AS2,STV,11
  .db AS2,STV,6,G2,STV,11,G2,STV,6,A1,STV,11,A1,STV,6,A2,STV,11
  .db A2,STV,6,D3,STV,11,D3,STV,6,A1,STV,11,A1,STV,6,A2,STV,11
  .db A2,STV,6,CS3,STV,11,CS3,STV,6,D2,STV,11,D2,STV,6,A2,STV,11
  .db A2,STV,6,CS2,STV,11,CS2,STV,6,D2,STV,11,D2,STV,6,A2,STV,11
  .db A2,STV,6,CS2,STV,11,CS2,STV,6,D2,STV,11,D2,STV,6,A2,STV,11
  .db A2,STV,6,CS2,STV,11,CS2,STV,6,D2,STV,11,D2,STV,6,A2,STV,11
  .db A2,STV,6,CS2,STV,11,CS2
  .db RET

soler42_square1_13:
  .db STV,6,SAR,5,STP,6,SDU,9,SL4,D2,A2,CS2,D2,A2,CS2,D2,A2,CS2
  .db D2,A2,CS2,D2,E2,D2,C2,AS1,A1
  .db RET

soler42_square2_0:
  .db STV,22,SAR,5,STP,6,SDU,9,SL0,A0,STV,8,SDU,4,SL4,D3,SL2,D3
  .db SL1,AS2,D3,SL0,G3,SL4,D3,SL2,D3,SL1,AS2,D3,SL0,G3,SL4,D3
  .db SL2,D3,SL1,AS2,D3,SL8,G3,SL4,D3,SL8,D3,SL4,C3
  .db RET

soler42_square2_1:
  .db STV,8,SAR,5,STP,6,SDU,4,SL1,C3,AS2,C3,SL5,AS2,SL4,A2,SL1
  .db A2,G2,A2,SL5,G2,SL4,A2,SL1,C3,AS2,C3,SL5,AS2,SL4,A2,SL1
  .db A2,G2,A2,SL5,G2,SL4,A2,SL1,C3,AS2,C3,SL5,AS2,SL4,C3,SL1
  .db DS3,D3,DS3,SL5,D3,SL4,E3,SL1,G3,FS3,G3,SL5,FS3,SL4,G3,A3
  .db AS3,C4
  .db RET

soler42_square2_2:
  .db STV,8,SAR,5,STP,6,SDU,4,SL4,C4,SL8,AS3,SL1,AS3,A3,AS3,SL7
  .db A3,SL1,G3,A3,SL0,G3,SL4,D3,SL2,D3,SL1,AS2,D3,SL0,G3,SL4
  .db D3,SL2,D3,SL1,AS2,D3,SL8,G3,SL4,D3,SL8,D3,SL4,C3
  .db RET

soler42_square2_3:
  .db STV,8,SAR,5,STP,6,SDU,4,SL1,C3,AS2,C3,SL5,AS2,SL4,A2,SL1
  .db A2,G2,A2,SL5,G2,SL4,A2,SL1,C3,AS2,C3,SL5,AS2,SL4,A2,SL1
  .db A2,G2,A2,SL5,G2,SL4,A2,SL1,C3,AS2,C3,SL5,AS2,SL4,C3,SL1
  .db DS3,D3,DS3,SL5,D3,SL4,E3,SL1,G3,FS3,G3,SL5,FS3,SL4,G3,SL8
  .db A3,SL4,AS3
  .db RET

soler42_square2_4:
  .db STV,8,SAR,5,STP,6,SDU,4,SL1,A3,SLF,C4,SL1,AS3,SL3,D4,SL1
  .db A3,SL3,C4,SL1,A3,SL7,C4,SL1,G3,SL7,AS3,SL1,A3,SL3,C4,SL1
  .db G3,SL3,AS3,SL1,G3,SL7,AS3,SL1,F3,SL7,A3,SL1,G3,SL3,AS3,SL1
  .db F3,SL3,A3,SL1,F3,SL7,A3,SL1,E3,SL7,G3,SL1,F3,SL3,A3,SL1
  .db E3,SL3,G3
  .db RET

soler42_square2_5:
  .db STV,8,SAR,5,STP,6,SDU,4,SL1,G3,F3,G3,SL5,F3,SL4,A3,SL1,F3
  .db E3,F3,SL5,E3,SL4,A3,SL1,E3,D3,E3,SL5,D3,SL4,A3,SL1,D3,C3
  .db D3,SL5,C3,SL4,A3,SL1,C3,AS2,C3,SL5,AS2,SL4,A3,SL1,AS2,A2
  .db AS2,SL5,A2,SL4,A3,SL1,A2,G2,A2,SL5,G2,SL4,A3,SL1,G2,F2,G2
  .db SL5,F2,SL4,A3
  .db RET

soler42_square2_6:
  .db STV,8,SAR,5,STP,6,SDU,4,SL0,E2,SL1,CS3,SL3,E3,SL1,CS3,SL3
  .db E3,SL1,A2,CS3,E3,SLD,A3,SL1,CS3,SL3,E3,SL1,CS3,SL3,E3,SL1
  .db A2,CS3,E3,SLL,17,A3,SL4,A3,SL1,D3,CS3,D3,SL5,CS3,SL4,D3,SL8
  .db E3,SL4,F3
  .db RET

soler42_square2_7:
  .db STV,8,SAR,5,STP,6,SDU,4,SL1,A3,G3,A3,SL5,G3,SL4,F3,SL8,E3
  .db SL4,F3,SL1,G3,F3,G3,SL5,F3,SLC,E3,SL4,A3,SL1,D3,CS3,D3,SL5
  .db CS3,SL4,D3,SL8,E3,SL4,F3,SL1,A3,G3,A3,SL5,G3,SL4,F3,SL8
  .db E3,SL4,F3
  .db RET

soler42_square2_8:
  .db STV,8,SAR,5,STP,6,SDU,4,SL1,G3,F3,G3,SL5,F3,SL8,E3,SL4,A3
  .db G3,SL8,G3,F3,SL4,D4,C4,SL8,C4,AS3,SL4,AS3,G3,SLC,F3,SL1
  .db CS3,F3,E3,F3,SL8,E3
  .db RET

soler42_square2_9:
  .db STV,8,SAR,5,STP,6,SDU,4,SL8,E3,SL6,D3,SL2,A3,G3,F3,E3,D3
  .db SL4,D3,SL0,CS3,SL4,A3,SL1,D3,CS3,D3,SL5,CS3,SL4,D3,SL8,E3
  .db SL4,F3,SL1,A3,G3,A3,SL5,G3,SL4,F3,SL8,E3,SL4,F3
  .db RET

soler42_square2_10:
  .db STV,8,SAR,5,STP,6,SDU,4,SL1,G3,F3,G3,SL5,F3,SLC,E3,SL4,A3
  .db SL1,D3,CS3,D3,SL5,CS3,SL4,D3,SL8,E3,SL4,F3,SL1,A3,G3,A3,SL5
  .db G3,SL4,F3,SL8,E3,SL4,F3,SL1,G3,F3,G3,SL5,F3,SL8,E3,SL4,A3
  .db G3
  .db RET

soler42_square2_11:
  .db STV,8,SAR,5,STP,6,SDU,4,SL8,G3,F3,SL4,D4,C4,SL8,C4,AS3,SL4
  .db AS3,G3,SLC,F3,SL1,CS3,E3,F3,E3,F3,SL7,E3,SL8,E3,D3,SL4,D4
  .db C4
  .db RET

soler42_square2_12:
  .db STV,8,SAR,5,STP,6,SDU,4,SL8,C4,AS3,SL4,AS3,G3,SLC,F3,SL1
  .db CS3,E3,F3,E3,F3,SL7,E3,SL8,D2,SL4,E2,SL8,F2,SL4,E2,SL8,D2
  .db SL4,E2,SL8,F2,SL4,E2
  .db RET

soler42_square2_13:
  .db STV,8,SAR,5,STP,6,SDU,4,SL8,D2,SL4,CS2,SL8,D2,SL4,CS2,SL8
  .db D2,SL4,CS2,SL8,D2,SL4,CS2,D2,STV,10,SDU,9,SLL,20,F3
  .db RET

soler42_triangle_0:
  .db STV,6,SAR,5,STP,6,SDU,9,SL4,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .db G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .db RET

soler42_triangle_1:
  .db STV,6,SAR,5,STP,6,SDU,9,SL4,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .db G1,G2,FS1,G1,G2,A1,AS1,AS2,C2,D2,D3,FS3,D3,C3,A2
  .db RET

soler42_triangle_2:
  .db STV,6,SAR,5,STP,6,SDU,9,SL4,AS2,D3,G2,FS2,D3,D2,G1,G2,FS1
  .db G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .db RET

soler42_triangle_3:
  .db STV,6,SAR,5,STP,6,SDU,9,SL4,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .db G1,G2,FS1,G1,G2,A1,AS1,AS2,C2,D2,D3,FS3,D3,C3,A2
  .db RET

soler42_triangle_4:
  .db STV,6,SAR,5,STP,6,SDU,9,SL4,A2,A3,C4,A3,FS3,D3,G2,G3,AS3
  .db G3,E3,C3,F2,F3,A3,F3,D3,AS2,E2,E3,G3,E3,CS3,A2
  .db RET

soler42_triangle_5:
  .db STV,6,SAR,5,STP,6,SDU,9,SL4,D2,D3,F3,C2,C3,E3,AS1,AS2,D3
  .db A1,A2,C3,G1,G2,AS2,F1,F2,A2,E1,E2,G2,D1,D2,F2
  .db RET

soler42_triangle_6:
  .db STV,6,SAR,5,STP,6,SDU,9,SL4,A0,CS1,E1,A1,CS2,E2,A1,CS2,E2
  .db A2,CS3,E3,A1,A2,B1,CS2,A2,D2,E2,A2,F2,G2,A2,F2
  .db RET

soler42_triangle_7:
  .db STV,8,SAR,5,STP,6,SDU,4,SL4,E2,A2,D2,CS2,A2,D2,A1,A2,B1,CS2
  .db A2,D2,E2,A2,F2,G2,A2,F2,E2,A2,D2,CS2,A2,D2
  .db RET

soler42_triangle_8:
  .db STV,6,SAR,5,STP,6,SDU,9,SL4,A1,A2,CS3,A2,E2,CS2,D2,D3,F3
  .db A3,F3,D3,G1,G2,AS2,D3,AS2,G2,A1,A2,D3,A1,A2,CS3
  .db RET

soler42_triangle_9:
  .db STV,6,SAR,5,STP,6,SDU,9,SL4,D1,D2,F2,A2,F2,D2,A1,A2,B1,CS2
  .db A2,D2,E2,A2,F2,G2,A2,F2,E2,A2,D2,CS2,A2,D2
  .db RET

soler42_triangle_10:
  .db STV,6,SAR,5,STP,6,SDU,9,SL4,A1,A2,B1,CS2,A2,D2,E2,A2,F2,G2
  .db A2,F2,E2,A2,D2,CS2,A2,D2,A1,A2,CS3,A2,E2,CS2
  .db RET

soler42_triangle_11:
  .db STV,6,SAR,5,STP,6,SDU,9,SL4,D1,D2,F2,A2,F2,D2,G1,G2,AS2
  .db D3,AS2,G2,A1,A2,D3,A1,A2,CS3,D2,D3,F3,A3,F3,D3
  .db RET

soler42_triangle_12:
  .db STV,6,SAR,5,STP,6,SDU,9,SL4,G1,G2,AS2,D3,AS2,G2,A1,A2,D3
  .db A1,A2,CS3,D2,A2,CS2,D2,A2,CS2,D2,A2,CS2,D2,A2,CS2
  .db RET

soler42_triangle_13:
  .db STV,6,SAR,5,STP,6,SDU,9,SL4,D2,A2,CS2,D2,A2,CS2,D2,A2,CS2
  .db D2,A2,CS2,D2,E2,D2,C2,AS1,A1
  .db RET

soler42_noise_0:
  .db STV,9,SAR,5,STP,6,SDU,9,SL4,0,0,5,0,0,5,0,0,5,0,0,5,0,0,5
  .db 0,0,5,0,0,5,0,0,5
  .db RET

soler42_noise_1:
  .db STV,9,SAR,5,STP,6,SDU,9,SL4,0,0,5,0,0,5,0,0,5,0,0,5,0,0,5
  .db 0,0,5
  .db RET

antagonist:
  .db 0
  .db 5
  .db 42
  .db 4
  .dw antagonist_square1
  .dw antagonist_square2
  .dw antagonist_triangle
  .dw 0
  .dw 0

antagonist_square1:
antagonist_square1_loop:
  .db CAL,<(antagonist_square1_0),>(antagonist_square1_0)
  .db CAL,<(antagonist_square1_0),>(antagonist_square1_0)
  .db CAL,<(antagonist_square1_1),>(antagonist_square1_1)
  .db CAL,<(antagonist_square1_1),>(antagonist_square1_1)
  .db CAL,<(antagonist_square1_2),>(antagonist_square1_2)
  .db CAL,<(antagonist_square1_2),>(antagonist_square1_2)
  .db CAL,<(antagonist_square1_3),>(antagonist_square1_3)
  .db GOT
  .dw antagonist_square1_loop

antagonist_square2:
antagonist_square2_loop:
  .db CAL,<(antagonist_square2_0),>(antagonist_square2_0)
  .db CAL,<(antagonist_square2_1),>(antagonist_square2_1)
  .db CAL,<(antagonist_square2_2),>(antagonist_square2_2)
  .db CAL,<(antagonist_square2_2),>(antagonist_square2_2)
  .db CAL,<(antagonist_square2_3),>(antagonist_square2_3)
  .db CAL,<(antagonist_square2_3),>(antagonist_square2_3)
  .db CAL,<(antagonist_square2_4),>(antagonist_square2_4)
  .db GOT
  .dw antagonist_square2_loop

antagonist_triangle:
antagonist_triangle_loop:
  .db CAL,<(antagonist_triangle_0),>(antagonist_triangle_0)
  .db CAL,<(antagonist_triangle_1),>(antagonist_triangle_1)
  .db CAL,<(antagonist_triangle_1),>(antagonist_triangle_1)
  .db CAL,<(antagonist_triangle_1),>(antagonist_triangle_1)
  .db CAL,<(antagonist_triangle_3),>(antagonist_triangle_3)
  .db CAL,<(antagonist_triangle_3),>(antagonist_triangle_3)
  .db CAL,<(antagonist_triangle_4),>(antagonist_triangle_4)
  .db GOT
  .dw antagonist_triangle_loop

antagonist_square1_0:
  .db STV,12,SAR,5,STP,2,SDU,5,SL4,C2,C3,B2,C3,G2,C3,D3,DS3,FS2
  .db D3,C3,D3,F2,B2,A2,B2
  .db RET

antagonist_square1_1:
  .db STV,12,SAR,5,STP,2,SDU,5,SL4,C3,C4,B3,C4,G3,C4,D4,DS4,FS3
  .db D4,C4,D4,F3,B3,A3,B3
  .db RET

antagonist_square1_2:
  .db STV,12,SAR,5,STP,2,SDU,5,SL2,C4,B3,C4,DS4,SLL,24,G4,SL2
  .db D4,C4,D4,F4,SLL,24,B4
  .db RET

antagonist_square1_3:
  .db STV,12,SAR,5,STP,2,SDU,5,SL2,GS4,G4,GS4,C5,SL0,DS5,SL8,F5
  .db SL2,D5,DS5,D5,C5,SLL,24,B4
  .db RET

antagonist_square2_0:
  .db STV,13,SAR,5,STP,6,SDU,9,SLL,64,C2
  .db RET

antagonist_square2_1:
  .db STV,22,SAR,5,STP,6,SDU,9,SLL,64,A0
  .db RET

antagonist_square2_2:
  .db STV,12,SAR,5,STP,2,SDU,5,SL2,C2,D2,DS2,G2,SLL,24,C3,SL2
  .db FS2,G2,A2,C3,SL8,A3,GS3,G3
  .db RET

antagonist_square2_3:
  .db STV,22,SAR,5,STP,6,SDU,9,SL8,A0,STV,12,STP,2,SDU,5,SL2,G2
  .db FS2,G2,C3,SL8,DS3,F3,SL0,D3,SL2,G2,FS2,G2,B2,SL8,G3
  .db RET

antagonist_square2_4:
  .db STV,12,SAR,5,STP,2,SDU,5,SL8,GS2,SL2,C3,AS2,C3,DS3,SL0,GS3
  .db SL2,F3,G3,F3,DS3,SLL,24,D3
  .db RET

antagonist_triangle_0:
  .db STV,13,SAR,5,STP,6,SDU,9,SLL,64,C2
  .db RET

antagonist_triangle_1:
  .db STV,12,SAR,5,STP,2,SDU,5,SL0,C2,DS2,D2,G2
  .db RET

antagonist_triangle_3:
  .db STV,12,SAR,5,STP,2,SDU,5,SLL,32,C2,G2
  .db RET

antagonist_triangle_4:
  .db STV,12,SAR,5,STP,2,SDU,5,SLL,24,GS2,SL8,F2,SLL,24,G2,SL8
  .db G1
  .db RET

arps:
  .db 0
  .db 3
  .db 128
  .db 2
  .dw arps_square1
  .dw arps_square2
  .dw arps_triangle
  .dw 0
  .dw 0

arps_square1:
arps_square1_loop:
  .db CAL,<(arps_square1_0),>(arps_square1_0)
  .db CAL,<(arps_square1_1),>(arps_square1_1)
  .db GOT
  .dw arps_square1_loop

arps_square2:
arps_square2_loop:
  .db CAL,<(arps_square2_0),>(arps_square2_0)
  .db CAL,<(arps_square2_1),>(arps_square2_1)
  .db GOT
  .dw arps_square2_loop

arps_triangle:
arps_triangle_loop:
  .db CAL,<(arps_triangle_0),>(arps_triangle_0)
  .db CAL,<(arps_triangle_1),>(arps_triangle_1)
  .db GOT
  .dw arps_triangle_loop

arps_square1_0:
  .db STV,15,SAR,0,STP,4,SDU,6,SL0,A2,D3,SAR,1,G2,C3
  .db RET

arps_square1_1:
  .db STV,15,SAR,1,STP,4,SDU,6,SL0,F2,SAR,2,B2,SAR,1,E2,SAR,0
  .db A2
  .db RET

arps_square2_0:
  .db STV,15,SAR,5,STP,4,SDU,6,SL2,A3,G3,F3,E3,G3,F3,E3,G3,SL0
  .db F3,SL2,G3,F3,E3,D3,F3,E3,D3,F3,SL0,E3
  .db RET

arps_square2_1:
  .db STV,15,SAR,5,STP,4,SDU,6,SL2,F3,E3,D3,C3,D3,C3,B2,A2,SL0
  .db GS2,SL2,B2,A2,GS2,FS2,GS2,E2,FS2,GS2,SL0,A2
  .db RET

arps_triangle_0:
  .db STV,16,SAR,5,STP,6,SDU,9,SL8,A2,C3,D3,A2,G2,B2,C3,G2
  .db RET

arps_triangle_1:
  .db STV,16,SAR,5,STP,6,SDU,9,SL8,F2,A2,B2,F2,E2,GS2,A2,E2
  .db RET

noise_arps:
  .db 0
  .db 5
  .db 42
  .db 4
  .dw 0
  .dw 0
  .dw 0
  .dw noise_arps_noise
  .dw 0

noise_arps_noise:
noise_arps_noise_loop:
  .db CAL,<(noise_arps_noise_0),>(noise_arps_noise_0)
  .db GOT
  .dw noise_arps_noise_loop

noise_arps_noise_0:
  .db STV,17,SAR,3,STP,6,SDU,9,SL2,12,STV,19,SAR,5,13,STV,17
  .db SAR,3,11,10,STV,20,SAR,4,SL4,9,STV,17,SAR,3,SL2,11,10,12
  .db STV,19,SAR,5,13,STV,17,SAR,3,11,10,STV,20,SAR,4,SL4,9,STV,17
  .db SAR,3,SL2,11,10,12,STV,19,SAR,5,13,STV,17,SAR,3,11,10,STV,20
  .db SAR,4,SL4,9,STV,17,SAR,3,SL2,11,10,12,STV,19,SAR,5,13,STV,17
  .db SAR,3,11,10,STV,20,SAR,4,SL4,9,STV,17,SAR,3,SL2,11,10
  .db RET

sfx_shot:
  .db 0, 1
  .db 0, 1
  .dw 0
  .dw 0
  .dw 0
  .dw sfx_shot_noise
  .dw 0

sfx_shot_noise:
  .db CAL,<(sfx_shot_noise_0),>(sfx_shot_noise_0)
  .db TRM
sfx_shot_noise_0:
  .db SLL,32,STV,5,SAR,5,STP,6,SDU,9,8
  .db RET

sfx_laser:
  .db 0, 1
  .db 0, 1
  .dw sfx_laser_square1
  .dw 0
  .dw 0
  .dw 0
  .dw 0

sfx_laser_square1:
  .db CAL,<(sfx_laser_square1_0),>(sfx_laser_square1_0)
  .db TRM
sfx_laser_square1_0:
  .db SLL,16,STV,7,SAR,5,STP,1,SDU,9,B7
  .db RET

sfx_dpcm:
  .db 0, 1
  .db 0, 1
  .dw 0
  .dw 0
  .dw 0
  .dw 0
  .dw sfx_dpcm_dpcm

sfx_dpcm_dpcm:
  .db CAL,<(sfx_dpcm_dpcm_0),>(sfx_dpcm_dpcm_0)
  .db TRM
sfx_dpcm_dpcm_0:
  .db SLL,8,STV,14,SAR,5,STP,6,SDU,9,D3
  .db RET

sfx_zap:
  .db 0, 1
  .db 0, 1
  .dw 0
  .dw 0
  .dw 0
  .dw sfx_zap_noise
  .dw 0

sfx_zap_noise:
  .db CAL,<(sfx_zap_noise_0),>(sfx_zap_noise_0)
  .db TRM
sfx_zap_noise_0:
  .db SLL,16,STV,7,SAR,5,STP,6,SDU,8,4
  .db RET

sfx_collide:
  .db 0, 1
  .db 0, 1
  .dw 0
  .dw 0
  .dw 0
  .dw sfx_collide_noise
  .dw 0

sfx_collide_noise:
  .db CAL,<(sfx_collide_noise_0),>(sfx_collide_noise_0)
  .db TRM
sfx_collide_noise_0:
  .db SLL,16,STV,7,SAR,5,STP,3,SDU,5,0
  .db RET

