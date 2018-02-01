song_list:
  .word _robot_adv
  .word _k466
  .word _k11
  .word _soler42
  .word _antagonist
  .word _arps
  .word _noise_arps

sfx_list:
  .word _sfx_shot
  .word _sfx_laser
  .word _sfx_dpcm
  .word _sfx_zap
  .word _sfx_collide

instrument_list:
  .word Piano_0
  .word Instrument1_1
  .word Instrument2_2
  .word Instrument3_3
  .word Instrument4_4
  .word Note_cut_5
  .word Shot_6
  .word Instrument5_7
  .word Laser_8
  .word Instrument6_9
  .word Instrument7_10
  .word Instrument8_11
  .word Instrument9_12
  .word Sing_13
  .word Note_Cut_14
  .word dpcm_15
  .word Sing_16
  .word Triangle_On_17
  .word SingMinArp_18
  .word Guitar_19
  .word SingMajArp_20
  .word SingDimArp_21
  .word Zap_22
  .word Collide_23
  .word Drum1_24
  .word Drum2_25
  .word Drum3_26
  .word Triangle_On_27
  .word silent_28

dpcm_list:
  .word dpcm_samples_list
  .word dpcm_note_to_sample_index
  .word dpcm_note_to_sample_length
  .word dpcm_note_to_loop_pitch_index

Piano_0:
  .byte 5,19,21,23,ARP_TYPE_ABSOLUTE
  .byte 12,10,6,4,3,4,5,8,10,8,5,3,3,ENV_STOP
  .byte 0,ENV_STOP
  .byte 128,DUTY_ENV_STOP
  .byte ENV_STOP

Instrument1_1:
  .byte 5,24,26,28,ARP_TYPE_ABSOLUTE
  .byte 11,8,7,8,10,8,5,3,1,1,2,4,5,5,3,2,1,1,ENV_STOP
  .byte 0,ENV_STOP
  .byte 64,DUTY_ENV_STOP
  .byte ENV_STOP

Instrument2_2:
  .byte 5,13,15,17,ARP_TYPE_ABSOLUTE
  .byte 10,10,10,10,10,10,0,ENV_STOP
  .byte 0,ENV_STOP
  .byte 64,DUTY_ENV_STOP
  .byte ENV_STOP

Instrument3_3:
  .byte 5,11,13,15,ARP_TYPE_ABSOLUTE
  .byte 12,5,3,1,0,ENV_STOP
  .byte 0,ENV_STOP
  .byte 0,DUTY_ENV_STOP
  .byte ENV_STOP

Instrument4_4:
  .byte 5,24,26,28,ARP_TYPE_ABSOLUTE
  .byte 11,8,7,8,10,8,5,3,1,1,2,4,5,5,3,2,1,1,ENV_STOP
  .byte 0,ENV_STOP
  .byte 128,DUTY_ENV_STOP
  .byte ENV_STOP

Note_cut_5:
  .byte 5,7,9,11,ARP_TYPE_ABSOLUTE
  .byte 0,ENV_STOP
  .byte 0,ENV_STOP
  .byte 0,DUTY_ENV_STOP
  .byte ENV_STOP

Shot_6:
  .byte 5,38,40,42,ARP_TYPE_ABSOLUTE
  .byte 15,6,10,11,11,10,9,8,7,6,5,4,3,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,ENV_STOP
  .byte 0,ENV_STOP
  .byte 0,DUTY_ENV_STOP
  .byte ENV_STOP

Instrument5_7:
  .byte 5,14,16,18,ARP_TYPE_ABSOLUTE
  .byte 14,14,14,11,4,2,2,2,ENV_STOP
  .byte 0,ENV_STOP
  .byte 0,DUTY_ENV_STOP
  .byte ENV_STOP

Laser_8:
  .byte 5,22,37,39,ARP_TYPE_ABSOLUTE
  .byte 14,13,12,11,10,9,8,8,7,6,5,4,3,2,1,0,ENV_STOP
  .byte 10,10,10,10,10,10,10,10,10,10,10,10,10,10,ENV_STOP
  .byte 0,DUTY_ENV_STOP
  .byte ENV_STOP

Instrument6_9:
  .byte 5,14,16,19,ARP_TYPE_ABSOLUTE
  .byte 6,9,11,11,7,6,5,5,ENV_STOP
  .byte 0,ENV_STOP
  .byte 128,0,DUTY_ENV_STOP
  .byte ENV_STOP

Instrument7_10:
  .byte 5,12,14,16,ARP_TYPE_ABSOLUTE
  .byte 15,2,0,0,0,0,ENV_STOP
  .byte 0,ENV_STOP
  .byte 0,DUTY_ENV_STOP
  .byte ENV_STOP

Instrument8_11:
  .byte 5,7,9,11,ARP_TYPE_ABSOLUTE
  .byte 0,ENV_STOP
  .byte 0,ENV_STOP
  .byte 0,DUTY_ENV_STOP
  .byte ENV_STOP

Instrument9_12:
  .byte 5,14,16,18,ARP_TYPE_ABSOLUTE
  .byte 9,9,9,6,2,1,1,1,ENV_STOP
  .byte 0,ENV_STOP
  .byte 0,DUTY_ENV_STOP
  .byte ENV_STOP

Sing_13:
  .byte 5,27,48,50,ARP_TYPE_ABSOLUTE
  .byte 3,4,4,5,5,5,5,5,5,5,5,4,4,4,4,4,4,4,3,3,3,ENV_STOP
  .byte 0,0,0,0,0,0,0,0,0,-1,-1,1,1,1,1,-1,-1,-1,-1,ENV_LOOP,38
  .byte 192,DUTY_ENV_STOP
  .byte ENV_STOP

Note_Cut_14:
  .byte 5,7,9,11,ARP_TYPE_ABSOLUTE
  .byte 0,ENV_STOP
  .byte 0,ENV_STOP
  .byte 0,DUTY_ENV_STOP
  .byte ENV_STOP

dpcm_15:
  .byte 5,14,16,18,ARP_TYPE_ABSOLUTE
  .byte 8,4,3,2,2,1,1,0,ENV_STOP
  .byte 0,ENV_STOP
  .byte 0,DUTY_ENV_STOP
  .byte ENV_STOP

Sing_16:
  .byte 5,27,48,50,ARP_TYPE_ABSOLUTE
  .byte 3,4,4,5,5,5,5,5,5,5,5,4,4,4,4,4,4,4,3,3,3,ENV_STOP
  .byte 0,0,0,0,0,0,0,0,0,-1,-1,1,1,1,1,-1,-1,-1,-1,ENV_LOOP,38
  .byte 128,DUTY_ENV_STOP
  .byte ENV_STOP

Triangle_On_17:
  .byte 5,7,9,11,ARP_TYPE_ABSOLUTE
  .byte 1,ENV_STOP
  .byte 0,ENV_STOP
  .byte 0,DUTY_ENV_STOP
  .byte ENV_STOP

SingMinArp_18:
  .byte 5,27,48,50,ARP_TYPE_ABSOLUTE
  .byte 3,4,4,5,5,5,5,5,5,5,5,4,4,4,4,4,4,4,3,3,3,ENV_STOP
  .byte 0,0,0,0,0,0,0,0,0,-1,-1,1,1,1,1,-1,-1,-1,-1,ENV_LOOP,38
  .byte 128,DUTY_ENV_STOP
  .byte 0,3,7,12,ENV_LOOP,50

Guitar_19:
  .byte 5,70,91,94,ARP_TYPE_ABSOLUTE
  .byte 3,3,4,5,5,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,1,ENV_STOP
  .byte 0,0,0,0,0,0,0,0,0,-1,-1,1,1,1,1,-1,-1,-1,-1,ENV_LOOP,81
  .byte 192,64,DUTY_ENV_STOP
  .byte ENV_STOP

SingMajArp_20:
  .byte 5,27,48,50,ARP_TYPE_ABSOLUTE
  .byte 3,4,4,5,5,5,5,5,5,5,5,4,4,4,4,4,4,4,3,3,3,ENV_STOP
  .byte 0,0,0,0,0,0,0,0,0,-1,-1,1,1,1,1,-1,-1,-1,-1,ENV_LOOP,38
  .byte 128,DUTY_ENV_STOP
  .byte 0,4,7,12,ENV_LOOP,50

SingDimArp_21:
  .byte 5,27,48,50,ARP_TYPE_ABSOLUTE
  .byte 3,4,4,5,5,5,5,5,5,5,5,4,4,4,4,4,4,4,3,3,3,ENV_STOP
  .byte 0,0,0,0,0,0,0,0,0,-1,-1,1,1,1,1,-1,-1,-1,-1,ENV_LOOP,38
  .byte 128,DUTY_ENV_STOP
  .byte 0,3,6,12,ENV_LOOP,50

