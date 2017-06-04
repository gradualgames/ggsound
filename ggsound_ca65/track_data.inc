song_list:
  .word robot_adv
  .word k466
  .word k11
  .word soler42
  .word antagonist
  .word arps

sfx_list:
  .word sfx_shot
  .word sfx_laser
  .word sfx_dpcm
  .word sfx_zap
  .word sfx_collide

envelopes_list:
  .word volume
  .word arpeggio
  .word pitch
  .word duty

dpcm_list:
  .word dpcm_samples_list
  .word dpcm_note_to_sample_index
  .word dpcm_note_to_sample_length
  .word dpcm_note_to_loop_pitch_index

volume:
  .word volume0
  .word volume1
  .word volume2
  .word volume3
  .word volume4
  .word volume5
  .word volume6
  .word volume7
  .word volume8
  .word volume9
  .word volume10
  .word volume11
  .word volume12
  .word volume13
  .word volume14
  .word volume15
  .word volume16
  .word volume17
  .word volume18
  .word volume19

arpeggio:
  .word arpeggio0
  .word arpeggio1
  .word arpeggio2
  .word arpeggio3

pitch:
  .word pitch0
  .word pitch1
  .word pitch2
  .word pitch3
  .word pitch4
  .word pitch5
  .word pitch6

duty:
  .word duty0
  .word duty1
  .word duty2
  .word duty3
  .word duty4
  .word duty5
  .word duty6
  .word duty7
  .word duty8
  .word duty9

volume0:
  .byte 12,10,6,4,3,4,5,8,10,8,5,3,3,ENV_STOP
volume1:
  .byte 11,8,7,8,10,8,5,3,1,1,2,4,5,5,3,2,1,1,ENV_STOP
volume2:
  .byte 10,10,10,10,10,10,0,ENV_STOP
volume3:
  .byte 12,5,3,1,0,ENV_STOP
volume4:
  .byte 0,ENV_STOP
volume5:
  .byte 15,6,10,11,11,10,9,8,7,6,5,4,3,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,ENV_STOP
volume6:
  .byte 14,14,14,11,4,2,2,2,ENV_STOP
volume7:
  .byte 14,13,12,11,10,9,8,8,7,6,5,4,3,2,1,0,ENV_STOP
volume8:
  .byte 6,9,11,11,7,6,5,5,ENV_STOP
volume9:
  .byte 15,2,0,0,0,0,ENV_STOP
volume10:
  .byte 0,ENV_STOP
volume11:
  .byte 9,9,9,6,2,1,1,1,ENV_STOP
volume12:
  .byte 3,4,4,5,5,5,5,5,5,5,5,4,4,4,4,4,4,4,3,3,3,ENV_STOP
volume13:
  .byte 0,ENV_STOP
volume14:
  .byte 8,4,3,2,2,1,1,0,ENV_STOP
volume15:
  .byte 3,4,4,5,5,5,5,5,5,5,5,4,4,4,4,4,4,4,3,3,3,ENV_STOP
volume16:
  .byte 1,ENV_STOP
volume17:
  .byte 3,3,4,5,5,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,1,ENV_STOP
volume18:
  .byte 1,ENV_STOP
volume19:
  .byte 0,ENV_STOP

arpeggio0:
  .byte 0,3,7,12,ENV_LOOP,0
arpeggio1:
  .byte 0,4,7,12,ENV_LOOP,0
arpeggio2:
  .byte 0,3,6,12,ENV_LOOP,0
arpeggio3:
  .byte 0,ENV_STOP

pitch0:
  .byte 12,12,12,12,12,12,12,12,12,12,ENV_STOP
pitch1:
  .byte 10,10,10,10,10,10,10,10,10,10,10,10,10,10,ENV_STOP
pitch2:
  .byte 0,0,0,0,0,0,0,0,0,-1,-1,1,1,1,1,-1,-1,-1,-1,ENV_LOOP,11
pitch3:
  .byte 1,1,1,1,1,1,1,1,1,1,1,1,1,1,ENV_STOP
pitch4:
  .byte 0,0,0,0,0,0,0,0,0,-1,-1,1,1,1,1,-1,-1,-1,-1,ENV_LOOP,11
pitch5:
  .byte 0,0,0,0,0,0,0,0,0,-1,-1,1,1,1,1,-1,-1,-1,-1,ENV_LOOP,11
pitch6:
  .byte 0,ENV_STOP

duty0:
  .byte 128,DUTY_ENV_STOP
duty1:
  .byte 64,DUTY_ENV_STOP
duty2:
  .byte 128,DUTY_ENV_STOP
duty3:
  .byte 128,0,DUTY_ENV_STOP
duty4:
  .byte 128,0,DUTY_ENV_STOP
duty5:
  .byte 192,DUTY_ENV_STOP
duty6:
  .byte 128,DUTY_ENV_STOP
duty7:
  .byte 192,64,DUTY_ENV_STOP
duty8:
  .byte 64,DUTY_ENV_STOP
duty9:
  .byte 0,DUTY_ENV_STOP

dpcm_samples_list:
  .byte <(dpcm_sample_bde >> 6)
  .byte <(dpcm_sample_sd1 >> 6)
  .byte <(dpcm_sample_sfx >> 6)

dpcm_note_to_sample_index:
  .byte $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff
  .byte $ff,$ff,$ff,$00,$01,$02,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff
  .byte $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff
  .byte $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff

dpcm_note_to_sample_length:
  .byte $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff
  .byte $ff,$ff,$ff,$0f,$2f,$86,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff
  .byte $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff
  .byte $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff

dpcm_note_to_loop_pitch_index:
  .byte $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff
  .byte $ff,$ff,$ff,$0f,$0f,$0f,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff
  .byte $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff
  .byte $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff

robot_adv:
  .byte 0
  .byte 6
  .byte 0
  .byte 5
  .word robot_adv_square1
  .word robot_adv_square2
  .word robot_adv_triangle
  .word robot_adv_noise
  .word robot_adv_dpcm

robot_adv_square1:
robot_adv_square1_loop:
  .byte CAL,<(robot_adv_square1_0),>(robot_adv_square1_0)
  .byte CAL,<(robot_adv_square1_1),>(robot_adv_square1_1)
  .byte CAL,<(robot_adv_square1_2),>(robot_adv_square1_2)
  .byte CAL,<(robot_adv_square1_3),>(robot_adv_square1_3)
  .byte GOT
  .word robot_adv_square1_loop

robot_adv_square2:
robot_adv_square2_loop:
  .byte CAL,<(robot_adv_square2_0),>(robot_adv_square2_0)
  .byte CAL,<(robot_adv_square2_1),>(robot_adv_square2_1)
  .byte CAL,<(robot_adv_square2_2),>(robot_adv_square2_2)
  .byte CAL,<(robot_adv_square2_3),>(robot_adv_square2_3)
  .byte GOT
  .word robot_adv_square2_loop

robot_adv_triangle:
robot_adv_triangle_loop:
  .byte CAL,<(robot_adv_triangle_0),>(robot_adv_triangle_0)
  .byte CAL,<(robot_adv_triangle_1),>(robot_adv_triangle_1)
  .byte CAL,<(robot_adv_triangle_2),>(robot_adv_triangle_2)
  .byte CAL,<(robot_adv_triangle_3),>(robot_adv_triangle_3)
  .byte GOT
  .word robot_adv_triangle_loop

robot_adv_noise:
robot_adv_noise_loop:
  .byte CAL,<(robot_adv_noise_0),>(robot_adv_noise_0)
  .byte CAL,<(robot_adv_noise_1),>(robot_adv_noise_1)
  .byte CAL,<(robot_adv_noise_2),>(robot_adv_noise_2)
  .byte CAL,<(robot_adv_noise_3),>(robot_adv_noise_3)
  .byte GOT
  .word robot_adv_noise_loop

robot_adv_dpcm:
robot_adv_dpcm_loop:
  .byte CAL,<(robot_adv_dpcm_0),>(robot_adv_dpcm_0)
  .byte CAL,<(robot_adv_dpcm_0),>(robot_adv_dpcm_0)
  .byte CAL,<(robot_adv_dpcm_0),>(robot_adv_dpcm_0)
  .byte CAL,<(robot_adv_dpcm_0),>(robot_adv_dpcm_0)
  .byte GOT
  .word robot_adv_dpcm_loop