Zap_22:
  .byte 5,22,24,26,ARP_TYPE_ABSOLUTE
  .byte 14,13,12,11,10,9,8,8,7,6,5,4,3,2,1,0,ENV_STOP
  .byte 0,ENV_STOP
  .byte 64,DUTY_ENV_STOP
  .byte ENV_STOP

Collide_23:
  .byte 5,22,37,39,ARP_TYPE_ABSOLUTE
  .byte 14,13,12,11,10,9,8,8,7,6,5,4,3,2,1,0,ENV_STOP
  .byte 1,1,1,1,1,1,1,1,1,1,1,1,1,1,ENV_STOP
  .byte 192,DUTY_ENV_STOP
  .byte ENV_STOP

Drum1_24:
  .byte 5,15,17,19,ARP_TYPE_FIXED
  .byte 5,4,3,3,2,2,1,1,0,ENV_STOP
  .byte 0,ENV_STOP
  .byte 0,DUTY_ENV_STOP
  .byte 7,ENV_STOP

Drum2_25:
  .byte 5,11,13,15,ARP_TYPE_ABSOLUTE
  .byte 4,3,2,1,0,ENV_STOP
  .byte 0,ENV_STOP
  .byte 0,DUTY_ENV_STOP
  .byte ENV_STOP

Drum3_26:
  .byte 5,25,27,29,ARP_TYPE_FIXED
  .byte 4,4,5,5,6,6,5,5,4,4,3,3,2,2,1,1,1,1,0,ENV_STOP
  .byte 0,ENV_STOP
  .byte 0,DUTY_ENV_STOP
  .byte 0,1,2,3,4,5,6,7,8,ENV_STOP

Triangle_On_27:
  .byte 5,7,9,11,ARP_TYPE_ABSOLUTE
  .byte 1,ENV_STOP
  .byte 0,ENV_STOP
  .byte 0,DUTY_ENV_STOP
  .byte ENV_STOP

silent_28:
  .byte 5,7,9,11,ARP_TYPE_ABSOLUTE
  .byte 0,ENV_STOP
  .byte 0,ENV_STOP
  .byte 0,DUTY_ENV_STOP
  .byte ENV_STOP

dpcm_samples_list:
  .byte <(dpcm_sample_bde >> 6)
  .byte <(dpcm_sample_sd1 >> 6)
  .byte <(dpcm_sample_sfx >> 6)

dpcm_note_to_sample_index:
  .byte $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff
  .byte $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$00,$01,$02,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff
  .byte $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff
  .byte $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff

dpcm_note_to_sample_length:
  .byte $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff
  .byte $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$0f,$2f,$86,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff
  .byte $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff
  .byte $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff

dpcm_note_to_loop_pitch_index:
  .byte $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff
  .byte $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$0f,$0f,$0f,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff
  .byte $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff
  .byte $ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff,$ff

_robot_adv:
  .byte 0
  .byte 6
  .byte 0
  .byte 5
  .word _robot_adv_square1
  .word _robot_adv_square2
  .word _robot_adv_triangle
  .word _robot_adv_noise
  .word _robot_adv_dpcm

_robot_adv_square1:
_robot_adv_square1_loop:
  .byte CAL,<(_robot_adv_square1_0),>(_robot_adv_square1_0)
  .byte CAL,<(_robot_adv_square1_1),>(_robot_adv_square1_1)
  .byte CAL,<(_robot_adv_square1_2),>(_robot_adv_square1_2)
  .byte CAL,<(_robot_adv_square1_3),>(_robot_adv_square1_3)
  .byte GOT
  .word _robot_adv_square1_loop

_robot_adv_square2:
_robot_adv_square2_loop:
  .byte CAL,<(_robot_adv_square2_0),>(_robot_adv_square2_0)
  .byte CAL,<(_robot_adv_square2_1),>(_robot_adv_square2_1)
  .byte CAL,<(_robot_adv_square2_2),>(_robot_adv_square2_2)
  .byte CAL,<(_robot_adv_square2_3),>(_robot_adv_square2_3)
  .byte GOT
  .word _robot_adv_square2_loop

_robot_adv_triangle:
_robot_adv_triangle_loop:
  .byte CAL,<(_robot_adv_triangle_0),>(_robot_adv_triangle_0)
  .byte CAL,<(_robot_adv_triangle_1),>(_robot_adv_triangle_1)
  .byte CAL,<(_robot_adv_triangle_2),>(_robot_adv_triangle_2)
  .byte CAL,<(_robot_adv_triangle_3),>(_robot_adv_triangle_3)
  .byte GOT
  .word _robot_adv_triangle_loop

_robot_adv_noise:
_robot_adv_noise_loop:
  .byte CAL,<(_robot_adv_noise_0),>(_robot_adv_noise_0)
  .byte CAL,<(_robot_adv_noise_1),>(_robot_adv_noise_1)
  .byte CAL,<(_robot_adv_noise_2),>(_robot_adv_noise_2)
  .byte CAL,<(_robot_adv_noise_3),>(_robot_adv_noise_3)
  .byte GOT
  .word _robot_adv_noise_loop

_robot_adv_dpcm:
_robot_adv_dpcm_loop:
  .byte CAL,<(_robot_adv_dpcm_0),>(_robot_adv_dpcm_0)
  .byte CAL,<(_robot_adv_dpcm_0),>(_robot_adv_dpcm_0)
  .byte CAL,<(_robot_adv_dpcm_0),>(_robot_adv_dpcm_0)
  .byte CAL,<(_robot_adv_dpcm_0),>(_robot_adv_dpcm_0)
  .byte GOT
  .word _robot_adv_dpcm_loop

_robot_adv_square1_0:
  .byte STI,19,SL1,DS3,D3,C3,D3,SL4,C3,SL1,C3,STI,28,A0,STI,19
  .byte C3,STI,28,A0,STI,19,C3,C3,STI,28,SL2,A0,STI,19,SL1,D3,C3
  .byte B2,C3,SL4,B2,SL1,B2,STI,28,A0,STI,19,B2,STI,28,A0,STI,19
  .byte B2,B2,STI,28,SL2,A0,STI,19,SL1,C3,B2,A2,B2,SL8,A2,SL4
  .byte A2,SL8,G2,SL1,DS3,D3,C3,B2,C3,B2,A2,G2
  .byte RET

_robot_adv_square1_1:
  .byte STI,19,SL1,DS3,D3,C3,D3,SL4,C3,SL1,C3,STI,28,A0,STI,19
  .byte C3,STI,28,A0,STI,19,C3,C3,STI,28,SL2,A0,STI,19,SL1,D3,C3
  .byte B2,C3,SL4,B2,SL1,B2,STI,28,A0,STI,19,B2,STI,28,A0,STI,19
  .byte B2,B2,STI,28,SL2,A0,STI,19,SL1,C3,B2,A2,B2,SL8,A2,SL4
  .byte A2,SL8,G2,SL1,DS3,D3,C3,B2,C3,B2,C3,D3
  .byte RET

_robot_adv_square1_2:
  .byte STI,19,SL1,AS2,C3,AS2,SL5,C3,SL1,C3,AS2,GS2,G2,F2,DS2
  .byte D2,C2,SL0,D2,SL1,C3,D3,C3,SL5,D3,SL1,D3,C3,B2,A2,B2,C3
  .byte D3,F3,SL0,DS3
  .byte RET

_robot_adv_square1_3:
  .byte STI,19,SL1,AS2,C3,AS2,SL5,C3,SL1,C3,AS2,C3,D3,DS3,F3,G3
  .byte AS3,SL0,F3,SL1,AS3,B3,AS3,SL5,B3,SL1,G4,F4,DS4,D4,C4,B3
  .byte A3,G3,SL0,DS3
  .byte RET

_robot_adv_square2_0:
  .byte STI,19,SL1,G3,F3,DS3,F3,SL4,DS3,SL1,DS3,STI,28,A0,STI,19
  .byte DS3,STI,28,A0,STI,19,DS3,DS3,STI,28,SL2,A0,STI,19,SL1
  .byte F3,DS3,D3,DS3,SL4,D3,SL1,D3,STI,28,A0,STI,19,D3,STI,28
  .byte A0,STI,19,D3,D3,STI,28,SL2,A0,STI,19,SL1,DS3,D3,C3,D3,SL8
  .byte C3,SL4,FS3,SL8,G3,SL1,G3,F3,DS3,D3,DS3,D3,C3,B2
  .byte RET

_robot_adv_square2_1:
  .byte STI,19,SL1,G3,F3,DS3,F3,SL4,DS3,SL1,DS3,STI,28,A0,STI,19
  .byte DS3,STI,28,A0,STI,19,DS3,DS3,STI,28,SL2,A0,STI,19,SL1
  .byte F3,DS3,D3,DS3,SL4,D3,SL1,D3,STI,28,A0,STI,19,D3,STI,28
  .byte A0,STI,19,D3,D3,STI,28,SL2,A0,STI,19,SL1,DS3,D3,C3,D3,SL8
  .byte C3,SL4,A3,SL8,B3,SL1,G3,F3,DS3,D3,DS3,D3,DS3,F3
  .byte RET