robot_adv_square1_0:
  .byte STV,17,SAR,3,STP,5,SDU,7,SL1,DS3,D3,C3,D3,SL4,C3,SL1,C3
  .byte STV,19,STP,6,SDU,9,A0,STV,17,STP,5,SDU,7,C3,STV,19
  .byte STP,6,SDU,9,A0,STV,17,STP,5,SDU,7,C3,C3,STV,19,STP,6
  .byte SDU,9,SL2,A0,STV,17,STP,5,SDU,7,SL1,D3,C3,B2,C3,SL4,B2
  .byte SL1,B2,STV,19,STP,6,SDU,9,A0,STV,17,STP,5,SDU,7,B2,STV,19
  .byte STP,6,SDU,9,A0,STV,17,STP,5,SDU,7,B2,B2,STV,19,STP,6
  .byte SDU,9,SL2,A0,STV,17,STP,5,SDU,7,SL1,C3,B2,A2,B2,SL8,A2
  .byte SL4,A2,SL8,G2,SL1,DS3,D3,C3,B2,C3,B2,A2,G2
  .byte RET

robot_adv_square1_1:
  .byte STV,17,SAR,3,STP,5,SDU,7,SL1,DS3,D3,C3,D3,SL4,C3,SL1,C3
  .byte STV,19,STP,6,SDU,9,A0,STV,17,STP,5,SDU,7,C3,STV,19
  .byte STP,6,SDU,9,A0,STV,17,STP,5,SDU,7,C3,C3,STV,19,STP,6
  .byte SDU,9,SL2,A0,STV,17,STP,5,SDU,7,SL1,D3,C3,B2,C3,SL4,B2
  .byte SL1,B2,STV,19,STP,6,SDU,9,A0,STV,17,STP,5,SDU,7,B2,STV,19
  .byte STP,6,SDU,9,A0,STV,17,STP,5,SDU,7,B2,B2,STV,19,STP,6
  .byte SDU,9,SL2,A0,STV,17,STP,5,SDU,7,SL1,C3,B2,A2,B2,SL8,A2
  .byte SL4,A2,SL8,G2,SL1,DS3,D3,C3,B2,C3,B2,C3,D3
  .byte RET

robot_adv_square1_2:
  .byte STV,17,SAR,3,STP,5,SDU,7,SL1,AS2,C3,AS2,SL5,C3,SL1,C3,AS2
  .byte GS2,G2,F2,DS2,D2,C2,SL0,D2,SL1,C3,D3,C3,SL5,D3,SL1,D3,C3
  .byte B2,A2,B2,C3,D3,F3,SL0,DS3
  .byte RET

robot_adv_square1_3:
  .byte STV,17,SAR,3,STP,5,SDU,7,SL1,AS2,C3,AS2,SL5,C3,SL1,C3,AS2
  .byte C3,D3,DS3,F3,G3,AS3,SL0,F3,SL1,AS3,B3,AS3,SL5,B3,SL1,G4
  .byte F4,DS4,D4,C4,B3,A3,G3,SL0,DS3
  .byte RET

robot_adv_square2_0:
  .byte STV,17,SAR,3,STP,5,SDU,7,SL1,G3,F3,DS3,F3,SL4,DS3,SL1
  .byte DS3,STV,19,STP,6,SDU,9,A0,STV,17,STP,5,SDU,7,DS3,STV,19
  .byte STP,6,SDU,9,A0,STV,17,STP,5,SDU,7,DS3,DS3,STV,19,STP,6
  .byte SDU,9,SL2,A0,STV,17,STP,5,SDU,7,SL1,F3,DS3,D3,DS3,SL4
  .byte D3,SL1,D3,STV,19,STP,6,SDU,9,A0,STV,17,STP,5,SDU,7,D3,STV,19
  .byte STP,6,SDU,9,A0,STV,17,STP,5,SDU,7,D3,D3,STV,19,STP,6
  .byte SDU,9,SL2,A0,STV,17,STP,5,SDU,7,SL1,DS3,D3,C3,D3,SL8,C3
  .byte SL4,FS3,SL8,G3,SL1,G3,F3,DS3,D3,DS3,D3,C3,B2
  .byte RET

robot_adv_square2_1:
  .byte STV,17,SAR,3,STP,5,SDU,7,SL1,G3,F3,DS3,F3,SL4,DS3,SL1
  .byte DS3,STV,19,STP,6,SDU,9,A0,STV,17,STP,5,SDU,7,DS3,STV,19
  .byte STP,6,SDU,9,A0,STV,17,STP,5,SDU,7,DS3,DS3,STV,19,STP,6
  .byte SDU,9,SL2,A0,STV,17,STP,5,SDU,7,SL1,F3,DS3,D3,DS3,SL4
  .byte D3,SL1,D3,STV,19,STP,6,SDU,9,A0,STV,17,STP,5,SDU,7,D3,STV,19
  .byte STP,6,SDU,9,A0,STV,17,STP,5,SDU,7,D3,D3,STV,19,STP,6
  .byte SDU,9,SL2,A0,STV,17,STP,5,SDU,7,SL1,DS3,D3,C3,D3,SL8,C3
  .byte SL4,A3,SL8,B3,SL1,G3,F3,DS3,D3,DS3,D3,DS3,F3
  .byte RET

robot_adv_square2_2:
  .byte STV,17,SAR,3,STP,5,SDU,7,SL1,G3,GS3,G3,SL5,GS3,SL1,GS3
  .byte G3,F3,DS3,D3,C3,AS2,GS2,SL0,AS2,SL1,DS3,F3,DS3,SL5,F3,SL1
  .byte F3,DS3,D3,C3,D3,G2,A2,B2,SL0,C3
  .byte RET

robot_adv_square2_3:
  .byte STV,17,SAR,3,STP,5,SDU,7,SL1,G3,GS3,G3,SL5,GS3,SL1,GS3
  .byte G3,GS3,AS3,C4,D4,DS4,F4,SL0,D4,SL1,FS4,G4,FS4,SL5,G4,SL1
  .byte B4,A4,G4,F4,DS4,D4,C4,B3,SL0,C4
  .byte RET

robot_adv_triangle_0:
  .byte STV,18,SAR,3,STP,6,SDU,9,SL1,C3,STV,19,A0,STV,18,C3,STV,19
  .byte A0,STV,18,SL3,C3,STV,19,SL1,A0,STV,18,SL3,C3,STV,19
  .byte SL1,A0,STV,18,SL3,C3,STV,19,SL1,A0,STV,18,G3,STV,19
  .byte A0,STV,18,G3,STV,19,A0,STV,18,SL3,G3,STV,19,SL1,A0,STV,18
  .byte SL3,G3,STV,19,SL1,A0,STV,18,SL3,G3,STV,19,SL1,A0,STV,18
  .byte A3,STV,19,A0,STV,18,A3,STV,19,A0,STV,18,SL3,A3,STV,19
  .byte SL1,A0,STV,18,SL3,FS3,STV,19,SL1,A0,STV,18,SL3,FS3,STV,19
  .byte SL1,A0,STV,18,G3,STV,19,A0,STV,18,G3,STV,19,A0,STV,18
  .byte SL3,G3,STV,19,SL1,A0,STV,18,SL3,G3,STV,19,SL1,A0,STV,18
  .byte SL3,D3,STV,19,SL1,A0
  .byte RET

robot_adv_triangle_1:
  .byte STV,18,SAR,3,STP,6,SDU,9,SL1,C3,STV,19,A0,STV,18,C3,STV,19
  .byte A0,STV,18,SL3,C3,STV,19,SL1,A0,STV,18,SL3,C3,STV,19
  .byte SL1,A0,STV,18,SL3,C3,STV,19,SL1,A0,STV,18,G3,STV,19
  .byte A0,STV,18,G3,STV,19,A0,STV,18,SL3,G3,STV,19,SL1,A0,STV,18
  .byte SL3,G3,STV,19,SL1,A0,STV,18,SL3,G3,STV,19,SL1,A0,STV,18
  .byte A3,STV,19,A0,STV,18,A3,STV,19,A0,STV,18,SL3,A3,STV,19
  .byte SL1,A0,STV,18,SL3,FS3,STV,19,SL1,A0,STV,18,SL3,FS3,STV,19
  .byte SL1,A0,STV,18,G3,STV,19,A0,STV,18,G3,STV,19,A0,STV,18
  .byte SL3,G3,STV,19,SL1,A0,STV,18,SL3,G3,STV,19,SL1,A0,STV,18
  .byte SL3,D3,STV,19,SL1,A0
  .byte RET

robot_adv_triangle_2:
  .byte STV,18,SAR,3,STP,6,SDU,9,SL1,GS2,STV,19,A0,STV,18,GS2
  .byte STV,19,A0,STV,18,GS2,STV,19,A0,STV,18,GS2,STV,19,A0,STV,18
  .byte GS2,STV,19,A0,STV,18,GS2,STV,19,A0,STV,18,GS2,STV,19
  .byte A0,STV,18,GS2,STV,19,A0,STV,18,AS2,STV,19,A0,STV,18
  .byte AS2,STV,19,A0,STV,18,AS2,STV,19,A0,STV,18,AS2,STV,19
  .byte A0,STV,18,AS2,STV,19,A0,STV,18,AS2,STV,19,A0,STV,18
  .byte AS2,STV,19,A0,STV,18,AS2,STV,19,A0,STV,18,B2,STV,19
  .byte A0,STV,18,B2,STV,19,A0,STV,18,B2,STV,19,A0,STV,18,B2,STV,19
  .byte A0,STV,18,B2,STV,19,A0,STV,18,B2,STV,19,A0,STV,18,B2,STV,19
  .byte A0,STV,18,B2,STV,19,A0,STV,18,C3,STV,19,A0,STV,18,C3,STV,19
  .byte A0,STV,18,C3,STV,19,A0,STV,18,C3,STV,19,A0,STV,18,C3,STV,19
  .byte A0,STV,18,C3,STV,19,A0,STV,18,C3,STV,19,A0,STV,18,C3,STV,19
  .byte A0
  .byte RET

robot_adv_triangle_3:
  .byte STV,18,SAR,3,STP,6,SDU,9,SL1,GS2,STV,19,A0,STV,18,GS2
  .byte STV,19,A0,STV,18,GS2,STV,19,A0,STV,18,GS2,STV,19,A0,STV,18
  .byte GS2,STV,19,A0,STV,18,GS2,STV,19,A0,STV,18,GS2,STV,19
  .byte A0,STV,18,GS2,STV,19,A0,STV,18,AS2,STV,19,A0,STV,18
  .byte AS2,STV,19,A0,STV,18,AS2,STV,19,A0,STV,18,AS2,STV,19
  .byte A0,STV,18,AS2,STV,19,A0,STV,18,AS2,STV,19,A0,STV,18
  .byte AS2,STV,19,A0,STV,18,AS2,STV,19,A0,STV,18,B2,STV,19
  .byte A0,STV,18,B2,STV,19,A0,STV,18,B2,STV,19,A0,STV,18,B2,STV,19
  .byte A0,STV,18,B2,STV,19,A0,STV,18,B2,STV,19,A0,STV,18,B2,STV,19
  .byte A0,STV,18,B2,STV,19,A0,STV,18,C3,STV,19,A0,STV,18,C3,STV,19
  .byte A0,STV,18,C3,STV,19,A0,STV,18,C3,STV,19,A0,STV,18,C3,STV,19
  .byte A0,STV,18,C3,STV,19,A0,STV,18,C3,STV,19,A0,STV,18,C3,STV,19
  .byte A0
  .byte RET

robot_adv_noise_0:
  .byte STV,14,SAR,3,STP,6,SDU,9,SL1,13,15,14,15,13,15,14,15,13
  .byte 15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15
  .byte 13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14
  .byte 15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15
  .byte RET

robot_adv_noise_1:
  .byte STV,14,SAR,3,STP,6,SDU,9,SL1,13,15,14,15,13,15,14,15,13
  .byte 15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15
  .byte 13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14
  .byte 15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15
  .byte RET

robot_adv_noise_2:
  .byte STV,14,SAR,3,STP,6,SDU,9,SL1,13,15,14,15,13,15,14,15,13
  .byte 15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15
  .byte 13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14
  .byte 15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15
  .byte RET

robot_adv_noise_3:
  .byte STV,14,SAR,3,STP,6,SDU,9,SL1,13,15,14,15,13,15,14,15,13
  .byte 15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15
  .byte 13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14
  .byte 15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15
  .byte RET

robot_adv_dpcm_0:
  .byte STV,14,SAR,3,STP,6,SDU,9,SL1,C3,SL3,C3,SL2,CS3,SL1,C3,SL5
  .byte C3,SL2,CS3,C3,SL1,C3,SL3,C3,SL2,CS3,SL1,C3,SL3,C3,SL2
  .byte C3,CS3,SL1,CS3,CS3,C3,SL3,C3,SL2,CS3,SL1,C3,SL5,C3,SL2
  .byte CS3,C3,SL1,C3,SL3,C3,SL2,CS3,SL1,C3,SL3,C3,SL2,C3,SL1
  .byte CS3,CS3,CS3,CS3
  .byte RET

k466:
  .byte 0
  .byte 7
  .byte 213
  .byte 5
  .word k466_square1
  .word k466_square2
  .word k466_triangle
  .word 0
  .word 0

k466_square1:
k466_square1_loop:
  .byte CAL,<(k466_square1_0),>(k466_square1_0)
  .byte CAL,<(k466_square1_1),>(k466_square1_1)
  .byte CAL,<(k466_square1_2),>(k466_square1_2)
  .byte CAL,<(k466_square1_3),>(k466_square1_3)
  .byte CAL,<(k466_square1_4),>(k466_square1_4)
  .byte CAL,<(k466_square1_5),>(k466_square1_5)
  .byte CAL,<(k466_square1_6),>(k466_square1_6)
  .byte CAL,<(k466_square1_7),>(k466_square1_7)
  .byte GOT
  .word k466_square1_loop

k466_square2:
k466_square2_loop:
  .byte CAL,<(k466_square2_0),>(k466_square2_0)
  .byte CAL,<(k466_square2_1),>(k466_square2_1)
  .byte CAL,<(k466_square2_2),>(k466_square2_2)
  .byte CAL,<(k466_square2_3),>(k466_square2_3)
  .byte CAL,<(k466_square2_4),>(k466_square2_4)
  .byte CAL,<(k466_square2_5),>(k466_square2_5)
  .byte CAL,<(k466_square2_6),>(k466_square2_6)
  .byte CAL,<(k466_square2_7),>(k466_square2_7)
  .byte GOT
  .word k466_square2_loop

k466_triangle:
k466_triangle_loop:
  .byte CAL,<(k466_triangle_0),>(k466_triangle_0)
  .byte CAL,<(k466_triangle_1),>(k466_triangle_1)
  .byte CAL,<(k466_triangle_2),>(k466_triangle_2)
  .byte CAL,<(k466_triangle_3),>(k466_triangle_3)
  .byte CAL,<(k466_triangle_3),>(k466_triangle_3)
  .byte CAL,<(k466_triangle_3),>(k466_triangle_3)
  .byte CAL,<(k466_triangle_3),>(k466_triangle_3)
  .byte CAL,<(k466_triangle_3),>(k466_triangle_3)
  .byte GOT
  .word k466_triangle_loop

k466_square1_0:
  .byte STV,19,SAR,3,STP,6,SDU,9,SL3,A0,STV,0,SDU,0,GS4,C5,GS4
  .byte F4,C4,CS4,GS3,AS3,G4,AS4,G4,E4,C4,CS4,AS3
  .byte RET

k466_square1_1:
  .byte STV,0,SAR,3,STP,6,SDU,0,SL3,C4,F4,GS4,F4,C4,GS3,F3,C3,CS4
  .byte E3,F3,C4,G3,AS3,GS3,G3
  .byte RET

k466_square1_2:
  .byte STV,4,SAR,3,STP,6,SDU,9,SLL,18,C4,STV,0,SDU,0,SL2,E4,F4
  .byte G4,F4,E4,SLE,F4,SL2,E4,F4,G4
  .byte RET

k466_square1_3:
  .byte STV,0,SAR,3,STP,6,SDU,0,SL2,F4,E4,SLE,F4,SL2,D4,DS4,F4
  .byte DS4,D4,SLE,C4,SL2,B3,C4,D4
  .byte RET

k466_square1_4:
  .byte STV,0,SAR,3,STP,6,SDU,0,SL2,C4,B3,SLE,C4,SL2,B3,C4,D4,SL3
  .byte G4,F4,F4,DS4,DS4,D4,D4,C4
  .byte RET

k466_square1_5:
  .byte STV,0,SAR,3,STP,6,SDU,0,SLL,18,B3,SL2,C4,B3,C4,SLL,18
  .byte D4,SL2,C4,B3,C4
  .byte RET

k466_square1_6:
  .byte STV,0,SAR,3,STP,6,SDU,0,SLL,18,D4,SL2,D4,DS4,F4,DS4,D4
  .byte SLE,C4,SL2,D4,DS4,F4
  .byte RET

k466_square1_7:
  .byte STV,0,SAR,3,STP,6,SDU,0,SL3,G3,F4,DS4,C4,F4,D4,C4,B3,SLL,24
  .byte C4
  .byte RET

k466_square2_0:
  .byte STV,0,SAR,3,STP,6,SDU,0,SLC,F2,F2,G2,G2
  .byte RET

k466_square2_1:
  .byte STV,0,SAR,3,STP,6,SDU,0,SLC,GS3,GS3,SL6,AS3,GS3,G3,C3
  .byte RET