_robot_adv_square2_2:
  .byte STI,19,SL1,G3,GS3,G3,SL5,GS3,SL1,GS3,G3,F3,DS3,D3,C3,AS2
  .byte GS2,SL0,AS2,SL1,DS3,F3,DS3,SL5,F3,SL1,F3,DS3,D3,C3,D3,G2
  .byte A2,B2,SL0,C3
  .byte RET

_robot_adv_square2_3:
  .byte STI,19,SL1,G3,GS3,G3,SL5,GS3,SL1,GS3,G3,GS3,AS3,C4,D4,DS4
  .byte F4,SL0,D4,SL1,FS4,G4,FS4,SL5,G4,SL1,B4,A4,G4,F4,DS4,D4
  .byte C4,B3,SL0,C4
  .byte RET

_robot_adv_triangle_0:
  .byte STI,27,SL1,C3,STI,28,A0,STI,27,C3,STI,28,A0,STI,27
  .byte SL3,C3,STI,28,SL1,A0,STI,27,SL3,C3,STI,28,SL1,A0,STI,27
  .byte SL3,C3,STI,28,SL1,A0,STI,27,G3,STI,28,A0,STI,27,G3,STI,28
  .byte A0,STI,27,SL3,G3,STI,28,SL1,A0,STI,27,SL3,G3,STI,28
  .byte SL1,A0,STI,27,SL3,G3,STI,28,SL1,A0,STI,27,A3,STI,28
  .byte A0,STI,27,A3,STI,28,A0,STI,27,SL3,A3,STI,28,SL1,A0,STI,27
  .byte SL3,FS3,STI,28,SL1,A0,STI,27,SL3,FS3,STI,28,SL1,A0,STI,27
  .byte G3,STI,28,A0,STI,27,G3,STI,28,A0,STI,27,SL3,G3,STI,28
  .byte SL1,A0,STI,27,SL3,G3,STI,28,SL1,A0,STI,27,SL3,D3,STI,28
  .byte SL1,A0
  .byte RET

_robot_adv_triangle_1:
  .byte STI,27,SL1,C3,STI,28,A0,STI,27,C3,STI,28,A0,STI,27
  .byte SL3,C3,STI,28,SL1,A0,STI,27,SL3,C3,STI,28,SL1,A0,STI,27
  .byte SL3,C3,STI,28,SL1,A0,STI,27,G3,STI,28,A0,STI,27,G3,STI,28
  .byte A0,STI,27,SL3,G3,STI,28,SL1,A0,STI,27,SL3,G3,STI,28
  .byte SL1,A0,STI,27,SL3,G3,STI,28,SL1,A0,STI,27,A3,STI,28
  .byte A0,STI,27,A3,STI,28,A0,STI,27,SL3,A3,STI,28,SL1,A0,STI,27
  .byte SL3,FS3,STI,28,SL1,A0,STI,27,SL3,FS3,STI,28,SL1,A0,STI,27
  .byte G3,STI,28,A0,STI,27,G3,STI,28,A0,STI,27,SL3,G3,STI,28
  .byte SL1,A0,STI,27,SL3,G3,STI,28,SL1,A0,STI,27,SL3,D3,STI,28
  .byte SL1,A0
  .byte RET

_robot_adv_triangle_2:
  .byte STI,27,SL1,GS2,STI,28,A0,STI,27,GS2,STI,28,A0,STI,27
  .byte GS2,STI,28,A0,STI,27,GS2,STI,28,A0,STI,27,GS2,STI,28
  .byte A0,STI,27,GS2,STI,28,A0,STI,27,GS2,STI,28,A0,STI,27
  .byte GS2,STI,28,A0,STI,27,AS2,STI,28,A0,STI,27,AS2,STI,28
  .byte A0,STI,27,AS2,STI,28,A0,STI,27,AS2,STI,28,A0,STI,27
  .byte AS2,STI,28,A0,STI,27,AS2,STI,28,A0,STI,27,AS2,STI,28
  .byte A0,STI,27,AS2,STI,28,A0,STI,27,B2,STI,28,A0,STI,27
  .byte B2,STI,28,A0,STI,27,B2,STI,28,A0,STI,27,B2,STI,28,A0,STI,27
  .byte B2,STI,28,A0,STI,27,B2,STI,28,A0,STI,27,B2,STI,28,A0,STI,27
  .byte B2,STI,28,A0,STI,27,C3,STI,28,A0,STI,27,C3,STI,28,A0,STI,27
  .byte C3,STI,28,A0,STI,27,C3,STI,28,A0,STI,27,C3,STI,28,A0,STI,27
  .byte C3,STI,28,A0,STI,27,C3,STI,28,A0,STI,27,C3,STI,28,A0
  .byte RET

_robot_adv_triangle_3:
  .byte STI,27,SL1,GS2,STI,28,A0,STI,27,GS2,STI,28,A0,STI,27
  .byte GS2,STI,28,A0,STI,27,GS2,STI,28,A0,STI,27,GS2,STI,28
  .byte A0,STI,27,GS2,STI,28,A0,STI,27,GS2,STI,28,A0,STI,27
  .byte GS2,STI,28,A0,STI,27,AS2,STI,28,A0,STI,27,AS2,STI,28
  .byte A0,STI,27,AS2,STI,28,A0,STI,27,AS2,STI,28,A0,STI,27
  .byte AS2,STI,28,A0,STI,27,AS2,STI,28,A0,STI,27,AS2,STI,28
  .byte A0,STI,27,AS2,STI,28,A0,STI,27,B2,STI,28,A0,STI,27
  .byte B2,STI,28,A0,STI,27,B2,STI,28,A0,STI,27,B2,STI,28,A0,STI,27
  .byte B2,STI,28,A0,STI,27,B2,STI,28,A0,STI,27,B2,STI,28,A0,STI,27
  .byte B2,STI,28,A0,STI,27,C3,STI,28,A0,STI,27,C3,STI,28,A0,STI,27
  .byte C3,STI,28,A0,STI,27,C3,STI,28,A0,STI,27,C3,STI,28,A0,STI,27
  .byte C3,STI,28,A0,STI,27,C3,STI,28,A0,STI,27,C3,STI,28,A0
  .byte RET

_robot_adv_noise_0:
  .byte STI,15,SL1,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14
  .byte 15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15
  .byte 14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13
  .byte 15,14,15,13,15,14,15,13,15,14,15
  .byte RET

_robot_adv_noise_1:
  .byte STI,15,SL1,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14
  .byte 15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15
  .byte 14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13
  .byte 15,14,15,13,15,14,15,13,15,14,15
  .byte RET

_robot_adv_noise_2:
  .byte STI,15,SL1,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14
  .byte 15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15
  .byte 14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13
  .byte 15,14,15,13,15,14,15,13,15,14,15
  .byte RET

_robot_adv_noise_3:
  .byte STI,15,SL1,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14
  .byte 15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15
  .byte 14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13
  .byte 15,14,15,13,15,14,15,13,15,14,15
  .byte RET

_robot_adv_dpcm_0:
  .byte STI,15,SL1,C3,SL3,C3,SL2,CS3,SL1,C3,SL5,C3,SL2,CS3,C3,SL1
  .byte C3,SL3,C3,SL2,CS3,SL1,C3,SL3,C3,SL2,C3,CS3,SL1,CS3,CS3
  .byte C3,SL3,C3,SL2,CS3,SL1,C3,SL5,C3,SL2,CS3,C3,SL1,C3,SL3
  .byte C3,SL2,CS3,SL1,C3,SL3,C3,SL2,C3,SL1,CS3,CS3,CS3,CS3
  .byte RET

_k466:
  .byte 0
  .byte 7
  .byte 213
  .byte 5
  .word _k466_square1
  .word _k466_square2
  .word _k466_triangle
  .word 0
  .word 0

_k466_square1:
_k466_square1_loop:
  .byte CAL,<(_k466_square1_0),>(_k466_square1_0)
  .byte CAL,<(_k466_square1_1),>(_k466_square1_1)
  .byte CAL,<(_k466_square1_2),>(_k466_square1_2)
  .byte CAL,<(_k466_square1_3),>(_k466_square1_3)
  .byte CAL,<(_k466_square1_4),>(_k466_square1_4)
  .byte CAL,<(_k466_square1_5),>(_k466_square1_5)
  .byte CAL,<(_k466_square1_6),>(_k466_square1_6)
  .byte CAL,<(_k466_square1_7),>(_k466_square1_7)
  .byte GOT
  .word _k466_square1_loop