k466_square2_2:
  .byte STV,0,SAR,3,STP,6,SDU,0,SL3,F2,F3,GS3,F3,CS3,AS2,G2,E3
  .byte GS2,F3,GS3,F3,CS3,AS2,G2,E3
  .byte RET

k466_square2_3:
  .byte STV,0,SAR,3,STP,6,SDU,0,SL3,GS2,F3,GS3,F3,D3,F3,G2,B2,C2
  .byte C3,DS3,C3,GS2,C3,D2,B2
  .byte RET

k466_square2_4:
  .byte STV,0,SAR,3,STP,6,SDU,0,SL3,DS2,C3,DS3,C3,GS2,C3,D2,B2
  .byte SL6,DS2,C3,F2,GS2
  .byte RET

k466_square2_5:
  .byte STV,0,SAR,3,STP,6,SDU,0,SL3,G2,F3,GS3,F3,D3,F3,GS2,F3,G2
  .byte F3,GS3,F3,D3,F3,GS2,F3
  .byte RET

k466_square2_6:
  .byte STV,0,SAR,3,STP,6,SDU,0,SL3,G2,F3,GS3,F3,D3,F3,G2,B2,C2
  .byte C3,DS3,C3,GS2,C3,F2,GS2
  .byte RET

k466_square2_7:
  .byte STV,0,SAR,3,STP,6,SDU,0,SLC,G1,G1,SLL,24,C1
  .byte RET

k466_triangle_0:
  .byte STV,19,SAR,3,STP,6,SDU,9,SLL,24,A0,STV,0,SDU,0,SLC,F3,E3
  .byte RET

k466_triangle_1:
  .byte STV,0,SAR,3,STP,6,SDU,0,SLC,F3,C3,SL6,CS3,C3,AS2,C3
  .byte RET

k466_triangle_2:
  .byte STV,4,SAR,3,STP,6,SDU,9,SLL,48,C4
  .byte RET

k466_triangle_3:
  .byte STV,19,SAR,3,STP,6,SDU,9,SLL,48,A0
  .byte RET

k11:
  .byte 0
  .byte 5
  .byte 42
  .byte 4
  .word k11_square1
  .word k11_square2
  .word k11_triangle
  .word k11_noise
  .word 0

k11_square1:
k11_square1_loop:
  .byte CAL,<(k11_square1_0),>(k11_square1_0)
  .byte CAL,<(k11_square1_1),>(k11_square1_1)
  .byte CAL,<(k11_square1_2),>(k11_square1_2)
  .byte CAL,<(k11_square1_3),>(k11_square1_3)
  .byte CAL,<(k11_square1_4),>(k11_square1_4)
  .byte CAL,<(k11_square1_5),>(k11_square1_5)
  .byte CAL,<(k11_square1_6),>(k11_square1_6)
  .byte GOT
  .word k11_square1_loop

k11_square2:
k11_square2_loop:
  .byte CAL,<(k11_square2_0),>(k11_square2_0)
  .byte CAL,<(k11_square2_1),>(k11_square2_1)
  .byte CAL,<(k11_square2_2),>(k11_square2_2)
  .byte CAL,<(k11_square2_3),>(k11_square2_3)
  .byte CAL,<(k11_square2_4),>(k11_square2_4)
  .byte CAL,<(k11_square2_5),>(k11_square2_5)
  .byte CAL,<(k11_square2_6),>(k11_square2_6)
  .byte GOT
  .word k11_square2_loop

k11_triangle:
k11_triangle_loop:
  .byte CAL,<(k11_triangle_0),>(k11_triangle_0)
  .byte CAL,<(k11_triangle_1),>(k11_triangle_1)
  .byte CAL,<(k11_triangle_2),>(k11_triangle_2)
  .byte CAL,<(k11_triangle_3),>(k11_triangle_3)
  .byte CAL,<(k11_triangle_4),>(k11_triangle_4)
  .byte CAL,<(k11_triangle_5),>(k11_triangle_5)
  .byte CAL,<(k11_triangle_6),>(k11_triangle_6)
  .byte GOT
  .word k11_triangle_loop

k11_noise:
k11_noise_loop:
  .byte CAL,<(k11_noise_0),>(k11_noise_0)
  .byte CAL,<(k11_noise_0),>(k11_noise_0)
  .byte CAL,<(k11_noise_0),>(k11_noise_0)
  .byte CAL,<(k11_noise_0),>(k11_noise_0)
  .byte CAL,<(k11_noise_0),>(k11_noise_0)
  .byte CAL,<(k11_noise_0),>(k11_noise_0)
  .byte CAL,<(k11_noise_0),>(k11_noise_0)
  .byte GOT
  .word k11_noise_loop

k11_square1_0:
  .byte STV,1,SAR,3,STP,6,SDU,1,SL8,G3,SL1,C4,B3,C4,B3,C4,B3,A3
  .byte B3,SLC,C4,SL4,D4,DS4,F4,G4,C4,B3,A3,G3,F3
  .byte RET

k11_square1_1:
  .byte STV,1,SAR,3,STP,6,SDU,1,SL4,DS3,F3,G3,C3,B2,A2,G2,D4,DS4
  .byte F4,G4,C4,B3,A3,G3,D4
  .byte RET

k11_square1_2:
  .byte STV,1,SAR,3,STP,6,SDU,2,SL4,DS4,G3,D4,G3,C4,SL2,B3,A3,B3
  .byte G3,B3,D4,SL4,DS4,G3,D4,G3,C4,SL2,B3,A3,B3,G3,B3,D4
  .byte RET

k11_square1_3:
  .byte STV,1,SAR,3,STP,6,SDU,2,SL4,F4,G3,DS4,G3,D4,SL2,C4,B3,C4
  .byte G3,C4,DS4,SL4,F4,G3,DS4,G3,D4,SL2,C4,B3,C4,G3,C4,DS4
  .byte RET

k11_square1_4:
  .byte STV,1,SAR,3,STP,6,SDU,1,SL2,DS4,D4,C4,AS3,C4,AS3,A3,G3
  .byte A3,G3,FS3,E3,FS3,D3,E3,FS3,G3,D3,G3,AS3,SL4,D4,C4,SL1
  .byte C4,AS3,C4,AS3,C4,AS3,A3,G3,AS3,A3,AS3,A3,AS3,A3,G3,FS3
  .byte RET

k11_square1_5:
  .byte STV,1,SAR,3,STP,6,SDU,1,SL2,G3,D3,G3,AS3,SL4,D4,C4,SL1
  .byte C4,AS3,C4,AS3,C4,AS3,A3,G3,AS3,A3,AS3,A3,AS3,A3,G3,FS3
  .byte SL2,D4,G3,AS3,D4,SL4,G4,C4,SL1,C4,AS3,C4,AS3,C4,AS3,A3
  .byte G3,AS3,A3,AS3,A3,AS3,A3,G3,FS3
  .byte RET

k11_square1_6:
  .byte STV,1,SAR,3,STP,6,SDU,1,SL2,G3,G4,F4,DS4,D4,C4,B3,A3,G3
  .byte G3,F3,DS3,D3,C3,B2,A2,SL8,G2,D4,SL0,G4
  .byte RET

k11_square2_0:
  .byte STV,1,SAR,3,STP,6,SDU,1,SL8,C3,D3,SL4,DS3,D3,C3,B2,C3,D3
  .byte DS3,F3,G3,A2,B2,G2
  .byte RET

k11_square2_1:
  .byte STV,1,SAR,3,STP,6,SDU,1,SL4,C2,D2,DS2,F2,SL8,G2,SL4,G1
  .byte B2,C3,D3,DS3,F3,SL0,G3
  .byte RET

k11_square2_2:
  .byte STV,1,SAR,3,STP,6,SDU,2,SL8,G4,F4,DS4,D4,G4,F4,DS4,D4
  .byte RET

k11_square2_3:
  .byte STV,1,SAR,3,STP,6,SDU,2,SL8,GS4,G4,F4,DS4,GS4,G4,F4,DS4
  .byte RET

k11_square2_4:
  .byte STV,1,SAR,3,STP,6,SDU,1,SL4,C5,AS4,A4,G4,FS4,E4,D4,C4,SLC
  .byte AS3,SL4,DS3,SL8,D3,C3
  .byte RET

k11_square2_5:
  .byte STV,1,SAR,3,STP,6,SDU,1,SLC,AS2,SL4,DS3,SL8,D3,C3,SLC
  .byte AS2,SL4,C2,SL8,D2,D1
  .byte RET

k11_square2_6:
  .byte STV,1,SAR,3,STP,6,SDU,1,SLL,34,G1,SL2,D2,E2,FS2,G2,B1,C2
  .byte D2,SL0,G1
  .byte RET