_k466_square2:
_k466_square2_loop:
  .byte CAL,<(_k466_square2_0),>(_k466_square2_0)
  .byte CAL,<(_k466_square2_1),>(_k466_square2_1)
  .byte CAL,<(_k466_square2_2),>(_k466_square2_2)
  .byte CAL,<(_k466_square2_3),>(_k466_square2_3)
  .byte CAL,<(_k466_square2_4),>(_k466_square2_4)
  .byte CAL,<(_k466_square2_5),>(_k466_square2_5)
  .byte CAL,<(_k466_square2_6),>(_k466_square2_6)
  .byte CAL,<(_k466_square2_7),>(_k466_square2_7)
  .byte GOT
  .word _k466_square2_loop

_k466_triangle:
_k466_triangle_loop:
  .byte CAL,<(_k466_triangle_0),>(_k466_triangle_0)
  .byte CAL,<(_k466_triangle_1),>(_k466_triangle_1)
  .byte CAL,<(_k466_triangle_2),>(_k466_triangle_2)
  .byte CAL,<(_k466_triangle_3),>(_k466_triangle_3)
  .byte CAL,<(_k466_triangle_3),>(_k466_triangle_3)
  .byte CAL,<(_k466_triangle_3),>(_k466_triangle_3)
  .byte CAL,<(_k466_triangle_3),>(_k466_triangle_3)
  .byte CAL,<(_k466_triangle_3),>(_k466_triangle_3)
  .byte GOT
  .word _k466_triangle_loop

_k466_square1_0:
  .byte STI,28,SL3,A0,STI,0,GS4,C5,GS4,F4,C4,CS4,GS3,AS3,G4,AS4
  .byte G4,E4,C4,CS4,AS3
  .byte RET

_k466_square1_1:
  .byte STI,0,SL3,C4,F4,GS4,F4,C4,GS3,F3,C3,CS4,E3,F3,C4,G3,AS3
  .byte GS3,G3
  .byte RET

_k466_square1_2:
  .byte STI,5,SLL,18,C4,STI,0,SL2,E4,F4,G4,F4,E4,SLE,F4,SL2,E4
  .byte F4,G4
  .byte RET

_k466_square1_3:
  .byte STI,0,SL2,F4,E4,SLE,F4,SL2,D4,DS4,F4,DS4,D4,SLE,C4,SL2
  .byte B3,C4,D4
  .byte RET

_k466_square1_4:
  .byte STI,0,SL2,C4,B3,SLE,C4,SL2,B3,C4,D4,SL3,G4,F4,F4,DS4,DS4
  .byte D4,D4,C4
  .byte RET

_k466_square1_5:
  .byte STI,0,SLL,18,B3,SL2,C4,B3,C4,SLL,18,D4,SL2,C4,B3,C4
  .byte RET

_k466_square1_6:
  .byte STI,0,SLL,18,D4,SL2,D4,DS4,F4,DS4,D4,SLE,C4,SL2,D4,DS4
  .byte F4
  .byte RET

_k466_square1_7:
  .byte STI,0,SL3,G3,F4,DS4,C4,F4,D4,C4,B3,SLL,24,C4
  .byte RET

_k466_square2_0:
  .byte STI,0,SLC,F2,F2,G2,G2
  .byte RET

_k466_square2_1:
  .byte STI,0,SLC,GS3,GS3,SL6,AS3,GS3,G3,C3
  .byte RET

_k466_square2_2:
  .byte STI,0,SL3,F2,F3,GS3,F3,CS3,AS2,G2,E3,GS2,F3,GS3,F3,CS3
  .byte AS2,G2,E3
  .byte RET

_k466_square2_3:
  .byte STI,0,SL3,GS2,F3,GS3,F3,D3,F3,G2,B2,C2,C3,DS3,C3,GS2,C3
  .byte D2,B2
  .byte RET

_k466_square2_4:
  .byte STI,0,SL3,DS2,C3,DS3,C3,GS2,C3,D2,B2,SL6,DS2,C3,F2,GS2
  .byte RET

_k466_square2_5:
  .byte STI,0,SL3,G2,F3,GS3,F3,D3,F3,GS2,F3,G2,F3,GS3,F3,D3,F3
  .byte GS2,F3
  .byte RET

_k466_square2_6:
  .byte STI,0,SL3,G2,F3,GS3,F3,D3,F3,G2,B2,C2,C3,DS3,C3,GS2,C3
  .byte F2,GS2
  .byte RET

_k466_square2_7:
  .byte STI,0,SLC,G1,G1,SLL,24,C1
  .byte RET

_k466_triangle_0:
  .byte STI,28,SLL,24,A0,STI,0,SLC,F3,E3
  .byte RET

_k466_triangle_1:
  .byte STI,0,SLC,F3,C3,SL6,CS3,C3,AS2,C3
  .byte RET

_k466_triangle_2:
  .byte STI,5,SLL,48,C4
  .byte RET

_k466_triangle_3:
  .byte STI,28,SLL,48,A0
  .byte RET

_k11:
  .byte 0
  .byte 5
  .byte 42
  .byte 4
  .word _k11_square1
  .word _k11_square2
  .word _k11_triangle
  .word _k11_noise
  .word 0

_k11_square1:
_k11_square1_loop:
  .byte CAL,<(_k11_square1_0),>(_k11_square1_0)
  .byte CAL,<(_k11_square1_1),>(_k11_square1_1)
  .byte CAL,<(_k11_square1_2),>(_k11_square1_2)
  .byte CAL,<(_k11_square1_3),>(_k11_square1_3)
  .byte CAL,<(_k11_square1_4),>(_k11_square1_4)
  .byte CAL,<(_k11_square1_5),>(_k11_square1_5)
  .byte CAL,<(_k11_square1_6),>(_k11_square1_6)
  .byte GOT
  .word _k11_square1_loop

_k11_square2:
_k11_square2_loop:
  .byte CAL,<(_k11_square2_0),>(_k11_square2_0)
  .byte CAL,<(_k11_square2_1),>(_k11_square2_1)
  .byte CAL,<(_k11_square2_2),>(_k11_square2_2)
  .byte CAL,<(_k11_square2_3),>(_k11_square2_3)
  .byte CAL,<(_k11_square2_4),>(_k11_square2_4)
  .byte CAL,<(_k11_square2_5),>(_k11_square2_5)
  .byte CAL,<(_k11_square2_6),>(_k11_square2_6)
  .byte GOT
  .word _k11_square2_loop

_k11_triangle:
_k11_triangle_loop:
  .byte CAL,<(_k11_triangle_0),>(_k11_triangle_0)
  .byte CAL,<(_k11_triangle_1),>(_k11_triangle_1)
  .byte CAL,<(_k11_triangle_2),>(_k11_triangle_2)
  .byte CAL,<(_k11_triangle_3),>(_k11_triangle_3)
  .byte CAL,<(_k11_triangle_4),>(_k11_triangle_4)
  .byte CAL,<(_k11_triangle_5),>(_k11_triangle_5)
  .byte CAL,<(_k11_triangle_6),>(_k11_triangle_6)
  .byte GOT
  .word _k11_triangle_loop

_k11_noise:
_k11_noise_loop:
  .byte CAL,<(_k11_noise_0),>(_k11_noise_0)
  .byte CAL,<(_k11_noise_0),>(_k11_noise_0)
  .byte CAL,<(_k11_noise_0),>(_k11_noise_0)
  .byte CAL,<(_k11_noise_0),>(_k11_noise_0)
  .byte CAL,<(_k11_noise_0),>(_k11_noise_0)
  .byte CAL,<(_k11_noise_0),>(_k11_noise_0)
  .byte CAL,<(_k11_noise_0),>(_k11_noise_0)
  .byte GOT
  .word _k11_noise_loop

_k11_square1_0:
  .byte STI,1,SL8,G3,SL1,C4,B3,C4,B3,C4,B3,A3,B3,SLC,C4,SL4,D4
  .byte DS4,F4,G4,C4,B3,A3,G3,F3
  .byte RET

_k11_square1_1:
  .byte STI,1,SL4,DS3,F3,G3,C3,B2,A2,G2,D4,DS4,F4,G4,C4,B3,A3,G3
  .byte D4
  .byte RET

_k11_square1_2:
  .byte STI,4,SL4,DS4,G3,D4,G3,C4,SL2,B3,A3,B3,G3,B3,D4,SL4,DS4
  .byte G3,D4,G3,C4,SL2,B3,A3,B3,G3,B3,D4
  .byte RET

_k11_square1_3:
  .byte STI,4,SL4,F4,G3,DS4,G3,D4,SL2,C4,B3,C4,G3,C4,DS4,SL4,F4
  .byte G3,DS4,G3,D4,SL2,C4,B3,C4,G3,C4,DS4
  .byte RET