k11_triangle_0:
  .byte STV,2,SAR,3,STP,6,SDU,1,SL8,C3,D3,SL4,DS3,D3,C3,B2,C3,D3
  .byte DS3,F3,G3,A2,B2,G2
  .byte RET

k11_triangle_1:
  .byte STV,2,SAR,3,STP,6,SDU,1,SL4,C2,D2,DS2,F2,SL8,G2,SL4,G1
  .byte B2,C3,D3,DS3,F3,SL0,G3
  .byte RET

k11_triangle_2:
  .byte STV,2,SAR,3,STP,6,SDU,1,SL4,DS4,G3,D4,G3,C4,SL2,B3,A3,B3
  .byte G3,B3,D4,SL4,DS4,G3,D4,G3,C4,SL2,B3,A3,B3,G3,B3,D4
  .byte RET

k11_triangle_3:
  .byte STV,2,SAR,3,STP,6,SDU,1,SL4,F4,G3,DS4,G3,D4,SL2,C4,B3,C4
  .byte G3,C4,DS4,SL4,F4,G3,DS4,G3,D4,SL2,C4,B3,C4,G3,C4,DS4
  .byte RET

k11_triangle_4:
  .byte STV,2,SAR,3,STP,6,SDU,1,SL2,DS4,D4,C4,AS3,C4,AS3,A3,G3
  .byte A3,G3,FS3,E3,FS3,D3,E3,FS3,G3,D3,G3,AS3,SL4,D4,C4,SL1
  .byte C4,AS3,C4,AS3,C4,AS3,A3,G3,AS3,A3,AS3,A3,AS3,A3,G3,FS3
  .byte RET

k11_triangle_5:
  .byte STV,1,SAR,3,STP,6,SDU,1,SLC,AS2,SL4,DS3,SL8,D3,C3,SLC
  .byte AS2,SL4,C2,SL8,D2,D1
  .byte RET

k11_triangle_6:
  .byte STV,1,SAR,3,STP,6,SDU,1,SLL,34,G1,SL2,D2,E2,FS2,G2,B1,C2
  .byte D2,SL0,G1
  .byte RET

k11_noise_0:
  .byte STV,3,SAR,3,STP,6,SDU,9,SL8,3,3,SL4,3,0,3,0,3,0,3,0,3,0
  .byte 3,0
  .byte RET

soler42:
  .byte 0
  .byte 3
  .byte 128
  .byte 2
  .word soler42_square1
  .word soler42_square2
  .word soler42_triangle
  .word soler42_noise
  .word 0

soler42_square1:
soler42_square1_loop:
  .byte CAL,<(soler42_square1_0),>(soler42_square1_0)
  .byte CAL,<(soler42_square1_1),>(soler42_square1_1)
  .byte CAL,<(soler42_square1_2),>(soler42_square1_2)
  .byte CAL,<(soler42_square1_3),>(soler42_square1_3)
  .byte CAL,<(soler42_square1_4),>(soler42_square1_4)
  .byte CAL,<(soler42_square1_5),>(soler42_square1_5)
  .byte CAL,<(soler42_square1_6),>(soler42_square1_6)
  .byte CAL,<(soler42_square1_7),>(soler42_square1_7)
  .byte CAL,<(soler42_square1_8),>(soler42_square1_8)
  .byte CAL,<(soler42_square1_9),>(soler42_square1_9)
  .byte CAL,<(soler42_square1_10),>(soler42_square1_10)
  .byte CAL,<(soler42_square1_11),>(soler42_square1_11)
  .byte CAL,<(soler42_square1_12),>(soler42_square1_12)
  .byte CAL,<(soler42_square1_13),>(soler42_square1_13)
  .byte GOT
  .word soler42_square1_loop

soler42_square2:
soler42_square2_loop:
  .byte CAL,<(soler42_square2_0),>(soler42_square2_0)
  .byte CAL,<(soler42_square2_1),>(soler42_square2_1)
  .byte CAL,<(soler42_square2_2),>(soler42_square2_2)
  .byte CAL,<(soler42_square2_3),>(soler42_square2_3)
  .byte CAL,<(soler42_square2_4),>(soler42_square2_4)
  .byte CAL,<(soler42_square2_5),>(soler42_square2_5)
  .byte CAL,<(soler42_square2_6),>(soler42_square2_6)
  .byte CAL,<(soler42_square2_7),>(soler42_square2_7)
  .byte CAL,<(soler42_square2_8),>(soler42_square2_8)
  .byte CAL,<(soler42_square2_9),>(soler42_square2_9)
  .byte CAL,<(soler42_square2_10),>(soler42_square2_10)
  .byte CAL,<(soler42_square2_11),>(soler42_square2_11)
  .byte CAL,<(soler42_square2_12),>(soler42_square2_12)
  .byte CAL,<(soler42_square2_13),>(soler42_square2_13)
  .byte GOT
  .word soler42_square2_loop

soler42_triangle:
soler42_triangle_loop:
  .byte CAL,<(soler42_triangle_0),>(soler42_triangle_0)
  .byte CAL,<(soler42_triangle_1),>(soler42_triangle_1)
  .byte CAL,<(soler42_triangle_2),>(soler42_triangle_2)
  .byte CAL,<(soler42_triangle_3),>(soler42_triangle_3)
  .byte CAL,<(soler42_triangle_4),>(soler42_triangle_4)
  .byte CAL,<(soler42_triangle_5),>(soler42_triangle_5)
  .byte CAL,<(soler42_triangle_6),>(soler42_triangle_6)
  .byte CAL,<(soler42_triangle_7),>(soler42_triangle_7)
  .byte CAL,<(soler42_triangle_8),>(soler42_triangle_8)
  .byte CAL,<(soler42_triangle_9),>(soler42_triangle_9)
  .byte CAL,<(soler42_triangle_10),>(soler42_triangle_10)
  .byte CAL,<(soler42_triangle_11),>(soler42_triangle_11)
  .byte CAL,<(soler42_triangle_12),>(soler42_triangle_12)
  .byte CAL,<(soler42_triangle_13),>(soler42_triangle_13)
  .byte GOT
  .word soler42_triangle_loop

soler42_noise:
soler42_noise_loop:
  .byte CAL,<(soler42_noise_0),>(soler42_noise_0)
  .byte CAL,<(soler42_noise_0),>(soler42_noise_0)
  .byte CAL,<(soler42_noise_0),>(soler42_noise_0)
  .byte CAL,<(soler42_noise_0),>(soler42_noise_0)
  .byte CAL,<(soler42_noise_0),>(soler42_noise_0)
  .byte CAL,<(soler42_noise_0),>(soler42_noise_0)
  .byte CAL,<(soler42_noise_0),>(soler42_noise_0)
  .byte CAL,<(soler42_noise_0),>(soler42_noise_0)
  .byte CAL,<(soler42_noise_0),>(soler42_noise_0)
  .byte CAL,<(soler42_noise_0),>(soler42_noise_0)
  .byte CAL,<(soler42_noise_0),>(soler42_noise_0)
  .byte CAL,<(soler42_noise_0),>(soler42_noise_0)
  .byte CAL,<(soler42_noise_0),>(soler42_noise_0)
  .byte CAL,<(soler42_noise_1),>(soler42_noise_1)
  .byte GOT
  .word soler42_noise_loop

soler42_square1_0:
  .byte STV,6,SAR,3,STP,6,SDU,9,SL4,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .byte G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .byte RET

soler42_square1_1:
  .byte STV,6,SAR,3,STP,6,SDU,9,SL4,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .byte G1,G2,FS1,G1,G2,A1,AS1,AS2,C2,D2,D3,FS3,D3,C3,A2
  .byte RET

soler42_square1_2:
  .byte STV,6,SAR,3,STP,6,SDU,9,SL4,AS2,D3,G2,FS2,D3,D2,G1,G2,FS1
  .byte G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .byte RET

soler42_square1_3:
  .byte STV,6,SAR,3,STP,6,SDU,9,SL4,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .byte G1,G2,FS1,G1,G2,A1,AS1,AS2,C2,D2,D3,FS3,D3,C3,A2
  .byte RET

soler42_square1_4:
  .byte STV,6,SAR,3,STP,6,SDU,9,SL2,A2,STV,11,A2,STV,6,A3,STV,11
  .byte A3,STV,6,C4,STV,11,C4,STV,6,A3,STV,11,A3,STV,6,FS3,STV,11
  .byte FS3,STV,6,D3,STV,11,D3,STV,6,G2,STV,11,G2,STV,6,G3,STV,11
  .byte G3,STV,6,AS3,STV,11,AS3,STV,6,G3,STV,11,G3,STV,6,E3,STV,11
  .byte E3,STV,6,C3,STV,11,C3,STV,6,F2,STV,11,F2,STV,6,F3,STV,11
  .byte F3,STV,6,A3,STV,11,A3,STV,6,F3,STV,11,F3,STV,6,D3,STV,11
  .byte D3,STV,6,AS2,STV,11,AS2,STV,6,E2,STV,11,E2,STV,6,E3,STV,11
  .byte E3,STV,6,G3,STV,11,G3,STV,6,E3,STV,11,E3,STV,6,CS3,STV,11
  .byte CS3,STV,6,A2,STV,11,A2
  .byte RET