_k11_square1_4:
  .byte STI,1,SL2,DS4,D4,C4,AS3,C4,AS3,A3,G3,A3,G3,FS3,E3,FS3
  .byte D3,E3,FS3,G3,D3,G3,AS3,SL4,D4,C4,SL1,C4,AS3,C4,AS3,C4,AS3
  .byte A3,G3,AS3,A3,AS3,A3,AS3,A3,G3,FS3
  .byte RET

_k11_square1_5:
  .byte STI,1,SL2,G3,D3,G3,AS3,SL4,D4,C4,SL1,C4,AS3,C4,AS3,C4,AS3
  .byte A3,G3,AS3,A3,AS3,A3,AS3,A3,G3,FS3,SL2,D4,G3,AS3,D4,SL4
  .byte G4,C4,SL1,C4,AS3,C4,AS3,C4,AS3,A3,G3,AS3,A3,AS3,A3,AS3
  .byte A3,G3,FS3
  .byte RET

_k11_square1_6:
  .byte STI,1,SL2,G3,G4,F4,DS4,D4,C4,B3,A3,G3,G3,F3,DS3,D3,C3,B2
  .byte A2,SL8,G2,D4,SL0,G4
  .byte RET

_k11_square2_0:
  .byte STI,1,SL8,C3,D3,SL4,DS3,D3,C3,B2,C3,D3,DS3,F3,G3,A2,B2
  .byte G2
  .byte RET

_k11_square2_1:
  .byte STI,1,SL4,C2,D2,DS2,F2,SL8,G2,SL4,G1,B2,C3,D3,DS3,F3,SL0
  .byte G3
  .byte RET

_k11_square2_2:
  .byte STI,4,SL8,G4,F4,DS4,D4,G4,F4,DS4,D4
  .byte RET

_k11_square2_3:
  .byte STI,4,SL8,GS4,G4,F4,DS4,GS4,G4,F4,DS4
  .byte RET

_k11_square2_4:
  .byte STI,1,SL4,C5,AS4,A4,G4,FS4,E4,D4,C4,SLC,AS3,SL4,DS3,SL8
  .byte D3,C3
  .byte RET

_k11_square2_5:
  .byte STI,1,SLC,AS2,SL4,DS3,SL8,D3,C3,SLC,AS2,SL4,C2,SL8,D2,D1
  .byte RET

_k11_square2_6:
  .byte STI,1,SLL,34,G1,SL2,D2,E2,FS2,G2,B1,C2,D2,SL0,G1
  .byte RET

_k11_triangle_0:
  .byte STI,2,SL8,C3,D3,SL4,DS3,D3,C3,B2,C3,D3,DS3,F3,G3,A2,B2
  .byte G2
  .byte RET

_k11_triangle_1:
  .byte STI,2,SL4,C2,D2,DS2,F2,SL8,G2,SL4,G1,B2,C3,D3,DS3,F3,SL0
  .byte G3
  .byte RET

_k11_triangle_2:
  .byte STI,2,SL4,DS4,G3,D4,G3,C4,SL2,B3,A3,B3,G3,B3,D4,SL4,DS4
  .byte G3,D4,G3,C4,SL2,B3,A3,B3,G3,B3,D4
  .byte RET

_k11_triangle_3:
  .byte STI,2,SL4,F4,G3,DS4,G3,D4,SL2,C4,B3,C4,G3,C4,DS4,SL4,F4
  .byte G3,DS4,G3,D4,SL2,C4,B3,C4,G3,C4,DS4
  .byte RET

_k11_triangle_4:
  .byte STI,2,SL2,DS4,D4,C4,AS3,C4,AS3,A3,G3,A3,G3,FS3,E3,FS3
  .byte D3,E3,FS3,G3,D3,G3,AS3,SL4,D4,C4,SL1,C4,AS3,C4,AS3,C4,AS3
  .byte A3,G3,AS3,A3,AS3,A3,AS3,A3,G3,FS3
  .byte RET

_k11_triangle_5:
  .byte STI,1,SLC,AS2,SL4,DS3,SL8,D3,C3,SLC,AS2,SL4,C2,SL8,D2,D1
  .byte RET

_k11_triangle_6:
  .byte STI,1,SLL,34,G1,SL2,D2,E2,FS2,G2,B1,C2,D2,SL0,G1
  .byte RET

_k11_noise_0:
  .byte STI,3,SL8,3,3,SL4,3,0,3,0,3,0,3,0,3,0,3,0
  .byte RET

_soler42:
  .byte 0
  .byte 3
  .byte 128
  .byte 2
  .word _soler42_square1
  .word _soler42_square2
  .word _soler42_triangle
  .word _soler42_noise
  .word 0

_soler42_square1:
_soler42_square1_loop:
  .byte CAL,<(_soler42_square1_0),>(_soler42_square1_0)
  .byte CAL,<(_soler42_square1_1),>(_soler42_square1_1)
  .byte CAL,<(_soler42_square1_2),>(_soler42_square1_2)
  .byte CAL,<(_soler42_square1_3),>(_soler42_square1_3)
  .byte CAL,<(_soler42_square1_4),>(_soler42_square1_4)
  .byte CAL,<(_soler42_square1_5),>(_soler42_square1_5)
  .byte CAL,<(_soler42_square1_6),>(_soler42_square1_6)
  .byte CAL,<(_soler42_square1_7),>(_soler42_square1_7)
  .byte CAL,<(_soler42_square1_8),>(_soler42_square1_8)
  .byte CAL,<(_soler42_square1_9),>(_soler42_square1_9)
  .byte CAL,<(_soler42_square1_10),>(_soler42_square1_10)
  .byte CAL,<(_soler42_square1_11),>(_soler42_square1_11)
  .byte CAL,<(_soler42_square1_12),>(_soler42_square1_12)
  .byte CAL,<(_soler42_square1_13),>(_soler42_square1_13)
  .byte GOT
  .word _soler42_square1_loop

_soler42_square2:
_soler42_square2_loop:
  .byte CAL,<(_soler42_square2_0),>(_soler42_square2_0)
  .byte CAL,<(_soler42_square2_1),>(_soler42_square2_1)
  .byte CAL,<(_soler42_square2_2),>(_soler42_square2_2)
  .byte CAL,<(_soler42_square2_3),>(_soler42_square2_3)
  .byte CAL,<(_soler42_square2_4),>(_soler42_square2_4)
  .byte CAL,<(_soler42_square2_5),>(_soler42_square2_5)
  .byte CAL,<(_soler42_square2_6),>(_soler42_square2_6)
  .byte CAL,<(_soler42_square2_7),>(_soler42_square2_7)
  .byte CAL,<(_soler42_square2_8),>(_soler42_square2_8)
  .byte CAL,<(_soler42_square2_9),>(_soler42_square2_9)
  .byte CAL,<(_soler42_square2_10),>(_soler42_square2_10)
  .byte CAL,<(_soler42_square2_11),>(_soler42_square2_11)
  .byte CAL,<(_soler42_square2_12),>(_soler42_square2_12)
  .byte CAL,<(_soler42_square2_13),>(_soler42_square2_13)
  .byte GOT
  .word _soler42_square2_loop

_soler42_triangle:
_soler42_triangle_loop:
  .byte CAL,<(_soler42_triangle_0),>(_soler42_triangle_0)
  .byte CAL,<(_soler42_triangle_1),>(_soler42_triangle_1)
  .byte CAL,<(_soler42_triangle_2),>(_soler42_triangle_2)
  .byte CAL,<(_soler42_triangle_3),>(_soler42_triangle_3)
  .byte CAL,<(_soler42_triangle_4),>(_soler42_triangle_4)
  .byte CAL,<(_soler42_triangle_5),>(_soler42_triangle_5)
  .byte CAL,<(_soler42_triangle_6),>(_soler42_triangle_6)
  .byte CAL,<(_soler42_triangle_7),>(_soler42_triangle_7)
  .byte CAL,<(_soler42_triangle_8),>(_soler42_triangle_8)
  .byte CAL,<(_soler42_triangle_9),>(_soler42_triangle_9)
  .byte CAL,<(_soler42_triangle_10),>(_soler42_triangle_10)
  .byte CAL,<(_soler42_triangle_11),>(_soler42_triangle_11)
  .byte CAL,<(_soler42_triangle_12),>(_soler42_triangle_12)
  .byte CAL,<(_soler42_triangle_13),>(_soler42_triangle_13)
  .byte GOT
  .word _soler42_triangle_loop