soler42_square1_5:
  .byte STV,6,SAR,3,STP,6,SDU,9,SL4,D2,D3,F3,C2,C3,E3,AS1,AS2
  .byte D3,A1,A2,C3,G1,G2,AS2,F1,F2,A2,E1,E2,G2,D1,D2,F2
  .byte RET

soler42_square1_6:
  .byte STV,6,SAR,3,STP,6,SDU,9,SL4,A0,CS1,E1,A1,CS2,E2,A1,CS2
  .byte E2,A2,CS3,E3,A1,A2,B1,CS2,A2,D2,E2,A2,F2,G2,A2,F2
  .byte RET

soler42_square1_7:
  .byte STV,6,SAR,3,STP,6,SDU,9,SL4,E2,A2,D2,CS2,A2,D2,A1,A2,B1
  .byte CS2,A2,D2,E2,A2,F2,G2,A2,F2,E2,A2,D2,CS2,A2,D2
  .byte RET

soler42_square1_8:
  .byte STV,6,SAR,3,STP,6,SDU,9,SL4,A1,A2,CS3,A2,E2,CS2,D2,D3,F3
  .byte A3,F3,D3,G1,G2,AS2,D3,AS2,G2,A1,A2,D3,A1,A2,CS3
  .byte RET

soler42_square1_9:
  .byte STV,6,SAR,3,STP,6,SDU,9,SL4,D1,D2,F2,A2,F2,D2,A1,A2,B1
  .byte CS2,A2,D2,E2,A2,F2,G2,A2,F2,E2,A2,D2,CS2,A2,D2
  .byte RET

soler42_square1_10:
  .byte STV,6,SAR,3,STP,6,SDU,9,SL4,A1,A2,B1,CS2,A2,D2,E2,A2,F2
  .byte G2,A2,F2,E2,A2,D2,CS2,A2,D2,A1,A2,CS3,A2,E2,CS2
  .byte RET

soler42_square1_11:
  .byte STV,6,SAR,3,STP,6,SDU,9,SL2,D1,STV,11,D1,STV,6,D2,STV,11
  .byte D2,STV,6,F2,STV,11,F2,STV,6,A2,STV,11,A2,STV,6,F2,STV,11
  .byte F2,STV,6,D2,STV,11,D2,STV,6,G1,STV,11,G1,STV,6,G2,STV,11
  .byte G2,STV,6,AS2,STV,11,AS2,STV,6,D3,STV,11,D3,STV,6,AS2,STV,11
  .byte AS2,STV,6,G2,STV,11,G2,STV,6,A1,STV,11,A1,STV,6,A2,STV,11
  .byte A2,STV,6,D3,STV,11,D3,STV,6,A1,STV,11,A1,STV,6,A2,STV,11
  .byte A2,STV,6,CS3,STV,11,CS3,STV,6,D2,STV,11,D2,STV,6,D3,STV,11
  .byte D3,STV,6,F3,STV,11,F3,STV,6,A3,STV,11,A3,STV,6,F3,STV,11
  .byte F3,STV,6,D3,STV,11,D3
  .byte RET

soler42_square1_12:
  .byte STV,6,SAR,3,STP,6,SDU,9,SL2,G1,STV,11,G1,STV,6,G2,STV,11
  .byte G2,STV,6,AS2,STV,11,AS2,STV,6,D3,STV,11,D3,STV,6,AS2,STV,11
  .byte AS2,STV,6,G2,STV,11,G2,STV,6,A1,STV,11,A1,STV,6,A2,STV,11
  .byte A2,STV,6,D3,STV,11,D3,STV,6,A1,STV,11,A1,STV,6,A2,STV,11
  .byte A2,STV,6,CS3,STV,11,CS3,STV,6,D2,STV,11,D2,STV,6,A2,STV,11
  .byte A2,STV,6,CS2,STV,11,CS2,STV,6,D2,STV,11,D2,STV,6,A2,STV,11
  .byte A2,STV,6,CS2,STV,11,CS2,STV,6,D2,STV,11,D2,STV,6,A2,STV,11
  .byte A2,STV,6,CS2,STV,11,CS2,STV,6,D2,STV,11,D2,STV,6,A2,STV,11
  .byte A2,STV,6,CS2,STV,11,CS2
  .byte RET

soler42_square1_13:
  .byte STV,6,SAR,3,STP,6,SDU,9,SL4,D2,A2,CS2,D2,A2,CS2,D2,A2,CS2
  .byte D2,A2,CS2,D2,E2,D2,C2,AS1,A1
  .byte RET

soler42_square2_0:
  .byte STV,19,SAR,3,STP,6,SDU,9,SL0,A0,STV,8,SDU,4,SL4,D3,SL2
  .byte D3,SL1,AS2,D3,SL0,G3,SL4,D3,SL2,D3,SL1,AS2,D3,SL0,G3,SL4
  .byte D3,SL2,D3,SL1,AS2,D3,SL8,G3,SL4,D3,SL8,D3,SL4,C3
  .byte RET

soler42_square2_1:
  .byte STV,8,SAR,3,STP,6,SDU,4,SL1,C3,AS2,C3,SL5,AS2,SL4,A2,SL1
  .byte A2,G2,A2,SL5,G2,SL4,A2,SL1,C3,AS2,C3,SL5,AS2,SL4,A2,SL1
  .byte A2,G2,A2,SL5,G2,SL4,A2,SL1,C3,AS2,C3,SL5,AS2,SL4,C3,SL1
  .byte DS3,D3,DS3,SL5,D3,SL4,E3,SL1,G3,FS3,G3,SL5,FS3,SL4,G3,A3
  .byte AS3,C4
  .byte RET

soler42_square2_2:
  .byte STV,8,SAR,3,STP,6,SDU,4,SL4,C4,SL8,AS3,SL1,AS3,A3,AS3
  .byte SL7,A3,SL1,G3,A3,SL0,G3,SL4,D3,SL2,D3,SL1,AS2,D3,SL0,G3
  .byte SL4,D3,SL2,D3,SL1,AS2,D3,SL8,G3,SL4,D3,SL8,D3,SL4,C3
  .byte RET

soler42_square2_3:
  .byte STV,8,SAR,3,STP,6,SDU,4,SL1,C3,AS2,C3,SL5,AS2,SL4,A2,SL1
  .byte A2,G2,A2,SL5,G2,SL4,A2,SL1,C3,AS2,C3,SL5,AS2,SL4,A2,SL1
  .byte A2,G2,A2,SL5,G2,SL4,A2,SL1,C3,AS2,C3,SL5,AS2,SL4,C3,SL1
  .byte DS3,D3,DS3,SL5,D3,SL4,E3,SL1,G3,FS3,G3,SL5,FS3,SL4,G3,SL8
  .byte A3,SL4,AS3
  .byte RET

soler42_square2_4:
  .byte STV,8,SAR,3,STP,6,SDU,4,SL1,A3,SLF,C4,SL1,AS3,SL3,D4,SL1
  .byte A3,SL3,C4,SL1,A3,SL7,C4,SL1,G3,SL7,AS3,SL1,A3,SL3,C4,SL1
  .byte G3,SL3,AS3,SL1,G3,SL7,AS3,SL1,F3,SL7,A3,SL1,G3,SL3,AS3
  .byte SL1,F3,SL3,A3,SL1,F3,SL7,A3,SL1,E3,SL7,G3,SL1,F3,SL3,A3
  .byte SL1,E3,SL3,G3
  .byte RET

soler42_square2_5:
  .byte STV,8,SAR,3,STP,6,SDU,4,SL1,G3,F3,G3,SL5,F3,SL4,A3,SL1
  .byte F3,E3,F3,SL5,E3,SL4,A3,SL1,E3,D3,E3,SL5,D3,SL4,A3,SL1
  .byte D3,C3,D3,SL5,C3,SL4,A3,SL1,C3,AS2,C3,SL5,AS2,SL4,A3,SL1
  .byte AS2,A2,AS2,SL5,A2,SL4,A3,SL1,A2,G2,A2,SL5,G2,SL4,A3,SL1
  .byte G2,F2,G2,SL5,F2,SL4,A3
  .byte RET