_soler42_noise:
_soler42_noise_loop:
  .byte CAL,<(_soler42_noise_0),>(_soler42_noise_0)
  .byte CAL,<(_soler42_noise_0),>(_soler42_noise_0)
  .byte CAL,<(_soler42_noise_0),>(_soler42_noise_0)
  .byte CAL,<(_soler42_noise_0),>(_soler42_noise_0)
  .byte CAL,<(_soler42_noise_0),>(_soler42_noise_0)
  .byte CAL,<(_soler42_noise_0),>(_soler42_noise_0)
  .byte CAL,<(_soler42_noise_0),>(_soler42_noise_0)
  .byte CAL,<(_soler42_noise_0),>(_soler42_noise_0)
  .byte CAL,<(_soler42_noise_0),>(_soler42_noise_0)
  .byte CAL,<(_soler42_noise_0),>(_soler42_noise_0)
  .byte CAL,<(_soler42_noise_0),>(_soler42_noise_0)
  .byte CAL,<(_soler42_noise_0),>(_soler42_noise_0)
  .byte CAL,<(_soler42_noise_0),>(_soler42_noise_0)
  .byte CAL,<(_soler42_noise_1),>(_soler42_noise_1)
  .byte GOT
  .word _soler42_noise_loop

_soler42_square1_0:
  .byte STI,7,SL4,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2
  .byte FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .byte RET

_soler42_square1_1:
  .byte STI,7,SL4,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2
  .byte A1,AS1,AS2,C2,D2,D3,FS3,D3,C3,A2
  .byte RET

_soler42_square1_2:
  .byte STI,7,SL4,AS2,D3,G2,FS2,D3,D2,G1,G2,FS1,G1,G2,FS1,G1,G2
  .byte FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .byte RET

_soler42_square1_3:
  .byte STI,7,SL4,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2
  .byte A1,AS1,AS2,C2,D2,D3,FS3,D3,C3,A2
  .byte RET

_soler42_square1_4:
  .byte STI,7,SL2,A2,STI,12,A2,STI,7,A3,STI,12,A3,STI,7,C4,STI,12
  .byte C4,STI,7,A3,STI,12,A3,STI,7,FS3,STI,12,FS3,STI,7,D3,STI,12
  .byte D3,STI,7,G2,STI,12,G2,STI,7,G3,STI,12,G3,STI,7,AS3,STI,12
  .byte AS3,STI,7,G3,STI,12,G3,STI,7,E3,STI,12,E3,STI,7,C3,STI,12
  .byte C3,STI,7,F2,STI,12,F2,STI,7,F3,STI,12,F3,STI,7,A3,STI,12
  .byte A3,STI,7,F3,STI,12,F3,STI,7,D3,STI,12,D3,STI,7,AS2,STI,12
  .byte AS2,STI,7,E2,STI,12,E2,STI,7,E3,STI,12,E3,STI,7,G3,STI,12
  .byte G3,STI,7,E3,STI,12,E3,STI,7,CS3,STI,12,CS3,STI,7,A2,STI,12
  .byte A2
  .byte RET

_soler42_square1_5:
  .byte STI,7,SL4,D2,D3,F3,C2,C3,E3,AS1,AS2,D3,A1,A2,C3,G1,G2,AS2
  .byte F1,F2,A2,E1,E2,G2,D1,D2,F2
  .byte RET

_soler42_square1_6:
  .byte STI,7,SL4,A0,CS1,E1,A1,CS2,E2,A1,CS2,E2,A2,CS3,E3,A1,A2
  .byte B1,CS2,A2,D2,E2,A2,F2,G2,A2,F2
  .byte RET

_soler42_square1_7:
  .byte STI,7,SL4,E2,A2,D2,CS2,A2,D2,A1,A2,B1,CS2,A2,D2,E2,A2,F2
  .byte G2,A2,F2,E2,A2,D2,CS2,A2,D2
  .byte RET

_soler42_square1_8:
  .byte STI,7,SL4,A1,A2,CS3,A2,E2,CS2,D2,D3,F3,A3,F3,D3,G1,G2,AS2
  .byte D3,AS2,G2,A1,A2,D3,A1,A2,CS3
  .byte RET

_soler42_square1_9:
  .byte STI,7,SL4,D1,D2,F2,A2,F2,D2,A1,A2,B1,CS2,A2,D2,E2,A2,F2
  .byte G2,A2,F2,E2,A2,D2,CS2,A2,D2
  .byte RET

_soler42_square1_10:
  .byte STI,7,SL4,A1,A2,B1,CS2,A2,D2,E2,A2,F2,G2,A2,F2,E2,A2,D2
  .byte CS2,A2,D2,A1,A2,CS3,A2,E2,CS2
  .byte RET

_soler42_square1_11:
  .byte STI,7,SL2,D1,STI,12,D1,STI,7,D2,STI,12,D2,STI,7,F2,STI,12
  .byte F2,STI,7,A2,STI,12,A2,STI,7,F2,STI,12,F2,STI,7,D2,STI,12
  .byte D2,STI,7,G1,STI,12,G1,STI,7,G2,STI,12,G2,STI,7,AS2,STI,12
  .byte AS2,STI,7,D3,STI,12,D3,STI,7,AS2,STI,12,AS2,STI,7,G2,STI,12
  .byte G2,STI,7,A1,STI,12,A1,STI,7,A2,STI,12,A2,STI,7,D3,STI,12
  .byte D3,STI,7,A1,STI,12,A1,STI,7,A2,STI,12,A2,STI,7,CS3,STI,12
  .byte CS3,STI,7,D2,STI,12,D2,STI,7,D3,STI,12,D3,STI,7,F3,STI,12
  .byte F3,STI,7,A3,STI,12,A3,STI,7,F3,STI,12,F3,STI,7,D3,STI,12
  .byte D3
  .byte RET

_soler42_square1_12:
  .byte STI,7,SL2,G1,STI,12,G1,STI,7,G2,STI,12,G2,STI,7,AS2,STI,12
  .byte AS2,STI,7,D3,STI,12,D3,STI,7,AS2,STI,12,AS2,STI,7,G2,STI,12
  .byte G2,STI,7,A1,STI,12,A1,STI,7,A2,STI,12,A2,STI,7,D3,STI,12
  .byte D3,STI,7,A1,STI,12,A1,STI,7,A2,STI,12,A2,STI,7,CS3,STI,12
  .byte CS3,STI,7,D2,STI,12,D2,STI,7,A2,STI,12,A2,STI,7,CS2,STI,12
  .byte CS2,STI,7,D2,STI,12,D2,STI,7,A2,STI,12,A2,STI,7,CS2,STI,12
  .byte CS2,STI,7,D2,STI,12,D2,STI,7,A2,STI,12,A2,STI,7,CS2,STI,12
  .byte CS2,STI,7,D2,STI,12,D2,STI,7,A2,STI,12,A2,STI,7,CS2,STI,12
  .byte CS2
  .byte RET

_soler42_square1_13:
  .byte STI,7,SL4,D2,A2,CS2,D2,A2,CS2,D2,A2,CS2,D2,A2,CS2,D2,E2
  .byte D2,C2,AS1,A1
  .byte RET

_soler42_square2_0:
  .byte STI,28,SL0,A0,STI,9,SL4,D3,SL2,D3,SL1,AS2,D3,SL0,G3,SL4
  .byte D3,SL2,D3,SL1,AS2,D3,SL0,G3,SL4,D3,SL2,D3,SL1,AS2,D3,SL8
  .byte G3,SL4,D3,SL8,D3,SL4,C3
  .byte RET

_soler42_square2_1:
  .byte STI,9,SL1,C3,AS2,C3,SL5,AS2,SL4,A2,SL1,A2,G2,A2,SL5,G2
  .byte SL4,A2,SL1,C3,AS2,C3,SL5,AS2,SL4,A2,SL1,A2,G2,A2,SL5,G2
  .byte SL4,A2,SL1,C3,AS2,C3,SL5,AS2,SL4,C3,SL1,DS3,D3,DS3,SL5
  .byte D3,SL4,E3,SL1,G3,FS3,G3,SL5,FS3,SL4,G3,A3,AS3,C4
  .byte RET

_soler42_square2_2:
  .byte STI,9,SL4,C4,SL8,AS3,SL1,AS3,A3,AS3,SL7,A3,SL1,G3,A3,SL0
  .byte G3,SL4,D3,SL2,D3,SL1,AS2,D3,SL0,G3,SL4,D3,SL2,D3,SL1,AS2
  .byte D3,SL8,G3,SL4,D3,SL8,D3,SL4,C3
  .byte RET

_soler42_square2_3:
  .byte STI,9,SL1,C3,AS2,C3,SL5,AS2,SL4,A2,SL1,A2,G2,A2,SL5,G2
  .byte SL4,A2,SL1,C3,AS2,C3,SL5,AS2,SL4,A2,SL1,A2,G2,A2,SL5,G2
  .byte SL4,A2,SL1,C3,AS2,C3,SL5,AS2,SL4,C3,SL1,DS3,D3,DS3,SL5
  .byte D3,SL4,E3,SL1,G3,FS3,G3,SL5,FS3,SL4,G3,SL8,A3,SL4,AS3
  .byte RET