soler42_square2_6:
  .byte STV,8,SAR,3,STP,6,SDU,4,SL0,E2,SL1,CS3,SL3,E3,SL1,CS3
  .byte SL3,E3,SL1,A2,CS3,E3,SLD,A3,SL1,CS3,SL3,E3,SL1,CS3,SL3
  .byte E3,SL1,A2,CS3,E3,SLL,17,A3,SL4,A3,SL1,D3,CS3,D3,SL5,CS3
  .byte SL4,D3,SL8,E3,SL4,F3
  .byte RET

soler42_square2_7:
  .byte STV,8,SAR,3,STP,6,SDU,4,SL1,A3,G3,A3,SL5,G3,SL4,F3,SL8
  .byte E3,SL4,F3,SL1,G3,F3,G3,SL5,F3,SLC,E3,SL4,A3,SL1,D3,CS3
  .byte D3,SL5,CS3,SL4,D3,SL8,E3,SL4,F3,SL1,A3,G3,A3,SL5,G3,SL4
  .byte F3,SL8,E3,SL4,F3
  .byte RET

soler42_square2_8:
  .byte STV,8,SAR,3,STP,6,SDU,4,SL1,G3,F3,G3,SL5,F3,SL8,E3,SL4
  .byte A3,G3,SL8,G3,F3,SL4,D4,C4,SL8,C4,AS3,SL4,AS3,G3,SLC,F3
  .byte SL1,CS3,F3,E3,F3,SL8,E3
  .byte RET

soler42_square2_9:
  .byte STV,8,SAR,3,STP,6,SDU,4,SL8,E3,SL6,D3,SL2,A3,G3,F3,E3,D3
  .byte SL4,D3,SL0,CS3,SL4,A3,SL1,D3,CS3,D3,SL5,CS3,SL4,D3,SL8
  .byte E3,SL4,F3,SL1,A3,G3,A3,SL5,G3,SL4,F3,SL8,E3,SL4,F3
  .byte RET

soler42_square2_10:
  .byte STV,8,SAR,3,STP,6,SDU,4,SL1,G3,F3,G3,SL5,F3,SLC,E3,SL4
  .byte A3,SL1,D3,CS3,D3,SL5,CS3,SL4,D3,SL8,E3,SL4,F3,SL1,A3,G3
  .byte A3,SL5,G3,SL4,F3,SL8,E3,SL4,F3,SL1,G3,F3,G3,SL5,F3,SL8
  .byte E3,SL4,A3,G3
  .byte RET

soler42_square2_11:
  .byte STV,8,SAR,3,STP,6,SDU,4,SL8,G3,F3,SL4,D4,C4,SL8,C4,AS3
  .byte SL4,AS3,G3,SLC,F3,SL1,CS3,E3,F3,E3,F3,SL7,E3,SL8,E3,D3
  .byte SL4,D4,C4
  .byte RET

soler42_square2_12:
  .byte STV,8,SAR,3,STP,6,SDU,4,SL8,C4,AS3,SL4,AS3,G3,SLC,F3,SL1
  .byte CS3,E3,F3,E3,F3,SL7,E3,SL8,D2,SL4,E2,SL8,F2,SL4,E2,SL8
  .byte D2,SL4,E2,SL8,F2,SL4,E2
  .byte RET

soler42_square2_13:
  .byte STV,8,SAR,3,STP,6,SDU,4,SL8,D2,SL4,CS2,SL8,D2,SL4,CS2
  .byte SL8,D2,SL4,CS2,SL8,D2,SL4,CS2,D2,STV,10,SDU,9,SLL,20
  .byte F3
  .byte RET

soler42_triangle_0:
  .byte STV,6,SAR,3,STP,6,SDU,9,SL4,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .byte G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .byte RET

soler42_triangle_1:
  .byte STV,6,SAR,3,STP,6,SDU,9,SL4,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .byte G1,G2,FS1,G1,G2,A1,AS1,AS2,C2,D2,D3,FS3,D3,C3,A2
  .byte RET

soler42_triangle_2:
  .byte STV,6,SAR,3,STP,6,SDU,9,SL4,AS2,D3,G2,FS2,D3,D2,G1,G2,FS1
  .byte G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .byte RET

soler42_triangle_3:
  .byte STV,6,SAR,3,STP,6,SDU,9,SL4,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .byte G1,G2,FS1,G1,G2,A1,AS1,AS2,C2,D2,D3,FS3,D3,C3,A2
  .byte RET

soler42_triangle_4:
  .byte STV,6,SAR,3,STP,6,SDU,9,SL4,A2,A3,C4,A3,FS3,D3,G2,G3,AS3
  .byte G3,E3,C3,F2,F3,A3,F3,D3,AS2,E2,E3,G3,E3,CS3,A2
  .byte RET

soler42_triangle_5:
  .byte STV,6,SAR,3,STP,6,SDU,9,SL4,D2,D3,F3,C2,C3,E3,AS1,AS2
  .byte D3,A1,A2,C3,G1,G2,AS2,F1,F2,A2,E1,E2,G2,D1,D2,F2
  .byte RET

soler42_triangle_6:
  .byte STV,6,SAR,3,STP,6,SDU,9,SL4,A0,CS1,E1,A1,CS2,E2,A1,CS2
  .byte E2,A2,CS3,E3,A1,A2,B1,CS2,A2,D2,E2,A2,F2,G2,A2,F2
  .byte RET

soler42_triangle_7:
  .byte STV,8,SAR,3,STP,6,SDU,4,SL4,E2,A2,D2,CS2,A2,D2,A1,A2,B1
  .byte CS2,A2,D2,E2,A2,F2,G2,A2,F2,E2,A2,D2,CS2,A2,D2
  .byte RET

soler42_triangle_8:
  .byte STV,6,SAR,3,STP,6,SDU,9,SL4,A1,A2,CS3,A2,E2,CS2,D2,D3,F3
  .byte A3,F3,D3,G1,G2,AS2,D3,AS2,G2,A1,A2,D3,A1,A2,CS3
  .byte RET

soler42_triangle_9:
  .byte STV,6,SAR,3,STP,6,SDU,9,SL4,D1,D2,F2,A2,F2,D2,A1,A2,B1
  .byte CS2,A2,D2,E2,A2,F2,G2,A2,F2,E2,A2,D2,CS2,A2,D2
  .byte RET

soler42_triangle_10:
  .byte STV,6,SAR,3,STP,6,SDU,9,SL4,A1,A2,B1,CS2,A2,D2,E2,A2,F2
  .byte G2,A2,F2,E2,A2,D2,CS2,A2,D2,A1,A2,CS3,A2,E2,CS2
  .byte RET

soler42_triangle_11:
  .byte STV,6,SAR,3,STP,6,SDU,9,SL4,D1,D2,F2,A2,F2,D2,G1,G2,AS2
  .byte D3,AS2,G2,A1,A2,D3,A1,A2,CS3,D2,D3,F3,A3,F3,D3
  .byte RET

soler42_triangle_12:
  .byte STV,6,SAR,3,STP,6,SDU,9,SL4,G1,G2,AS2,D3,AS2,G2,A1,A2,D3
  .byte A1,A2,CS3,D2,A2,CS2,D2,A2,CS2,D2,A2,CS2,D2,A2,CS2
  .byte RET

soler42_triangle_13:
  .byte STV,6,SAR,3,STP,6,SDU,9,SL4,D2,A2,CS2,D2,A2,CS2,D2,A2,CS2
  .byte D2,A2,CS2,D2,E2,D2,C2,AS1,A1
  .byte RET

soler42_noise_0:
  .byte STV,9,SAR,3,STP,6,SDU,9,SL4,0,0,5,0,0,5,0,0,5,0,0,5,0,0
  .byte 5,0,0,5,0,0,5,0,0,5
  .byte RET

soler42_noise_1:
  .byte STV,9,SAR,3,STP,6,SDU,9,SL4,0,0,5,0,0,5,0,0,5,0,0,5,0,0
  .byte 5,0,0,5
  .byte RET

antagonist:
  .byte 0
  .byte 5
  .byte 42
  .byte 4
  .word antagonist_square1
  .word antagonist_square2
  .word antagonist_triangle
  .word 0
  .word 0

antagonist_square1:
antagonist_square1_loop:
  .byte CAL,<(antagonist_square1_0),>(antagonist_square1_0)
  .byte CAL,<(antagonist_square1_0),>(antagonist_square1_0)
  .byte CAL,<(antagonist_square1_1),>(antagonist_square1_1)
  .byte CAL,<(antagonist_square1_1),>(antagonist_square1_1)
  .byte CAL,<(antagonist_square1_2),>(antagonist_square1_2)
  .byte CAL,<(antagonist_square1_2),>(antagonist_square1_2)
  .byte CAL,<(antagonist_square1_3),>(antagonist_square1_3)
  .byte GOT
  .word antagonist_square1_loop