_soler42_square2_4:
  .byte STI,9,SL1,A3,SLF,C4,SL1,AS3,SL3,D4,SL1,A3,SL3,C4,SL1,A3
  .byte SL7,C4,SL1,G3,SL7,AS3,SL1,A3,SL3,C4,SL1,G3,SL3,AS3,SL1
  .byte G3,SL7,AS3,SL1,F3,SL7,A3,SL1,G3,SL3,AS3,SL1,F3,SL3,A3,SL1
  .byte F3,SL7,A3,SL1,E3,SL7,G3,SL1,F3,SL3,A3,SL1,E3,SL3,G3
  .byte RET

_soler42_square2_5:
  .byte STI,9,SL1,G3,F3,G3,SL5,F3,SL4,A3,SL1,F3,E3,F3,SL5,E3,SL4
  .byte A3,SL1,E3,D3,E3,SL5,D3,SL4,A3,SL1,D3,C3,D3,SL5,C3,SL4
  .byte A3,SL1,C3,AS2,C3,SL5,AS2,SL4,A3,SL1,AS2,A2,AS2,SL5,A2,SL4
  .byte A3,SL1,A2,G2,A2,SL5,G2,SL4,A3,SL1,G2,F2,G2,SL5,F2,SL4
  .byte A3
  .byte RET

_soler42_square2_6:
  .byte STI,9,SL0,E2,SL1,CS3,SL3,E3,SL1,CS3,SL3,E3,SL1,A2,CS3
  .byte E3,SLD,A3,SL1,CS3,SL3,E3,SL1,CS3,SL3,E3,SL1,A2,CS3,E3,SLL,17
  .byte A3,SL4,A3,SL1,D3,CS3,D3,SL5,CS3,SL4,D3,SL8,E3,SL4,F3
  .byte RET

_soler42_square2_7:
  .byte STI,9,SL1,A3,G3,A3,SL5,G3,SL4,F3,SL8,E3,SL4,F3,SL1,G3,F3
  .byte G3,SL5,F3,SLC,E3,SL4,A3,SL1,D3,CS3,D3,SL5,CS3,SL4,D3,SL8
  .byte E3,SL4,F3,SL1,A3,G3,A3,SL5,G3,SL4,F3,SL8,E3,SL4,F3
  .byte RET

_soler42_square2_8:
  .byte STI,9,SL1,G3,F3,G3,SL5,F3,SL8,E3,SL4,A3,G3,SL8,G3,F3,SL4
  .byte D4,C4,SL8,C4,AS3,SL4,AS3,G3,SLC,F3,SL1,CS3,F3,E3,F3,SL8
  .byte E3
  .byte RET

_soler42_square2_9:
  .byte STI,9,SL8,E3,SL6,D3,SL2,A3,G3,F3,E3,D3,SL4,D3,SL0,CS3
  .byte SL4,A3,SL1,D3,CS3,D3,SL5,CS3,SL4,D3,SL8,E3,SL4,F3,SL1
  .byte A3,G3,A3,SL5,G3,SL4,F3,SL8,E3,SL4,F3
  .byte RET

_soler42_square2_10:
  .byte STI,9,SL1,G3,F3,G3,SL5,F3,SLC,E3,SL4,A3,SL1,D3,CS3,D3,SL5
  .byte CS3,SL4,D3,SL8,E3,SL4,F3,SL1,A3,G3,A3,SL5,G3,SL4,F3,SL8
  .byte E3,SL4,F3,SL1,G3,F3,G3,SL5,F3,SL8,E3,SL4,A3,G3
  .byte RET

_soler42_square2_11:
  .byte STI,9,SL8,G3,F3,SL4,D4,C4,SL8,C4,AS3,SL4,AS3,G3,SLC,F3
  .byte SL1,CS3,E3,F3,E3,F3,SL7,E3,SL8,E3,D3,SL4,D4,C4
  .byte RET

_soler42_square2_12:
  .byte STI,9,SL8,C4,AS3,SL4,AS3,G3,SLC,F3,SL1,CS3,E3,F3,E3,F3
  .byte SL7,E3,SL8,D2,SL4,E2,SL8,F2,SL4,E2,SL8,D2,SL4,E2,SL8,F2
  .byte SL4,E2
  .byte RET

_soler42_square2_13:
  .byte STI,9,SL8,D2,SL4,CS2,SL8,D2,SL4,CS2,SL8,D2,SL4,CS2,SL8
  .byte D2,SL4,CS2,D2,STI,11,SLL,20,F3
  .byte RET

_soler42_triangle_0:
  .byte STI,7,SL4,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2
  .byte FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .byte RET

_soler42_triangle_1:
  .byte STI,7,SL4,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2
  .byte A1,AS1,AS2,C2,D2,D3,FS3,D3,C3,A2
  .byte RET

_soler42_triangle_2:
  .byte STI,7,SL4,AS2,D3,G2,FS2,D3,D2,G1,G2,FS1,G1,G2,FS1,G1,G2
  .byte FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .byte RET

_soler42_triangle_3:
  .byte STI,7,SL4,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2
  .byte A1,AS1,AS2,C2,D2,D3,FS3,D3,C3,A2
  .byte RET

_soler42_triangle_4:
  .byte STI,7,SL4,A2,A3,C4,A3,FS3,D3,G2,G3,AS3,G3,E3,C3,F2,F3,A3
  .byte F3,D3,AS2,E2,E3,G3,E3,CS3,A2
  .byte RET

_soler42_triangle_5:
  .byte STI,7,SL4,D2,D3,F3,C2,C3,E3,AS1,AS2,D3,A1,A2,C3,G1,G2,AS2
  .byte F1,F2,A2,E1,E2,G2,D1,D2,F2
  .byte RET

_soler42_triangle_6:
  .byte STI,7,SL4,A0,CS1,E1,A1,CS2,E2,A1,CS2,E2,A2,CS3,E3,A1,A2
  .byte B1,CS2,A2,D2,E2,A2,F2,G2,A2,F2
  .byte RET

_soler42_triangle_7:
  .byte STI,9,SL4,E2,A2,D2,CS2,A2,D2,A1,A2,B1,CS2,A2,D2,E2,A2,F2
  .byte G2,A2,F2,E2,A2,D2,CS2,A2,D2
  .byte RET

_soler42_triangle_8:
  .byte STI,7,SL4,A1,A2,CS3,A2,E2,CS2,D2,D3,F3,A3,F3,D3,G1,G2,AS2
  .byte D3,AS2,G2,A1,A2,D3,A1,A2,CS3
  .byte RET

_soler42_triangle_9:
  .byte STI,7,SL4,D1,D2,F2,A2,F2,D2,A1,A2,B1,CS2,A2,D2,E2,A2,F2
  .byte G2,A2,F2,E2,A2,D2,CS2,A2,D2
  .byte RET

_soler42_triangle_10:
  .byte STI,7,SL4,A1,A2,B1,CS2,A2,D2,E2,A2,F2,G2,A2,F2,E2,A2,D2
  .byte CS2,A2,D2,A1,A2,CS3,A2,E2,CS2
  .byte RET

_soler42_triangle_11:
  .byte STI,7,SL4,D1,D2,F2,A2,F2,D2,G1,G2,AS2,D3,AS2,G2,A1,A2,D3
  .byte A1,A2,CS3,D2,D3,F3,A3,F3,D3
  .byte RET

_soler42_triangle_12:
  .byte STI,7,SL4,G1,G2,AS2,D3,AS2,G2,A1,A2,D3,A1,A2,CS3,D2,A2
  .byte CS2,D2,A2,CS2,D2,A2,CS2,D2,A2,CS2
  .byte RET

_soler42_triangle_13:
  .byte STI,7,SL4,D2,A2,CS2,D2,A2,CS2,D2,A2,CS2,D2,A2,CS2,D2,E2
  .byte D2,C2,AS1,A1
  .byte RET

_soler42_noise_0:
  .byte STI,10,SL4,0,0,5,0,0,5,0,0,5,0,0,5,0,0,5,0,0,5,0,0,5,0,0
  .byte 5
  .byte RET

_soler42_noise_1:
  .byte STI,10,SL4,0,0,5,0,0,5,0,0,5,0,0,5,0,0,5,0,0,5
  .byte RET

_antagonist:
  .byte 0
  .byte 5
  .byte 42
  .byte 4
  .word _antagonist_square1
  .word _antagonist_square2
  .word _antagonist_triangle
  .word 0
  .word 0

_antagonist_square1:
_antagonist_square1_loop:
  .byte CAL,<(_antagonist_square1_0),>(_antagonist_square1_0)
  .byte CAL,<(_antagonist_square1_0),>(_antagonist_square1_0)
  .byte CAL,<(_antagonist_square1_1),>(_antagonist_square1_1)
  .byte CAL,<(_antagonist_square1_1),>(_antagonist_square1_1)
  .byte CAL,<(_antagonist_square1_2),>(_antagonist_square1_2)
  .byte CAL,<(_antagonist_square1_2),>(_antagonist_square1_2)
  .byte CAL,<(_antagonist_square1_3),>(_antagonist_square1_3)
  .byte GOT
  .word _antagonist_square1_loop