antagonist_square2:
antagonist_square2_loop:
  .byte CAL,<(antagonist_square2_0),>(antagonist_square2_0)
  .byte CAL,<(antagonist_square2_1),>(antagonist_square2_1)
  .byte CAL,<(antagonist_square2_2),>(antagonist_square2_2)
  .byte CAL,<(antagonist_square2_2),>(antagonist_square2_2)
  .byte CAL,<(antagonist_square2_3),>(antagonist_square2_3)
  .byte CAL,<(antagonist_square2_3),>(antagonist_square2_3)
  .byte CAL,<(antagonist_square2_4),>(antagonist_square2_4)
  .byte GOT
  .word antagonist_square2_loop

antagonist_triangle:
antagonist_triangle_loop:
  .byte CAL,<(antagonist_triangle_0),>(antagonist_triangle_0)
  .byte CAL,<(antagonist_triangle_1),>(antagonist_triangle_1)
  .byte CAL,<(antagonist_triangle_1),>(antagonist_triangle_1)
  .byte CAL,<(antagonist_triangle_1),>(antagonist_triangle_1)
  .byte CAL,<(antagonist_triangle_3),>(antagonist_triangle_3)
  .byte CAL,<(antagonist_triangle_3),>(antagonist_triangle_3)
  .byte CAL,<(antagonist_triangle_4),>(antagonist_triangle_4)
  .byte GOT
  .word antagonist_triangle_loop

antagonist_square1_0:
  .byte STV,12,SAR,3,STP,2,SDU,5,SL4,C2,C3,B2,C3,G2,C3,D3,DS3
  .byte FS2,D3,C3,D3,F2,B2,A2,B2
  .byte RET

antagonist_square1_1:
  .byte STV,12,SAR,3,STP,2,SDU,5,SL4,C3,C4,B3,C4,G3,C4,D4,DS4
  .byte FS3,D4,C4,D4,F3,B3,A3,B3
  .byte RET

antagonist_square1_2:
  .byte STV,12,SAR,3,STP,2,SDU,5,SL2,C4,B3,C4,DS4,SLL,24,G4,SL2
  .byte D4,C4,D4,F4,SLL,24,B4
  .byte RET

antagonist_square1_3:
  .byte STV,12,SAR,3,STP,2,SDU,5,SL2,GS4,G4,GS4,C5,SL0,DS5,SL8
  .byte F5,SL2,D5,DS5,D5,C5,SLL,24,B4
  .byte RET

antagonist_square2_0:
  .byte STV,13,SAR,3,STP,6,SDU,9,SLL,64,C2
  .byte RET

antagonist_square2_1:
  .byte STV,19,SAR,3,STP,6,SDU,9,SLL,64,A0
  .byte RET

antagonist_square2_2:
  .byte STV,12,SAR,3,STP,2,SDU,5,SL2,C2,D2,DS2,G2,SLL,24,C3,SL2
  .byte FS2,G2,A2,C3,SL8,A3,GS3,G3
  .byte RET

antagonist_square2_3:
  .byte STV,19,SAR,3,STP,6,SDU,9,SL8,A0,STV,12,STP,2,SDU,5,SL2
  .byte G2,FS2,G2,C3,SL8,DS3,F3,SL0,D3,SL2,G2,FS2,G2,B2,SL8,G3
  .byte RET

antagonist_square2_4:
  .byte STV,12,SAR,3,STP,2,SDU,5,SL8,GS2,SL2,C3,AS2,C3,DS3,SL0
  .byte GS3,SL2,F3,G3,F3,DS3,SLL,24,D3
  .byte RET

antagonist_triangle_0:
  .byte STV,13,SAR,3,STP,6,SDU,9,SLL,64,C2
  .byte RET

antagonist_triangle_1:
  .byte STV,12,SAR,3,STP,2,SDU,5,SL0,C2,DS2,D2,G2
  .byte RET

antagonist_triangle_3:
  .byte STV,12,SAR,3,STP,2,SDU,5,SLL,32,C2,G2
  .byte RET

antagonist_triangle_4:
  .byte STV,12,SAR,3,STP,2,SDU,5,SLL,24,GS2,SL8,F2,SLL,24,G2,SL8
  .byte G1
  .byte RET

arps:
  .byte 0
  .byte 3
  .byte 128
  .byte 2
  .word arps_square1
  .word arps_square2
  .word arps_triangle
  .word 0
  .word 0

arps_square1:
arps_square1_loop:
  .byte CAL,<(arps_square1_0),>(arps_square1_0)
  .byte CAL,<(arps_square1_1),>(arps_square1_1)
  .byte GOT
  .word arps_square1_loop

arps_square2:
arps_square2_loop:
  .byte CAL,<(arps_square2_0),>(arps_square2_0)
  .byte CAL,<(arps_square2_1),>(arps_square2_1)
  .byte GOT
  .word arps_square2_loop

arps_triangle:
arps_triangle_loop:
  .byte CAL,<(arps_triangle_0),>(arps_triangle_0)
  .byte CAL,<(arps_triangle_1),>(arps_triangle_1)
  .byte GOT
  .word arps_triangle_loop

arps_square1_0:
  .byte STV,15,SAR,0,STP,4,SDU,6,SL0,A2,D3,SAR,1,G2,C3
  .byte RET

arps_square1_1:
  .byte STV,15,SAR,1,STP,4,SDU,6,SL0,F2,SAR,2,B2,SAR,1,E2,SAR,0
  .byte A2
  .byte RET

arps_square2_0:
  .byte STV,15,SAR,3,STP,4,SDU,6,SL2,A3,G3,F3,E3,G3,F3,E3,G3,SL0
  .byte F3,SL2,G3,F3,E3,D3,F3,E3,D3,F3,SL0,E3
  .byte RET

arps_square2_1:
  .byte STV,15,SAR,3,STP,4,SDU,6,SL2,F3,E3,D3,C3,D3,C3,B2,A2,SL0
  .byte GS2,SL2,B2,A2,GS2,FS2,GS2,E2,FS2,GS2,SL0,A2
  .byte RET

arps_triangle_0:
  .byte STV,16,SAR,3,STP,6,SDU,9,SL8,A2,C3,D3,A2,G2,B2,C3,G2
  .byte RET

arps_triangle_1:
  .byte STV,16,SAR,3,STP,6,SDU,9,SL8,F2,A2,B2,F2,E2,GS2,A2,E2
  .byte RET

sfx_shot:
  .byte 0, 1
  .byte 0, 1
  .word 0
  .word 0
  .word 0
  .word sfx_shot_noise
  .word 0

sfx_shot_noise:
  .byte CAL,<(sfx_shot_noise_0),>(sfx_shot_noise_0)
  .byte TRM
sfx_shot_noise_0:
  .byte SLL,32,STV,5,SAR,3,STP,6,SDU,9,8
  .byte RET

sfx_laser:
  .byte 0, 1
  .byte 0, 1
  .word sfx_laser_square1
  .word 0
  .word 0
  .word 0
  .word 0

sfx_laser_square1:
  .byte CAL,<(sfx_laser_square1_0),>(sfx_laser_square1_0)
  .byte TRM
sfx_laser_square1_0:
  .byte SLL,16,STV,7,SAR,3,STP,1,SDU,9,B7
  .byte RET

sfx_dpcm:
  .byte 0, 1
  .byte 0, 1
  .word 0
  .word 0
  .word 0
  .word 0
  .word sfx_dpcm_dpcm

sfx_dpcm_dpcm:
  .byte CAL,<(sfx_dpcm_dpcm_0),>(sfx_dpcm_dpcm_0)
  .byte TRM
sfx_dpcm_dpcm_0:
  .byte SLL,8,STV,14,SAR,3,STP,6,SDU,9,D3
  .byte RET

sfx_zap:
  .byte 0, 1
  .byte 0, 1
  .word 0
  .word 0
  .word 0
  .word sfx_zap_noise
  .word 0

sfx_zap_noise:
  .byte CAL,<(sfx_zap_noise_0),>(sfx_zap_noise_0)
  .byte TRM
sfx_zap_noise_0:
  .byte SLL,16,STV,7,SAR,3,STP,6,SDU,8,4
  .byte RET

sfx_collide:
  .byte 0, 1
  .byte 0, 1
  .word 0
  .word 0
  .word 0
  .word sfx_collide_noise
  .word 0

sfx_collide_noise:
  .byte CAL,<(sfx_collide_noise_0),>(sfx_collide_noise_0)
  .byte TRM
sfx_collide_noise_0:
  .byte SLL,16,STV,7,SAR,3,STP,3,SDU,5,0
  .byte RET