_antagonist_square2:
_antagonist_square2_loop:
  .byte CAL,<(_antagonist_square2_0),>(_antagonist_square2_0)
  .byte CAL,<(_antagonist_square2_1),>(_antagonist_square2_1)
  .byte CAL,<(_antagonist_square2_2),>(_antagonist_square2_2)
  .byte CAL,<(_antagonist_square2_2),>(_antagonist_square2_2)
  .byte CAL,<(_antagonist_square2_3),>(_antagonist_square2_3)
  .byte CAL,<(_antagonist_square2_3),>(_antagonist_square2_3)
  .byte CAL,<(_antagonist_square2_4),>(_antagonist_square2_4)
  .byte GOT
  .word _antagonist_square2_loop

_antagonist_triangle:
_antagonist_triangle_loop:
  .byte CAL,<(_antagonist_triangle_0),>(_antagonist_triangle_0)
  .byte CAL,<(_antagonist_triangle_1),>(_antagonist_triangle_1)
  .byte CAL,<(_antagonist_triangle_1),>(_antagonist_triangle_1)
  .byte CAL,<(_antagonist_triangle_1),>(_antagonist_triangle_1)
  .byte CAL,<(_antagonist_triangle_3),>(_antagonist_triangle_3)
  .byte CAL,<(_antagonist_triangle_3),>(_antagonist_triangle_3)
  .byte CAL,<(_antagonist_triangle_4),>(_antagonist_triangle_4)
  .byte GOT
  .word _antagonist_triangle_loop

_antagonist_square1_0:
  .byte STI,13,SL4,C2,C3,B2,C3,G2,C3,D3,DS3,FS2,D3,C3,D3,F2,B2
  .byte A2,B2
  .byte RET

_antagonist_square1_1:
  .byte STI,13,SL4,C3,C4,B3,C4,G3,C4,D4,DS4,FS3,D4,C4,D4,F3,B3
  .byte A3,B3
  .byte RET

_antagonist_square1_2:
  .byte STI,13,SL2,C4,B3,C4,DS4,SLL,24,G4,SL2,D4,C4,D4,F4,SLL,24
  .byte B4
  .byte RET

_antagonist_square1_3:
  .byte STI,13,SL2,GS4,G4,GS4,C5,SL0,DS5,SL8,F5,SL2,D5,DS5,D5,C5
  .byte SLL,24,B4
  .byte RET

_antagonist_square2_0:
  .byte STI,14,SLL,64,C2
  .byte RET

_antagonist_square2_1:
  .byte STI,28,SLL,64,A0
  .byte RET

_antagonist_square2_2:
  .byte STI,13,SL2,C2,D2,DS2,G2,SLL,24,C3,SL2,FS2,G2,A2,C3,SL8
  .byte A3,GS3,G3
  .byte RET

_antagonist_square2_3:
  .byte STI,28,SL8,A0,STI,13,SL2,G2,FS2,G2,C3,SL8,DS3,F3,SL0,D3
  .byte SL2,G2,FS2,G2,B2,SL8,G3
  .byte RET

_antagonist_square2_4:
  .byte STI,13,SL8,GS2,SL2,C3,AS2,C3,DS3,SL0,GS3,SL2,F3,G3,F3,DS3
  .byte SLL,24,D3
  .byte RET

_antagonist_triangle_0:
  .byte STI,14,SLL,64,C2
  .byte RET

_antagonist_triangle_1:
  .byte STI,13,SL0,C2,DS2,D2,G2
  .byte RET

_antagonist_triangle_3:
  .byte STI,13,SLL,32,C2,G2
  .byte RET

_antagonist_triangle_4:
  .byte STI,13,SLL,24,GS2,SL8,F2,SLL,24,G2,SL8,G1
  .byte RET

_arps:
  .byte 0
  .byte 3
  .byte 128
  .byte 2
  .word _arps_square1
  .word _arps_square2
  .word _arps_triangle
  .word 0
  .word 0

_arps_square1:
_arps_square1_loop:
  .byte CAL,<(_arps_square1_0),>(_arps_square1_0)
  .byte CAL,<(_arps_square1_1),>(_arps_square1_1)
  .byte GOT
  .word _arps_square1_loop

_arps_square2:
_arps_square2_loop:
  .byte CAL,<(_arps_square2_0),>(_arps_square2_0)
  .byte CAL,<(_arps_square2_1),>(_arps_square2_1)
  .byte GOT
  .word _arps_square2_loop

_arps_triangle:
_arps_triangle_loop:
  .byte CAL,<(_arps_triangle_0),>(_arps_triangle_0)
  .byte CAL,<(_arps_triangle_1),>(_arps_triangle_1)
  .byte GOT
  .word _arps_triangle_loop

_arps_square1_0:
  .byte STI,18,SL0,A2,D3,STI,20,G2,C3
  .byte RET

_arps_square1_1:
  .byte STI,20,SL0,F2,STI,21,B2,STI,20,E2,STI,18,A2
  .byte RET

_arps_square2_0:
  .byte STI,16,SL2,A3,G3,F3,E3,G3,F3,E3,G3,SL0,F3,SL2,G3,F3,E3
  .byte D3,F3,E3,D3,F3,SL0,E3
  .byte RET

_arps_square2_1:
  .byte STI,16,SL2,F3,E3,D3,C3,D3,C3,B2,A2,SL0,GS2,SL2,B2,A2,GS2
  .byte FS2,GS2,E2,FS2,GS2,SL0,A2
  .byte RET

_arps_triangle_0:
  .byte STI,17,SL8,A2,C3,D3,A2,G2,B2,C3,G2
  .byte RET

_arps_triangle_1:
  .byte STI,17,SL8,F2,A2,B2,F2,E2,GS2,A2,E2
  .byte RET

_noise_arps:
  .byte 0
  .byte 5
  .byte 42
  .byte 4
  .word 0
  .word 0
  .word 0
  .word _noise_arps_noise
  .word 0

_noise_arps_noise:
_noise_arps_noise_loop:
  .byte CAL,<(_noise_arps_noise_0),>(_noise_arps_noise_0)
  .byte GOT
  .word _noise_arps_noise_loop

_noise_arps_noise_0:
  .byte STI,24,SL2,12,STI,25,13,STI,24,11,10,STI,26,SL4,9,STI,24
  .byte SL2,11,10,12,STI,25,13,STI,24,11,10,STI,26,SL4,9,STI,24
  .byte SL2,11,10,12,STI,25,13,STI,24,11,10,STI,26,SL4,9,STI,24
  .byte SL2,11,10,12,STI,25,13,STI,24,11,10,STI,26,SL4,9,STI,24
  .byte SL2,11,10
  .byte RET

_sfx_shot:
  .byte 0, 1
  .byte 0, 1
  .word 0
  .word 0
  .word 0
  .word _sfx_shot_noise
  .word 0

_sfx_shot_noise:
  .byte CAL,<(_sfx_shot_noise_0),>(_sfx_shot_noise_0)
  .byte TRM
_sfx_shot_noise_0:
  .byte SLL,32,STI,6,8
  .byte RET

_sfx_laser:
  .byte 0, 1
  .byte 0, 1
  .word _sfx_laser_square1
  .word 0
  .word 0
  .word 0
  .word 0

_sfx_laser_square1:
  .byte CAL,<(_sfx_laser_square1_0),>(_sfx_laser_square1_0)
  .byte TRM
_sfx_laser_square1_0:
  .byte SLL,16,STI,8,B7
  .byte RET

_sfx_dpcm:
  .byte 0, 1
  .byte 0, 1
  .word 0
  .word 0
  .word 0
  .word 0
  .word _sfx_dpcm_dpcm

_sfx_dpcm_dpcm:
  .byte CAL,<(_sfx_dpcm_dpcm_0),>(_sfx_dpcm_dpcm_0)
  .byte TRM
_sfx_dpcm_dpcm_0:
  .byte SLL,8,STI,15,D3
  .byte RET

_sfx_zap:
  .byte 0, 1
  .byte 0, 1
  .word 0
  .word 0
  .word 0
  .word _sfx_zap_noise
  .word 0

_sfx_zap_noise:
  .byte CAL,<(_sfx_zap_noise_0),>(_sfx_zap_noise_0)
  .byte TRM
_sfx_zap_noise_0:
  .byte SLL,16,STI,22,4
  .byte RET

_sfx_collide:
  .byte 0, 1
  .byte 0, 1
  .word 0
  .word 0
  .word 0
  .word _sfx_collide_noise
  .word 0

_sfx_collide_noise:
  .byte CAL,<(_sfx_collide_noise_0),>(_sfx_collide_noise_0)
  .byte TRM
_sfx_collide_noise_0:
  .byte SLL,16,STI,23,0
  .byte RET

