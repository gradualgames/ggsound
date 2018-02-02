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
  .dw _robot_adv
  .dw _k466
  .dw _k11
  .dw _soler42
  .dw _antagonist
  .dw _arps
  .dw _noise_arps

sfx_list:
  .dw _sfx_shot
  .dw _sfx_laser
  .dw _sfx_dpcm
  .dw _sfx_zap
  .dw _sfx_collide

instrument_list:
  .dw Piano_0
  .dw Instrument1_1
  .dw Instrument2_2
  .dw Instrument3_3
  .dw Instrument4_4
  .dw Note_cut_5
  .dw Shot_6
  .dw Instrument5_7
  .dw Laser_8
  .dw Instrument6_9
  .dw Instrument7_10
  .dw Instrument8_11
  .dw Instrument9_12
  .dw Sing_13
  .dw Note_Cut_14
  .dw dpcm_15
  .dw Sing_16
  .dw Triangle_On_17
  .dw SingMinArp_18
  .dw Guitar_19
  .dw SingMajArp_20
  .dw SingDimArp_21
  .dw Zap_22
  .dw Collide_23
  .dw Drum1_24
  .dw Drum2_25
  .dw Drum3_26
  .dw Triangle_On_27
  .dw silent_28

dpcm_list:
  .dw dpcm_samples_list
  .dw dpcm_note_to_sample_index
  .dw dpcm_note_to_sample_length
  .dw dpcm_note_to_loop_pitch_index

Piano_0:
  .db 5,19,21,23,ARP_TYPE_ABSOLUTE
  .db 12,10,6,4,3,4,5,8,10,8,5,3,3,ENV_STOP
  .db 0,ENV_STOP
  .db 128,DUTY_ENV_STOP
  .db ENV_STOP

Instrument1_1:
  .db 5,24,26,28,ARP_TYPE_ABSOLUTE
  .db 11,8,7,8,10,8,5,3,1,1,2,4,5,5,3,2,1,1,ENV_STOP
  .db 0,ENV_STOP
  .db 64,DUTY_ENV_STOP
  .db ENV_STOP

Instrument2_2:
  .db 5,13,15,17,ARP_TYPE_ABSOLUTE
  .db 10,10,10,10,10,10,0,ENV_STOP
  .db 0,ENV_STOP
  .db 64,DUTY_ENV_STOP
  .db ENV_STOP

Instrument3_3:
  .db 5,11,13,15,ARP_TYPE_ABSOLUTE
  .db 12,5,3,1,0,ENV_STOP
  .db 0,ENV_STOP
  .db 0,DUTY_ENV_STOP
  .db ENV_STOP

Instrument4_4:
  .db 5,24,26,28,ARP_TYPE_ABSOLUTE
  .db 11,8,7,8,10,8,5,3,1,1,2,4,5,5,3,2,1,1,ENV_STOP
  .db 0,ENV_STOP
  .db 128,DUTY_ENV_STOP
  .db ENV_STOP

Note_cut_5:
  .db 5,7,9,11,ARP_TYPE_ABSOLUTE
  .db 0,ENV_STOP
  .db 0,ENV_STOP
  .db 0,DUTY_ENV_STOP
  .db ENV_STOP

Shot_6:
  .db 5,38,40,42,ARP_TYPE_ABSOLUTE
  .db 15,6,10,11,11,10,9,8,7,6,5,4,3,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,ENV_STOP
  .db 0,ENV_STOP
  .db 0,DUTY_ENV_STOP
  .db ENV_STOP

Instrument5_7:
  .db 5,14,16,18,ARP_TYPE_ABSOLUTE
  .db 14,14,14,11,4,2,2,2,ENV_STOP
  .db 0,ENV_STOP
  .db 0,DUTY_ENV_STOP
  .db ENV_STOP

Laser_8:
  .db 5,22,37,39,ARP_TYPE_ABSOLUTE
  .db 14,13,12,11,10,9,8,8,7,6,5,4,3,2,1,0,ENV_STOP
  .db 10,10,10,10,10,10,10,10,10,10,10,10,10,10,ENV_STOP
  .db 0,DUTY_ENV_STOP
  .db ENV_STOP

Instrument6_9:
  .db 5,14,16,19,ARP_TYPE_ABSOLUTE
  .db 6,9,11,11,7,6,5,5,ENV_STOP
  .db 0,ENV_STOP
  .db 128,0,DUTY_ENV_STOP
  .db ENV_STOP

Instrument7_10:
  .db 5,12,14,16,ARP_TYPE_ABSOLUTE
  .db 15,2,0,0,0,0,ENV_STOP
  .db 0,ENV_STOP
  .db 0,DUTY_ENV_STOP
  .db ENV_STOP

Instrument8_11:
  .db 5,7,9,11,ARP_TYPE_ABSOLUTE
  .db 0,ENV_STOP
  .db 0,ENV_STOP
  .db 0,DUTY_ENV_STOP
  .db ENV_STOP

Instrument9_12:
  .db 5,14,16,18,ARP_TYPE_ABSOLUTE
  .db 9,9,9,6,2,1,1,1,ENV_STOP
  .db 0,ENV_STOP
  .db 0,DUTY_ENV_STOP
  .db ENV_STOP

Sing_13:
  .db 5,27,48,50,ARP_TYPE_ABSOLUTE
  .db 3,4,4,5,5,5,5,5,5,5,5,4,4,4,4,4,4,4,3,3,3,ENV_STOP
  .db 0,0,0,0,0,0,0,0,0,-1,-1,1,1,1,1,-1,-1,-1,-1,ENV_LOOP,38
  .db 192,DUTY_ENV_STOP
  .db ENV_STOP

Note_Cut_14:
  .db 5,7,9,11,ARP_TYPE_ABSOLUTE
  .db 0,ENV_STOP
  .db 0,ENV_STOP
  .db 0,DUTY_ENV_STOP
  .db ENV_STOP

dpcm_15:
  .db 5,14,16,18,ARP_TYPE_ABSOLUTE
  .db 8,4,3,2,2,1,1,0,ENV_STOP
  .db 0,ENV_STOP
  .db 0,DUTY_ENV_STOP
  .db ENV_STOP

Sing_16:
  .db 5,27,48,50,ARP_TYPE_ABSOLUTE
  .db 3,4,4,5,5,5,5,5,5,5,5,4,4,4,4,4,4,4,3,3,3,ENV_STOP
  .db 0,0,0,0,0,0,0,0,0,-1,-1,1,1,1,1,-1,-1,-1,-1,ENV_LOOP,38
  .db 128,DUTY_ENV_STOP
  .db ENV_STOP

Triangle_On_17:
  .db 5,7,9,11,ARP_TYPE_ABSOLUTE
  .db 1,ENV_STOP
  .db 0,ENV_STOP
  .db 0,DUTY_ENV_STOP
  .db ENV_STOP

SingMinArp_18:
  .db 5,27,48,50,ARP_TYPE_ABSOLUTE
  .db 3,4,4,5,5,5,5,5,5,5,5,4,4,4,4,4,4,4,3,3,3,ENV_STOP
  .db 0,0,0,0,0,0,0,0,0,-1,-1,1,1,1,1,-1,-1,-1,-1,ENV_LOOP,38
  .db 128,DUTY_ENV_STOP
  .db 0,3,7,12,ENV_LOOP,50

Guitar_19:
  .db 5,70,91,94,ARP_TYPE_ABSOLUTE
  .db 3,3,4,5,5,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,1,ENV_STOP
  .db 0,0,0,0,0,0,0,0,0,-1,-1,1,1,1,1,-1,-1,-1,-1,ENV_LOOP,81
  .db 192,64,DUTY_ENV_STOP
  .db ENV_STOP

SingMajArp_20:
  .db 5,27,48,50,ARP_TYPE_ABSOLUTE
  .db 3,4,4,5,5,5,5,5,5,5,5,4,4,4,4,4,4,4,3,3,3,ENV_STOP
  .db 0,0,0,0,0,0,0,0,0,-1,-1,1,1,1,1,-1,-1,-1,-1,ENV_LOOP,38
  .db 128,DUTY_ENV_STOP
  .db 0,4,7,12,ENV_LOOP,50

SingDimArp_21:
  .db 5,27,48,50,ARP_TYPE_ABSOLUTE
  .db 3,4,4,5,5,5,5,5,5,5,5,4,4,4,4,4,4,4,3,3,3,ENV_STOP
  .db 0,0,0,0,0,0,0,0,0,-1,-1,1,1,1,1,-1,-1,-1,-1,ENV_LOOP,38
  .db 128,DUTY_ENV_STOP
  .db 0,3,6,12,ENV_LOOP,50

Zap_22:
  .db 5,22,24,26,ARP_TYPE_ABSOLUTE
  .db 14,13,12,11,10,9,8,8,7,6,5,4,3,2,1,0,ENV_STOP
  .db 0,ENV_STOP
  .db 64,DUTY_ENV_STOP
  .db ENV_STOP

Collide_23:
  .db 5,22,37,39,ARP_TYPE_ABSOLUTE
  .db 14,13,12,11,10,9,8,8,7,6,5,4,3,2,1,0,ENV_STOP
  .db 1,1,1,1,1,1,1,1,1,1,1,1,1,1,ENV_STOP
  .db 192,DUTY_ENV_STOP
  .db ENV_STOP

Drum1_24:
  .db 5,15,17,19,ARP_TYPE_FIXED
  .db 5,4,3,3,2,2,1,1,0,ENV_STOP
  .db 0,ENV_STOP
  .db 0,DUTY_ENV_STOP
  .db 7,ENV_STOP

Drum2_25:
  .db 5,11,13,15,ARP_TYPE_ABSOLUTE
  .db 4,3,2,1,0,ENV_STOP
  .db 0,ENV_STOP
  .db 0,DUTY_ENV_STOP
  .db ENV_STOP

Drum3_26:
  .db 5,25,27,29,ARP_TYPE_FIXED
  .db 4,4,5,5,6,6,5,5,4,4,3,3,2,2,1,1,1,1,0,ENV_STOP
  .db 0,ENV_STOP
  .db 0,DUTY_ENV_STOP
  .db 0,1,2,3,4,5,6,7,8,ENV_STOP

Triangle_On_27:
  .db 5,7,9,11,ARP_TYPE_ABSOLUTE
  .db 1,ENV_STOP
  .db 0,ENV_STOP
  .db 0,DUTY_ENV_STOP
  .db ENV_STOP

silent_28:
  .db 5,7,9,11,ARP_TYPE_ABSOLUTE
  .db 0,ENV_STOP
  .db 0,ENV_STOP
  .db 0,DUTY_ENV_STOP
  .db ENV_STOP

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

_robot_adv:
  .db 0
  .db 6
  .db 0
  .db 5
  .dw _robot_adv_square1
  .dw _robot_adv_square2
  .dw _robot_adv_triangle
  .dw _robot_adv_noise
  .dw _robot_adv_dpcm

_robot_adv_square1:
_robot_adv_square1_loop:
  .db CAL,<(_robot_adv_square1_0),>(_robot_adv_square1_0)
  .db CAL,<(_robot_adv_square1_1),>(_robot_adv_square1_1)
  .db CAL,<(_robot_adv_square1_2),>(_robot_adv_square1_2)
  .db CAL,<(_robot_adv_square1_3),>(_robot_adv_square1_3)
  .db GOT
  .dw _robot_adv_square1_loop

_robot_adv_square2:
_robot_adv_square2_loop:
  .db CAL,<(_robot_adv_square2_0),>(_robot_adv_square2_0)
  .db CAL,<(_robot_adv_square2_1),>(_robot_adv_square2_1)
  .db CAL,<(_robot_adv_square2_2),>(_robot_adv_square2_2)
  .db CAL,<(_robot_adv_square2_3),>(_robot_adv_square2_3)
  .db GOT
  .dw _robot_adv_square2_loop

_robot_adv_triangle:
_robot_adv_triangle_loop:
  .db CAL,<(_robot_adv_triangle_0),>(_robot_adv_triangle_0)
  .db CAL,<(_robot_adv_triangle_1),>(_robot_adv_triangle_1)
  .db CAL,<(_robot_adv_triangle_2),>(_robot_adv_triangle_2)
  .db CAL,<(_robot_adv_triangle_3),>(_robot_adv_triangle_3)
  .db GOT
  .dw _robot_adv_triangle_loop

_robot_adv_noise:
_robot_adv_noise_loop:
  .db CAL,<(_robot_adv_noise_0),>(_robot_adv_noise_0)
  .db CAL,<(_robot_adv_noise_1),>(_robot_adv_noise_1)
  .db CAL,<(_robot_adv_noise_2),>(_robot_adv_noise_2)
  .db CAL,<(_robot_adv_noise_3),>(_robot_adv_noise_3)
  .db GOT
  .dw _robot_adv_noise_loop

_robot_adv_dpcm:
_robot_adv_dpcm_loop:
  .db CAL,<(_robot_adv_dpcm_0),>(_robot_adv_dpcm_0)
  .db CAL,<(_robot_adv_dpcm_0),>(_robot_adv_dpcm_0)
  .db CAL,<(_robot_adv_dpcm_0),>(_robot_adv_dpcm_0)
  .db CAL,<(_robot_adv_dpcm_0),>(_robot_adv_dpcm_0)
  .db GOT
  .dw _robot_adv_dpcm_loop

_robot_adv_square1_0:
  .db STI,19,SL1,DS3,D3,C3,D3,SL4,C3,SL1,C3,STI,28,A0,STI,19
  .db C3,STI,28,A0,STI,19,C3,C3,STI,28,SL2,A0,STI,19,SL1,D3,C3
  .db B2,C3,SL4,B2,SL1,B2,STI,28,A0,STI,19,B2,STI,28,A0,STI,19
  .db B2,B2,STI,28,SL2,A0,STI,19,SL1,C3,B2,A2,B2,SL8,A2,SL4,A2
  .db SL8,G2,SL1,DS3,D3,C3,B2,C3,B2,A2,G2
  .db RET

_robot_adv_square1_1:
  .db STI,19,SL1,DS3,D3,C3,D3,SL4,C3,SL1,C3,STI,28,A0,STI,19
  .db C3,STI,28,A0,STI,19,C3,C3,STI,28,SL2,A0,STI,19,SL1,D3,C3
  .db B2,C3,SL4,B2,SL1,B2,STI,28,A0,STI,19,B2,STI,28,A0,STI,19
  .db B2,B2,STI,28,SL2,A0,STI,19,SL1,C3,B2,A2,B2,SL8,A2,SL4,A2
  .db SL8,G2,SL1,DS3,D3,C3,B2,C3,B2,C3,D3
  .db RET

_robot_adv_square1_2:
  .db STI,19,SL1,AS2,C3,AS2,SL5,C3,SL1,C3,AS2,GS2,G2,F2,DS2,D2
  .db C2,SL0,D2,SL1,C3,D3,C3,SL5,D3,SL1,D3,C3,B2,A2,B2,C3,D3,F3
  .db SL0,DS3
  .db RET

_robot_adv_square1_3:
  .db STI,19,SL1,AS2,C3,AS2,SL5,C3,SL1,C3,AS2,C3,D3,DS3,F3,G3,AS3
  .db SL0,F3,SL1,AS3,B3,AS3,SL5,B3,SL1,G4,F4,DS4,D4,C4,B3,A3,G3
  .db SL0,DS3
  .db RET

_robot_adv_square2_0:
  .db STI,19,SL1,G3,F3,DS3,F3,SL4,DS3,SL1,DS3,STI,28,A0,STI,19
  .db DS3,STI,28,A0,STI,19,DS3,DS3,STI,28,SL2,A0,STI,19,SL1,F3
  .db DS3,D3,DS3,SL4,D3,SL1,D3,STI,28,A0,STI,19,D3,STI,28,A0,STI,19
  .db D3,D3,STI,28,SL2,A0,STI,19,SL1,DS3,D3,C3,D3,SL8,C3,SL4,FS3
  .db SL8,G3,SL1,G3,F3,DS3,D3,DS3,D3,C3,B2
  .db RET

_robot_adv_square2_1:
  .db STI,19,SL1,G3,F3,DS3,F3,SL4,DS3,SL1,DS3,STI,28,A0,STI,19
  .db DS3,STI,28,A0,STI,19,DS3,DS3,STI,28,SL2,A0,STI,19,SL1,F3
  .db DS3,D3,DS3,SL4,D3,SL1,D3,STI,28,A0,STI,19,D3,STI,28,A0,STI,19
  .db D3,D3,STI,28,SL2,A0,STI,19,SL1,DS3,D3,C3,D3,SL8,C3,SL4,A3
  .db SL8,B3,SL1,G3,F3,DS3,D3,DS3,D3,DS3,F3
  .db RET

_robot_adv_square2_2:
  .db STI,19,SL1,G3,GS3,G3,SL5,GS3,SL1,GS3,G3,F3,DS3,D3,C3,AS2
  .db GS2,SL0,AS2,SL1,DS3,F3,DS3,SL5,F3,SL1,F3,DS3,D3,C3,D3,G2
  .db A2,B2,SL0,C3
  .db RET

_robot_adv_square2_3:
  .db STI,19,SL1,G3,GS3,G3,SL5,GS3,SL1,GS3,G3,GS3,AS3,C4,D4,DS4
  .db F4,SL0,D4,SL1,FS4,G4,FS4,SL5,G4,SL1,B4,A4,G4,F4,DS4,D4,C4
  .db B3,SL0,C4
  .db RET

_robot_adv_triangle_0:
  .db STI,27,SL1,C3,STI,28,A0,STI,27,C3,STI,28,A0,STI,27,SL3,C3
  .db STI,28,SL1,A0,STI,27,SL3,C3,STI,28,SL1,A0,STI,27,SL3,C3,STI,28
  .db SL1,A0,STI,27,G3,STI,28,A0,STI,27,G3,STI,28,A0,STI,27
  .db SL3,G3,STI,28,SL1,A0,STI,27,SL3,G3,STI,28,SL1,A0,STI,27
  .db SL3,G3,STI,28,SL1,A0,STI,27,A3,STI,28,A0,STI,27,A3,STI,28
  .db A0,STI,27,SL3,A3,STI,28,SL1,A0,STI,27,SL3,FS3,STI,28
  .db SL1,A0,STI,27,SL3,FS3,STI,28,SL1,A0,STI,27,G3,STI,28
  .db A0,STI,27,G3,STI,28,A0,STI,27,SL3,G3,STI,28,SL1,A0,STI,27
  .db SL3,G3,STI,28,SL1,A0,STI,27,SL3,D3,STI,28,SL1,A0
  .db RET

_robot_adv_triangle_1:
  .db STI,27,SL1,C3,STI,28,A0,STI,27,C3,STI,28,A0,STI,27,SL3,C3
  .db STI,28,SL1,A0,STI,27,SL3,C3,STI,28,SL1,A0,STI,27,SL3,C3,STI,28
  .db SL1,A0,STI,27,G3,STI,28,A0,STI,27,G3,STI,28,A0,STI,27
  .db SL3,G3,STI,28,SL1,A0,STI,27,SL3,G3,STI,28,SL1,A0,STI,27
  .db SL3,G3,STI,28,SL1,A0,STI,27,A3,STI,28,A0,STI,27,A3,STI,28
  .db A0,STI,27,SL3,A3,STI,28,SL1,A0,STI,27,SL3,FS3,STI,28
  .db SL1,A0,STI,27,SL3,FS3,STI,28,SL1,A0,STI,27,G3,STI,28
  .db A0,STI,27,G3,STI,28,A0,STI,27,SL3,G3,STI,28,SL1,A0,STI,27
  .db SL3,G3,STI,28,SL1,A0,STI,27,SL3,D3,STI,28,SL1,A0
  .db RET

_robot_adv_triangle_2:
  .db STI,27,SL1,GS2,STI,28,A0,STI,27,GS2,STI,28,A0,STI,27
  .db GS2,STI,28,A0,STI,27,GS2,STI,28,A0,STI,27,GS2,STI,28
  .db A0,STI,27,GS2,STI,28,A0,STI,27,GS2,STI,28,A0,STI,27,GS2
  .db STI,28,A0,STI,27,AS2,STI,28,A0,STI,27,AS2,STI,28,A0,STI,27
  .db AS2,STI,28,A0,STI,27,AS2,STI,28,A0,STI,27,AS2,STI,28
  .db A0,STI,27,AS2,STI,28,A0,STI,27,AS2,STI,28,A0,STI,27,AS2
  .db STI,28,A0,STI,27,B2,STI,28,A0,STI,27,B2,STI,28,A0,STI,27
  .db B2,STI,28,A0,STI,27,B2,STI,28,A0,STI,27,B2,STI,28,A0,STI,27
  .db B2,STI,28,A0,STI,27,B2,STI,28,A0,STI,27,B2,STI,28,A0,STI,27
  .db C3,STI,28,A0,STI,27,C3,STI,28,A0,STI,27,C3,STI,28,A0,STI,27
  .db C3,STI,28,A0,STI,27,C3,STI,28,A0,STI,27,C3,STI,28,A0,STI,27
  .db C3,STI,28,A0,STI,27,C3,STI,28,A0
  .db RET

_robot_adv_triangle_3:
  .db STI,27,SL1,GS2,STI,28,A0,STI,27,GS2,STI,28,A0,STI,27
  .db GS2,STI,28,A0,STI,27,GS2,STI,28,A0,STI,27,GS2,STI,28
  .db A0,STI,27,GS2,STI,28,A0,STI,27,GS2,STI,28,A0,STI,27,GS2
  .db STI,28,A0,STI,27,AS2,STI,28,A0,STI,27,AS2,STI,28,A0,STI,27
  .db AS2,STI,28,A0,STI,27,AS2,STI,28,A0,STI,27,AS2,STI,28
  .db A0,STI,27,AS2,STI,28,A0,STI,27,AS2,STI,28,A0,STI,27,AS2
  .db STI,28,A0,STI,27,B2,STI,28,A0,STI,27,B2,STI,28,A0,STI,27
  .db B2,STI,28,A0,STI,27,B2,STI,28,A0,STI,27,B2,STI,28,A0,STI,27
  .db B2,STI,28,A0,STI,27,B2,STI,28,A0,STI,27,B2,STI,28,A0,STI,27
  .db C3,STI,28,A0,STI,27,C3,STI,28,A0,STI,27,C3,STI,28,A0,STI,27
  .db C3,STI,28,A0,STI,27,C3,STI,28,A0,STI,27,C3,STI,28,A0,STI,27
  .db C3,STI,28,A0,STI,27,C3,STI,28,A0
  .db RET

_robot_adv_noise_0:
  .db STI,15,SL1,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15
  .db 13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14
  .db 15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15
  .db 14,15,13,15,14,15,13,15,14,15
  .db RET

_robot_adv_noise_1:
  .db STI,15,SL1,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15
  .db 13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14
  .db 15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15
  .db 14,15,13,15,14,15,13,15,14,15
  .db RET

_robot_adv_noise_2:
  .db STI,15,SL1,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15
  .db 13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14
  .db 15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15
  .db 14,15,13,15,14,15,13,15,14,15
  .db RET

_robot_adv_noise_3:
  .db STI,15,SL1,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15
  .db 13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14
  .db 15,13,15,14,15,13,15,14,15,13,15,14,15,13,15,14,15,13,15
  .db 14,15,13,15,14,15,13,15,14,15
  .db RET

_robot_adv_dpcm_0:
  .db STI,15,SL1,C3,SL3,C3,SL2,CS3,SL1,C3,SL5,C3,SL2,CS3,C3,SL1
  .db C3,SL3,C3,SL2,CS3,SL1,C3,SL3,C3,SL2,C3,CS3,SL1,CS3,CS3,C3
  .db SL3,C3,SL2,CS3,SL1,C3,SL5,C3,SL2,CS3,C3,SL1,C3,SL3,C3,SL2
  .db CS3,SL1,C3,SL3,C3,SL2,C3,SL1,CS3,CS3,CS3,CS3
  .db RET

_k466:
  .db 0
  .db 7
  .db 213
  .db 5
  .dw _k466_square1
  .dw _k466_square2
  .dw _k466_triangle
  .dw 0
  .dw 0

_k466_square1:
_k466_square1_loop:
  .db CAL,<(_k466_square1_0),>(_k466_square1_0)
  .db CAL,<(_k466_square1_1),>(_k466_square1_1)
  .db CAL,<(_k466_square1_2),>(_k466_square1_2)
  .db CAL,<(_k466_square1_3),>(_k466_square1_3)
  .db CAL,<(_k466_square1_4),>(_k466_square1_4)
  .db CAL,<(_k466_square1_5),>(_k466_square1_5)
  .db CAL,<(_k466_square1_6),>(_k466_square1_6)
  .db CAL,<(_k466_square1_7),>(_k466_square1_7)
  .db GOT
  .dw _k466_square1_loop

_k466_square2:
_k466_square2_loop:
  .db CAL,<(_k466_square2_0),>(_k466_square2_0)
  .db CAL,<(_k466_square2_1),>(_k466_square2_1)
  .db CAL,<(_k466_square2_2),>(_k466_square2_2)
  .db CAL,<(_k466_square2_3),>(_k466_square2_3)
  .db CAL,<(_k466_square2_4),>(_k466_square2_4)
  .db CAL,<(_k466_square2_5),>(_k466_square2_5)
  .db CAL,<(_k466_square2_6),>(_k466_square2_6)
  .db CAL,<(_k466_square2_7),>(_k466_square2_7)
  .db GOT
  .dw _k466_square2_loop

_k466_triangle:
_k466_triangle_loop:
  .db CAL,<(_k466_triangle_0),>(_k466_triangle_0)
  .db CAL,<(_k466_triangle_1),>(_k466_triangle_1)
  .db CAL,<(_k466_triangle_2),>(_k466_triangle_2)
  .db CAL,<(_k466_triangle_3),>(_k466_triangle_3)
  .db CAL,<(_k466_triangle_3),>(_k466_triangle_3)
  .db CAL,<(_k466_triangle_3),>(_k466_triangle_3)
  .db CAL,<(_k466_triangle_3),>(_k466_triangle_3)
  .db CAL,<(_k466_triangle_3),>(_k466_triangle_3)
  .db GOT
  .dw _k466_triangle_loop

_k466_square1_0:
  .db STI,28,SL3,A0,STI,0,GS4,C5,GS4,F4,C4,CS4,GS3,AS3,G4,AS4
  .db G4,E4,C4,CS4,AS3
  .db RET

_k466_square1_1:
  .db STI,0,SL3,C4,F4,GS4,F4,C4,GS3,F3,C3,CS4,E3,F3,C4,G3,AS3
  .db GS3,G3
  .db RET

_k466_square1_2:
  .db STI,5,SLL,18,C4,STI,0,SL2,E4,F4,G4,F4,E4,SLE,F4,SL2,E4,F4
  .db G4
  .db RET

_k466_square1_3:
  .db STI,0,SL2,F4,E4,SLE,F4,SL2,D4,DS4,F4,DS4,D4,SLE,C4,SL2,B3
  .db C4,D4
  .db RET

_k466_square1_4:
  .db STI,0,SL2,C4,B3,SLE,C4,SL2,B3,C4,D4,SL3,G4,F4,F4,DS4,DS4
  .db D4,D4,C4
  .db RET

_k466_square1_5:
  .db STI,0,SLL,18,B3,SL2,C4,B3,C4,SLL,18,D4,SL2,C4,B3,C4
  .db RET

_k466_square1_6:
  .db STI,0,SLL,18,D4,SL2,D4,DS4,F4,DS4,D4,SLE,C4,SL2,D4,DS4,F4
  .db RET

_k466_square1_7:
  .db STI,0,SL3,G3,F4,DS4,C4,F4,D4,C4,B3,SLL,24,C4
  .db RET

_k466_square2_0:
  .db STI,0,SLC,F2,F2,G2,G2
  .db RET

_k466_square2_1:
  .db STI,0,SLC,GS3,GS3,SL6,AS3,GS3,G3,C3
  .db RET

_k466_square2_2:
  .db STI,0,SL3,F2,F3,GS3,F3,CS3,AS2,G2,E3,GS2,F3,GS3,F3,CS3,AS2
  .db G2,E3
  .db RET

_k466_square2_3:
  .db STI,0,SL3,GS2,F3,GS3,F3,D3,F3,G2,B2,C2,C3,DS3,C3,GS2,C3,D2
  .db B2
  .db RET

_k466_square2_4:
  .db STI,0,SL3,DS2,C3,DS3,C3,GS2,C3,D2,B2,SL6,DS2,C3,F2,GS2
  .db RET

_k466_square2_5:
  .db STI,0,SL3,G2,F3,GS3,F3,D3,F3,GS2,F3,G2,F3,GS3,F3,D3,F3,GS2
  .db F3
  .db RET

_k466_square2_6:
  .db STI,0,SL3,G2,F3,GS3,F3,D3,F3,G2,B2,C2,C3,DS3,C3,GS2,C3,F2
  .db GS2
  .db RET

_k466_square2_7:
  .db STI,0,SLC,G1,G1,SLL,24,C1
  .db RET

_k466_triangle_0:
  .db STI,28,SLL,24,A0,STI,0,SLC,F3,E3
  .db RET

_k466_triangle_1:
  .db STI,0,SLC,F3,C3,SL6,CS3,C3,AS2,C3
  .db RET

_k466_triangle_2:
  .db STI,5,SLL,48,C4
  .db RET

_k466_triangle_3:
  .db STI,28,SLL,48,A0
  .db RET

_k11:
  .db 0
  .db 5
  .db 42
  .db 4
  .dw _k11_square1
  .dw _k11_square2
  .dw _k11_triangle
  .dw _k11_noise
  .dw 0

_k11_square1:
_k11_square1_loop:
  .db CAL,<(_k11_square1_0),>(_k11_square1_0)
  .db CAL,<(_k11_square1_1),>(_k11_square1_1)
  .db CAL,<(_k11_square1_2),>(_k11_square1_2)
  .db CAL,<(_k11_square1_3),>(_k11_square1_3)
  .db CAL,<(_k11_square1_4),>(_k11_square1_4)
  .db CAL,<(_k11_square1_5),>(_k11_square1_5)
  .db CAL,<(_k11_square1_6),>(_k11_square1_6)
  .db GOT
  .dw _k11_square1_loop

_k11_square2:
_k11_square2_loop:
  .db CAL,<(_k11_square2_0),>(_k11_square2_0)
  .db CAL,<(_k11_square2_1),>(_k11_square2_1)
  .db CAL,<(_k11_square2_2),>(_k11_square2_2)
  .db CAL,<(_k11_square2_3),>(_k11_square2_3)
  .db CAL,<(_k11_square2_4),>(_k11_square2_4)
  .db CAL,<(_k11_square2_5),>(_k11_square2_5)
  .db CAL,<(_k11_square2_6),>(_k11_square2_6)
  .db GOT
  .dw _k11_square2_loop

_k11_triangle:
_k11_triangle_loop:
  .db CAL,<(_k11_triangle_0),>(_k11_triangle_0)
  .db CAL,<(_k11_triangle_1),>(_k11_triangle_1)
  .db CAL,<(_k11_triangle_2),>(_k11_triangle_2)
  .db CAL,<(_k11_triangle_3),>(_k11_triangle_3)
  .db CAL,<(_k11_triangle_4),>(_k11_triangle_4)
  .db CAL,<(_k11_triangle_5),>(_k11_triangle_5)
  .db CAL,<(_k11_triangle_6),>(_k11_triangle_6)
  .db GOT
  .dw _k11_triangle_loop

_k11_noise:
_k11_noise_loop:
  .db CAL,<(_k11_noise_0),>(_k11_noise_0)
  .db CAL,<(_k11_noise_0),>(_k11_noise_0)
  .db CAL,<(_k11_noise_0),>(_k11_noise_0)
  .db CAL,<(_k11_noise_0),>(_k11_noise_0)
  .db CAL,<(_k11_noise_0),>(_k11_noise_0)
  .db CAL,<(_k11_noise_0),>(_k11_noise_0)
  .db CAL,<(_k11_noise_0),>(_k11_noise_0)
  .db GOT
  .dw _k11_noise_loop

_k11_square1_0:
  .db STI,1,SL8,G3,SL1,C4,B3,C4,B3,C4,B3,A3,B3,SLC,C4,SL4,D4,DS4
  .db F4,G4,C4,B3,A3,G3,F3
  .db RET

_k11_square1_1:
  .db STI,1,SL4,DS3,F3,G3,C3,B2,A2,G2,D4,DS4,F4,G4,C4,B3,A3,G3
  .db D4
  .db RET

_k11_square1_2:
  .db STI,4,SL4,DS4,G3,D4,G3,C4,SL2,B3,A3,B3,G3,B3,D4,SL4,DS4
  .db G3,D4,G3,C4,SL2,B3,A3,B3,G3,B3,D4
  .db RET

_k11_square1_3:
  .db STI,4,SL4,F4,G3,DS4,G3,D4,SL2,C4,B3,C4,G3,C4,DS4,SL4,F4,G3
  .db DS4,G3,D4,SL2,C4,B3,C4,G3,C4,DS4
  .db RET

_k11_square1_4:
  .db STI,1,SL2,DS4,D4,C4,AS3,C4,AS3,A3,G3,A3,G3,FS3,E3,FS3,D3
  .db E3,FS3,G3,D3,G3,AS3,SL4,D4,C4,SL1,C4,AS3,C4,AS3,C4,AS3,A3
  .db G3,AS3,A3,AS3,A3,AS3,A3,G3,FS3
  .db RET

_k11_square1_5:
  .db STI,1,SL2,G3,D3,G3,AS3,SL4,D4,C4,SL1,C4,AS3,C4,AS3,C4,AS3
  .db A3,G3,AS3,A3,AS3,A3,AS3,A3,G3,FS3,SL2,D4,G3,AS3,D4,SL4,G4
  .db C4,SL1,C4,AS3,C4,AS3,C4,AS3,A3,G3,AS3,A3,AS3,A3,AS3,A3,G3
  .db FS3
  .db RET

_k11_square1_6:
  .db STI,1,SL2,G3,G4,F4,DS4,D4,C4,B3,A3,G3,G3,F3,DS3,D3,C3,B2
  .db A2,SL8,G2,D4,SL0,G4
  .db RET

_k11_square2_0:
  .db STI,1,SL8,C3,D3,SL4,DS3,D3,C3,B2,C3,D3,DS3,F3,G3,A2,B2,G2
  .db RET

_k11_square2_1:
  .db STI,1,SL4,C2,D2,DS2,F2,SL8,G2,SL4,G1,B2,C3,D3,DS3,F3,SL0
  .db G3
  .db RET

_k11_square2_2:
  .db STI,4,SL8,G4,F4,DS4,D4,G4,F4,DS4,D4
  .db RET

_k11_square2_3:
  .db STI,4,SL8,GS4,G4,F4,DS4,GS4,G4,F4,DS4
  .db RET

_k11_square2_4:
  .db STI,1,SL4,C5,AS4,A4,G4,FS4,E4,D4,C4,SLC,AS3,SL4,DS3,SL8
  .db D3,C3
  .db RET

_k11_square2_5:
  .db STI,1,SLC,AS2,SL4,DS3,SL8,D3,C3,SLC,AS2,SL4,C2,SL8,D2,D1
  .db RET

_k11_square2_6:
  .db STI,1,SLL,34,G1,SL2,D2,E2,FS2,G2,B1,C2,D2,SL0,G1
  .db RET

_k11_triangle_0:
  .db STI,2,SL8,C3,D3,SL4,DS3,D3,C3,B2,C3,D3,DS3,F3,G3,A2,B2,G2
  .db RET

_k11_triangle_1:
  .db STI,2,SL4,C2,D2,DS2,F2,SL8,G2,SL4,G1,B2,C3,D3,DS3,F3,SL0
  .db G3
  .db RET

_k11_triangle_2:
  .db STI,2,SL4,DS4,G3,D4,G3,C4,SL2,B3,A3,B3,G3,B3,D4,SL4,DS4
  .db G3,D4,G3,C4,SL2,B3,A3,B3,G3,B3,D4
  .db RET

_k11_triangle_3:
  .db STI,2,SL4,F4,G3,DS4,G3,D4,SL2,C4,B3,C4,G3,C4,DS4,SL4,F4,G3
  .db DS4,G3,D4,SL2,C4,B3,C4,G3,C4,DS4
  .db RET

_k11_triangle_4:
  .db STI,2,SL2,DS4,D4,C4,AS3,C4,AS3,A3,G3,A3,G3,FS3,E3,FS3,D3
  .db E3,FS3,G3,D3,G3,AS3,SL4,D4,C4,SL1,C4,AS3,C4,AS3,C4,AS3,A3
  .db G3,AS3,A3,AS3,A3,AS3,A3,G3,FS3
  .db RET

_k11_triangle_5:
  .db STI,1,SLC,AS2,SL4,DS3,SL8,D3,C3,SLC,AS2,SL4,C2,SL8,D2,D1
  .db RET

_k11_triangle_6:
  .db STI,1,SLL,34,G1,SL2,D2,E2,FS2,G2,B1,C2,D2,SL0,G1
  .db RET

_k11_noise_0:
  .db STI,3,SL8,3,3,SL4,3,0,3,0,3,0,3,0,3,0,3,0
  .db RET

_soler42:
  .db 0
  .db 3
  .db 128
  .db 2
  .dw _soler42_square1
  .dw _soler42_square2
  .dw _soler42_triangle
  .dw _soler42_noise
  .dw 0

_soler42_square1:
_soler42_square1_loop:
  .db CAL,<(_soler42_square1_0),>(_soler42_square1_0)
  .db CAL,<(_soler42_square1_1),>(_soler42_square1_1)
  .db CAL,<(_soler42_square1_2),>(_soler42_square1_2)
  .db CAL,<(_soler42_square1_3),>(_soler42_square1_3)
  .db CAL,<(_soler42_square1_4),>(_soler42_square1_4)
  .db CAL,<(_soler42_square1_5),>(_soler42_square1_5)
  .db CAL,<(_soler42_square1_6),>(_soler42_square1_6)
  .db CAL,<(_soler42_square1_7),>(_soler42_square1_7)
  .db CAL,<(_soler42_square1_8),>(_soler42_square1_8)
  .db CAL,<(_soler42_square1_9),>(_soler42_square1_9)
  .db CAL,<(_soler42_square1_10),>(_soler42_square1_10)
  .db CAL,<(_soler42_square1_11),>(_soler42_square1_11)
  .db CAL,<(_soler42_square1_12),>(_soler42_square1_12)
  .db CAL,<(_soler42_square1_13),>(_soler42_square1_13)
  .db GOT
  .dw _soler42_square1_loop

_soler42_square2:
_soler42_square2_loop:
  .db CAL,<(_soler42_square2_0),>(_soler42_square2_0)
  .db CAL,<(_soler42_square2_1),>(_soler42_square2_1)
  .db CAL,<(_soler42_square2_2),>(_soler42_square2_2)
  .db CAL,<(_soler42_square2_3),>(_soler42_square2_3)
  .db CAL,<(_soler42_square2_4),>(_soler42_square2_4)
  .db CAL,<(_soler42_square2_5),>(_soler42_square2_5)
  .db CAL,<(_soler42_square2_6),>(_soler42_square2_6)
  .db CAL,<(_soler42_square2_7),>(_soler42_square2_7)
  .db CAL,<(_soler42_square2_8),>(_soler42_square2_8)
  .db CAL,<(_soler42_square2_9),>(_soler42_square2_9)
  .db CAL,<(_soler42_square2_10),>(_soler42_square2_10)
  .db CAL,<(_soler42_square2_11),>(_soler42_square2_11)
  .db CAL,<(_soler42_square2_12),>(_soler42_square2_12)
  .db CAL,<(_soler42_square2_13),>(_soler42_square2_13)
  .db GOT
  .dw _soler42_square2_loop

_soler42_triangle:
_soler42_triangle_loop:
  .db CAL,<(_soler42_triangle_0),>(_soler42_triangle_0)
  .db CAL,<(_soler42_triangle_1),>(_soler42_triangle_1)
  .db CAL,<(_soler42_triangle_2),>(_soler42_triangle_2)
  .db CAL,<(_soler42_triangle_3),>(_soler42_triangle_3)
  .db CAL,<(_soler42_triangle_4),>(_soler42_triangle_4)
  .db CAL,<(_soler42_triangle_5),>(_soler42_triangle_5)
  .db CAL,<(_soler42_triangle_6),>(_soler42_triangle_6)
  .db CAL,<(_soler42_triangle_7),>(_soler42_triangle_7)
  .db CAL,<(_soler42_triangle_8),>(_soler42_triangle_8)
  .db CAL,<(_soler42_triangle_9),>(_soler42_triangle_9)
  .db CAL,<(_soler42_triangle_10),>(_soler42_triangle_10)
  .db CAL,<(_soler42_triangle_11),>(_soler42_triangle_11)
  .db CAL,<(_soler42_triangle_12),>(_soler42_triangle_12)
  .db CAL,<(_soler42_triangle_13),>(_soler42_triangle_13)
  .db GOT
  .dw _soler42_triangle_loop

_soler42_noise:
_soler42_noise_loop:
  .db CAL,<(_soler42_noise_0),>(_soler42_noise_0)
  .db CAL,<(_soler42_noise_0),>(_soler42_noise_0)
  .db CAL,<(_soler42_noise_0),>(_soler42_noise_0)
  .db CAL,<(_soler42_noise_0),>(_soler42_noise_0)
  .db CAL,<(_soler42_noise_0),>(_soler42_noise_0)
  .db CAL,<(_soler42_noise_0),>(_soler42_noise_0)
  .db CAL,<(_soler42_noise_0),>(_soler42_noise_0)
  .db CAL,<(_soler42_noise_0),>(_soler42_noise_0)
  .db CAL,<(_soler42_noise_0),>(_soler42_noise_0)
  .db CAL,<(_soler42_noise_0),>(_soler42_noise_0)
  .db CAL,<(_soler42_noise_0),>(_soler42_noise_0)
  .db CAL,<(_soler42_noise_0),>(_soler42_noise_0)
  .db CAL,<(_soler42_noise_0),>(_soler42_noise_0)
  .db CAL,<(_soler42_noise_1),>(_soler42_noise_1)
  .db GOT
  .dw _soler42_noise_loop

_soler42_square1_0:
  .db STI,7,SL4,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .db G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .db RET

_soler42_square1_1:
  .db STI,7,SL4,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,A1
  .db AS1,AS2,C2,D2,D3,FS3,D3,C3,A2
  .db RET

_soler42_square1_2:
  .db STI,7,SL4,AS2,D3,G2,FS2,D3,D2,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .db G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .db RET

_soler42_square1_3:
  .db STI,7,SL4,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,A1
  .db AS1,AS2,C2,D2,D3,FS3,D3,C3,A2
  .db RET

_soler42_square1_4:
  .db STI,7,SL2,A2,STI,12,A2,STI,7,A3,STI,12,A3,STI,7,C4,STI,12
  .db C4,STI,7,A3,STI,12,A3,STI,7,FS3,STI,12,FS3,STI,7,D3,STI,12
  .db D3,STI,7,G2,STI,12,G2,STI,7,G3,STI,12,G3,STI,7,AS3,STI,12
  .db AS3,STI,7,G3,STI,12,G3,STI,7,E3,STI,12,E3,STI,7,C3,STI,12
  .db C3,STI,7,F2,STI,12,F2,STI,7,F3,STI,12,F3,STI,7,A3,STI,12
  .db A3,STI,7,F3,STI,12,F3,STI,7,D3,STI,12,D3,STI,7,AS2,STI,12
  .db AS2,STI,7,E2,STI,12,E2,STI,7,E3,STI,12,E3,STI,7,G3,STI,12
  .db G3,STI,7,E3,STI,12,E3,STI,7,CS3,STI,12,CS3,STI,7,A2,STI,12
  .db A2
  .db RET

_soler42_square1_5:
  .db STI,7,SL4,D2,D3,F3,C2,C3,E3,AS1,AS2,D3,A1,A2,C3,G1,G2,AS2
  .db F1,F2,A2,E1,E2,G2,D1,D2,F2
  .db RET

_soler42_square1_6:
  .db STI,7,SL4,A0,CS1,E1,A1,CS2,E2,A1,CS2,E2,A2,CS3,E3,A1,A2,B1
  .db CS2,A2,D2,E2,A2,F2,G2,A2,F2
  .db RET

_soler42_square1_7:
  .db STI,7,SL4,E2,A2,D2,CS2,A2,D2,A1,A2,B1,CS2,A2,D2,E2,A2,F2
  .db G2,A2,F2,E2,A2,D2,CS2,A2,D2
  .db RET

_soler42_square1_8:
  .db STI,7,SL4,A1,A2,CS3,A2,E2,CS2,D2,D3,F3,A3,F3,D3,G1,G2,AS2
  .db D3,AS2,G2,A1,A2,D3,A1,A2,CS3
  .db RET

_soler42_square1_9:
  .db STI,7,SL4,D1,D2,F2,A2,F2,D2,A1,A2,B1,CS2,A2,D2,E2,A2,F2,G2
  .db A2,F2,E2,A2,D2,CS2,A2,D2
  .db RET

_soler42_square1_10:
  .db STI,7,SL4,A1,A2,B1,CS2,A2,D2,E2,A2,F2,G2,A2,F2,E2,A2,D2,CS2
  .db A2,D2,A1,A2,CS3,A2,E2,CS2
  .db RET

_soler42_square1_11:
  .db STI,7,SL2,D1,STI,12,D1,STI,7,D2,STI,12,D2,STI,7,F2,STI,12
  .db F2,STI,7,A2,STI,12,A2,STI,7,F2,STI,12,F2,STI,7,D2,STI,12
  .db D2,STI,7,G1,STI,12,G1,STI,7,G2,STI,12,G2,STI,7,AS2,STI,12
  .db AS2,STI,7,D3,STI,12,D3,STI,7,AS2,STI,12,AS2,STI,7,G2,STI,12
  .db G2,STI,7,A1,STI,12,A1,STI,7,A2,STI,12,A2,STI,7,D3,STI,12
  .db D3,STI,7,A1,STI,12,A1,STI,7,A2,STI,12,A2,STI,7,CS3,STI,12
  .db CS3,STI,7,D2,STI,12,D2,STI,7,D3,STI,12,D3,STI,7,F3,STI,12
  .db F3,STI,7,A3,STI,12,A3,STI,7,F3,STI,12,F3,STI,7,D3,STI,12
  .db D3
  .db RET

_soler42_square1_12:
  .db STI,7,SL2,G1,STI,12,G1,STI,7,G2,STI,12,G2,STI,7,AS2,STI,12
  .db AS2,STI,7,D3,STI,12,D3,STI,7,AS2,STI,12,AS2,STI,7,G2,STI,12
  .db G2,STI,7,A1,STI,12,A1,STI,7,A2,STI,12,A2,STI,7,D3,STI,12
  .db D3,STI,7,A1,STI,12,A1,STI,7,A2,STI,12,A2,STI,7,CS3,STI,12
  .db CS3,STI,7,D2,STI,12,D2,STI,7,A2,STI,12,A2,STI,7,CS2,STI,12
  .db CS2,STI,7,D2,STI,12,D2,STI,7,A2,STI,12,A2,STI,7,CS2,STI,12
  .db CS2,STI,7,D2,STI,12,D2,STI,7,A2,STI,12,A2,STI,7,CS2,STI,12
  .db CS2,STI,7,D2,STI,12,D2,STI,7,A2,STI,12,A2,STI,7,CS2,STI,12
  .db CS2
  .db RET

_soler42_square1_13:
  .db STI,7,SL4,D2,A2,CS2,D2,A2,CS2,D2,A2,CS2,D2,A2,CS2,D2,E2,D2
  .db C2,AS1,A1
  .db RET

_soler42_square2_0:
  .db STI,28,SL0,A0,STI,9,SL4,D3,SL2,D3,SL1,AS2,D3,SL0,G3,SL4
  .db D3,SL2,D3,SL1,AS2,D3,SL0,G3,SL4,D3,SL2,D3,SL1,AS2,D3,SL8
  .db G3,SL4,D3,SL8,D3,SL4,C3
  .db RET

_soler42_square2_1:
  .db STI,9,SL1,C3,AS2,C3,SL5,AS2,SL4,A2,SL1,A2,G2,A2,SL5,G2,SL4
  .db A2,SL1,C3,AS2,C3,SL5,AS2,SL4,A2,SL1,A2,G2,A2,SL5,G2,SL4
  .db A2,SL1,C3,AS2,C3,SL5,AS2,SL4,C3,SL1,DS3,D3,DS3,SL5,D3,SL4
  .db E3,SL1,G3,FS3,G3,SL5,FS3,SL4,G3,A3,AS3,C4
  .db RET

_soler42_square2_2:
  .db STI,9,SL4,C4,SL8,AS3,SL1,AS3,A3,AS3,SL7,A3,SL1,G3,A3,SL0
  .db G3,SL4,D3,SL2,D3,SL1,AS2,D3,SL0,G3,SL4,D3,SL2,D3,SL1,AS2
  .db D3,SL8,G3,SL4,D3,SL8,D3,SL4,C3
  .db RET

_soler42_square2_3:
  .db STI,9,SL1,C3,AS2,C3,SL5,AS2,SL4,A2,SL1,A2,G2,A2,SL5,G2,SL4
  .db A2,SL1,C3,AS2,C3,SL5,AS2,SL4,A2,SL1,A2,G2,A2,SL5,G2,SL4
  .db A2,SL1,C3,AS2,C3,SL5,AS2,SL4,C3,SL1,DS3,D3,DS3,SL5,D3,SL4
  .db E3,SL1,G3,FS3,G3,SL5,FS3,SL4,G3,SL8,A3,SL4,AS3
  .db RET

_soler42_square2_4:
  .db STI,9,SL1,A3,SLF,C4,SL1,AS3,SL3,D4,SL1,A3,SL3,C4,SL1,A3,SL7
  .db C4,SL1,G3,SL7,AS3,SL1,A3,SL3,C4,SL1,G3,SL3,AS3,SL1,G3,SL7
  .db AS3,SL1,F3,SL7,A3,SL1,G3,SL3,AS3,SL1,F3,SL3,A3,SL1,F3,SL7
  .db A3,SL1,E3,SL7,G3,SL1,F3,SL3,A3,SL1,E3,SL3,G3
  .db RET

_soler42_square2_5:
  .db STI,9,SL1,G3,F3,G3,SL5,F3,SL4,A3,SL1,F3,E3,F3,SL5,E3,SL4
  .db A3,SL1,E3,D3,E3,SL5,D3,SL4,A3,SL1,D3,C3,D3,SL5,C3,SL4,A3
  .db SL1,C3,AS2,C3,SL5,AS2,SL4,A3,SL1,AS2,A2,AS2,SL5,A2,SL4,A3
  .db SL1,A2,G2,A2,SL5,G2,SL4,A3,SL1,G2,F2,G2,SL5,F2,SL4,A3
  .db RET

_soler42_square2_6:
  .db STI,9,SL0,E2,SL1,CS3,SL3,E3,SL1,CS3,SL3,E3,SL1,A2,CS3,E3
  .db SLD,A3,SL1,CS3,SL3,E3,SL1,CS3,SL3,E3,SL1,A2,CS3,E3,SLL,17
  .db A3,SL4,A3,SL1,D3,CS3,D3,SL5,CS3,SL4,D3,SL8,E3,SL4,F3
  .db RET

_soler42_square2_7:
  .db STI,9,SL1,A3,G3,A3,SL5,G3,SL4,F3,SL8,E3,SL4,F3,SL1,G3,F3
  .db G3,SL5,F3,SLC,E3,SL4,A3,SL1,D3,CS3,D3,SL5,CS3,SL4,D3,SL8
  .db E3,SL4,F3,SL1,A3,G3,A3,SL5,G3,SL4,F3,SL8,E3,SL4,F3
  .db RET

_soler42_square2_8:
  .db STI,9,SL1,G3,F3,G3,SL5,F3,SL8,E3,SL4,A3,G3,SL8,G3,F3,SL4
  .db D4,C4,SL8,C4,AS3,SL4,AS3,G3,SLC,F3,SL1,CS3,F3,E3,F3,SL8
  .db E3
  .db RET

_soler42_square2_9:
  .db STI,9,SL8,E3,SL6,D3,SL2,A3,G3,F3,E3,D3,SL4,D3,SL0,CS3,SL4
  .db A3,SL1,D3,CS3,D3,SL5,CS3,SL4,D3,SL8,E3,SL4,F3,SL1,A3,G3,A3
  .db SL5,G3,SL4,F3,SL8,E3,SL4,F3
  .db RET

_soler42_square2_10:
  .db STI,9,SL1,G3,F3,G3,SL5,F3,SLC,E3,SL4,A3,SL1,D3,CS3,D3,SL5
  .db CS3,SL4,D3,SL8,E3,SL4,F3,SL1,A3,G3,A3,SL5,G3,SL4,F3,SL8
  .db E3,SL4,F3,SL1,G3,F3,G3,SL5,F3,SL8,E3,SL4,A3,G3
  .db RET

_soler42_square2_11:
  .db STI,9,SL8,G3,F3,SL4,D4,C4,SL8,C4,AS3,SL4,AS3,G3,SLC,F3,SL1
  .db CS3,E3,F3,E3,F3,SL7,E3,SL8,E3,D3,SL4,D4,C4
  .db RET

_soler42_square2_12:
  .db STI,9,SL8,C4,AS3,SL4,AS3,G3,SLC,F3,SL1,CS3,E3,F3,E3,F3,SL7
  .db E3,SL8,D2,SL4,E2,SL8,F2,SL4,E2,SL8,D2,SL4,E2,SL8,F2,SL4
  .db E2
  .db RET

_soler42_square2_13:
  .db STI,9,SL8,D2,SL4,CS2,SL8,D2,SL4,CS2,SL8,D2,SL4,CS2,SL8,D2
  .db SL4,CS2,D2,STI,11,SLL,20,F3
  .db RET

_soler42_triangle_0:
  .db STI,7,SL4,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .db G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .db RET

_soler42_triangle_1:
  .db STI,7,SL4,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,A1
  .db AS1,AS2,C2,D2,D3,FS3,D3,C3,A2
  .db RET

_soler42_triangle_2:
  .db STI,7,SL4,AS2,D3,G2,FS2,D3,D2,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .db G1,G2,FS1,G1,G2,FS1,G1,G2,FS1
  .db RET

_soler42_triangle_3:
  .db STI,7,SL4,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,FS1,G1,G2,A1
  .db AS1,AS2,C2,D2,D3,FS3,D3,C3,A2
  .db RET

_soler42_triangle_4:
  .db STI,7,SL4,A2,A3,C4,A3,FS3,D3,G2,G3,AS3,G3,E3,C3,F2,F3,A3
  .db F3,D3,AS2,E2,E3,G3,E3,CS3,A2
  .db RET

_soler42_triangle_5:
  .db STI,7,SL4,D2,D3,F3,C2,C3,E3,AS1,AS2,D3,A1,A2,C3,G1,G2,AS2
  .db F1,F2,A2,E1,E2,G2,D1,D2,F2
  .db RET

_soler42_triangle_6:
  .db STI,7,SL4,A0,CS1,E1,A1,CS2,E2,A1,CS2,E2,A2,CS3,E3,A1,A2,B1
  .db CS2,A2,D2,E2,A2,F2,G2,A2,F2
  .db RET

_soler42_triangle_7:
  .db STI,9,SL4,E2,A2,D2,CS2,A2,D2,A1,A2,B1,CS2,A2,D2,E2,A2,F2
  .db G2,A2,F2,E2,A2,D2,CS2,A2,D2
  .db RET

_soler42_triangle_8:
  .db STI,7,SL4,A1,A2,CS3,A2,E2,CS2,D2,D3,F3,A3,F3,D3,G1,G2,AS2
  .db D3,AS2,G2,A1,A2,D3,A1,A2,CS3
  .db RET

_soler42_triangle_9:
  .db STI,7,SL4,D1,D2,F2,A2,F2,D2,A1,A2,B1,CS2,A2,D2,E2,A2,F2,G2
  .db A2,F2,E2,A2,D2,CS2,A2,D2
  .db RET

_soler42_triangle_10:
  .db STI,7,SL4,A1,A2,B1,CS2,A2,D2,E2,A2,F2,G2,A2,F2,E2,A2,D2,CS2
  .db A2,D2,A1,A2,CS3,A2,E2,CS2
  .db RET

_soler42_triangle_11:
  .db STI,7,SL4,D1,D2,F2,A2,F2,D2,G1,G2,AS2,D3,AS2,G2,A1,A2,D3
  .db A1,A2,CS3,D2,D3,F3,A3,F3,D3
  .db RET

_soler42_triangle_12:
  .db STI,7,SL4,G1,G2,AS2,D3,AS2,G2,A1,A2,D3,A1,A2,CS3,D2,A2,CS2
  .db D2,A2,CS2,D2,A2,CS2,D2,A2,CS2
  .db RET

_soler42_triangle_13:
  .db STI,7,SL4,D2,A2,CS2,D2,A2,CS2,D2,A2,CS2,D2,A2,CS2,D2,E2,D2
  .db C2,AS1,A1
  .db RET

_soler42_noise_0:
  .db STI,10,SL4,0,0,5,0,0,5,0,0,5,0,0,5,0,0,5,0,0,5,0,0,5,0,0,5
  .db RET

_soler42_noise_1:
  .db STI,10,SL4,0,0,5,0,0,5,0,0,5,0,0,5,0,0,5,0,0,5
  .db RET

_antagonist:
  .db 0
  .db 5
  .db 42
  .db 4
  .dw _antagonist_square1
  .dw _antagonist_square2
  .dw _antagonist_triangle
  .dw 0
  .dw 0

_antagonist_square1:
_antagonist_square1_loop:
  .db CAL,<(_antagonist_square1_0),>(_antagonist_square1_0)
  .db CAL,<(_antagonist_square1_0),>(_antagonist_square1_0)
  .db CAL,<(_antagonist_square1_1),>(_antagonist_square1_1)
  .db CAL,<(_antagonist_square1_1),>(_antagonist_square1_1)
  .db CAL,<(_antagonist_square1_2),>(_antagonist_square1_2)
  .db CAL,<(_antagonist_square1_2),>(_antagonist_square1_2)
  .db CAL,<(_antagonist_square1_3),>(_antagonist_square1_3)
  .db GOT
  .dw _antagonist_square1_loop

_antagonist_square2:
_antagonist_square2_loop:
  .db CAL,<(_antagonist_square2_0),>(_antagonist_square2_0)
  .db CAL,<(_antagonist_square2_1),>(_antagonist_square2_1)
  .db CAL,<(_antagonist_square2_2),>(_antagonist_square2_2)
  .db CAL,<(_antagonist_square2_2),>(_antagonist_square2_2)
  .db CAL,<(_antagonist_square2_3),>(_antagonist_square2_3)
  .db CAL,<(_antagonist_square2_3),>(_antagonist_square2_3)
  .db CAL,<(_antagonist_square2_4),>(_antagonist_square2_4)
  .db GOT
  .dw _antagonist_square2_loop

_antagonist_triangle:
_antagonist_triangle_loop:
  .db CAL,<(_antagonist_triangle_0),>(_antagonist_triangle_0)
  .db CAL,<(_antagonist_triangle_1),>(_antagonist_triangle_1)
  .db CAL,<(_antagonist_triangle_1),>(_antagonist_triangle_1)
  .db CAL,<(_antagonist_triangle_1),>(_antagonist_triangle_1)
  .db CAL,<(_antagonist_triangle_3),>(_antagonist_triangle_3)
  .db CAL,<(_antagonist_triangle_3),>(_antagonist_triangle_3)
  .db CAL,<(_antagonist_triangle_4),>(_antagonist_triangle_4)
  .db GOT
  .dw _antagonist_triangle_loop

_antagonist_square1_0:
  .db STI,13,SL4,C2,C3,B2,C3,G2,C3,D3,DS3,FS2,D3,C3,D3,F2,B2,A2
  .db B2
  .db RET

_antagonist_square1_1:
  .db STI,13,SL4,C3,C4,B3,C4,G3,C4,D4,DS4,FS3,D4,C4,D4,F3,B3,A3
  .db B3
  .db RET

_antagonist_square1_2:
  .db STI,13,SL2,C4,B3,C4,DS4,SLL,24,G4,SL2,D4,C4,D4,F4,SLL,24
  .db B4
  .db RET

_antagonist_square1_3:
  .db STI,13,SL2,GS4,G4,GS4,C5,SL0,DS5,SL8,F5,SL2,D5,DS5,D5,C5
  .db SLL,24,B4
  .db RET

_antagonist_square2_0:
  .db STI,14,SLL,64,C2
  .db RET

_antagonist_square2_1:
  .db STI,28,SLL,64,A0
  .db RET

_antagonist_square2_2:
  .db STI,13,SL2,C2,D2,DS2,G2,SLL,24,C3,SL2,FS2,G2,A2,C3,SL8,A3
  .db GS3,G3
  .db RET

_antagonist_square2_3:
  .db STI,28,SL8,A0,STI,13,SL2,G2,FS2,G2,C3,SL8,DS3,F3,SL0,D3,SL2
  .db G2,FS2,G2,B2,SL8,G3
  .db RET

_antagonist_square2_4:
  .db STI,13,SL8,GS2,SL2,C3,AS2,C3,DS3,SL0,GS3,SL2,F3,G3,F3,DS3
  .db SLL,24,D3
  .db RET

_antagonist_triangle_0:
  .db STI,14,SLL,64,C2
  .db RET

_antagonist_triangle_1:
  .db STI,13,SL0,C2,DS2,D2,G2
  .db RET

_antagonist_triangle_3:
  .db STI,13,SLL,32,C2,G2
  .db RET

_antagonist_triangle_4:
  .db STI,13,SLL,24,GS2,SL8,F2,SLL,24,G2,SL8,G1
  .db RET

_arps:
  .db 0
  .db 3
  .db 128
  .db 2
  .dw _arps_square1
  .dw _arps_square2
  .dw _arps_triangle
  .dw 0
  .dw 0

_arps_square1:
_arps_square1_loop:
  .db CAL,<(_arps_square1_0),>(_arps_square1_0)
  .db CAL,<(_arps_square1_1),>(_arps_square1_1)
  .db GOT
  .dw _arps_square1_loop

_arps_square2:
_arps_square2_loop:
  .db CAL,<(_arps_square2_0),>(_arps_square2_0)
  .db CAL,<(_arps_square2_1),>(_arps_square2_1)
  .db GOT
  .dw _arps_square2_loop

_arps_triangle:
_arps_triangle_loop:
  .db CAL,<(_arps_triangle_0),>(_arps_triangle_0)
  .db CAL,<(_arps_triangle_1),>(_arps_triangle_1)
  .db GOT
  .dw _arps_triangle_loop

_arps_square1_0:
  .db STI,18,SL0,A2,D3,STI,20,G2,C3
  .db RET

_arps_square1_1:
  .db STI,20,SL0,F2,STI,21,B2,STI,20,E2,STI,18,A2
  .db RET

_arps_square2_0:
  .db STI,16,SL2,A3,G3,F3,E3,G3,F3,E3,G3,SL0,F3,SL2,G3,F3,E3,D3
  .db F3,E3,D3,F3,SL0,E3
  .db RET

_arps_square2_1:
  .db STI,16,SL2,F3,E3,D3,C3,D3,C3,B2,A2,SL0,GS2,SL2,B2,A2,GS2
  .db FS2,GS2,E2,FS2,GS2,SL0,A2
  .db RET

_arps_triangle_0:
  .db STI,17,SL8,A2,C3,D3,A2,G2,B2,C3,G2
  .db RET

_arps_triangle_1:
  .db STI,17,SL8,F2,A2,B2,F2,E2,GS2,A2,E2
  .db RET

_noise_arps:
  .db 0
  .db 5
  .db 42
  .db 4
  .dw 0
  .dw 0
  .dw 0
  .dw _noise_arps_noise
  .dw 0

_noise_arps_noise:
_noise_arps_noise_loop:
  .db CAL,<(_noise_arps_noise_0),>(_noise_arps_noise_0)
  .db GOT
  .dw _noise_arps_noise_loop

_noise_arps_noise_0:
  .db STI,24,SL2,12,STI,25,13,STI,24,11,10,STI,26,SL4,9,STI,24
  .db SL2,11,10,12,STI,25,13,STI,24,11,10,STI,26,SL4,9,STI,24
  .db SL2,11,10,12,STI,25,13,STI,24,11,10,STI,26,SL4,9,STI,24
  .db SL2,11,10,12,STI,25,13,STI,24,11,10,STI,26,SL4,9,STI,24
  .db SL2,11,10
  .db RET

_sfx_shot:
  .db 0, 1
  .db 0, 1
  .dw 0
  .dw 0
  .dw 0
  .dw _sfx_shot_noise
  .dw 0

_sfx_shot_noise:
  .db CAL,<(_sfx_shot_noise_0),>(_sfx_shot_noise_0)
  .db TRM
_sfx_shot_noise_0:
  .db SLL,32,STI,6,8
  .db RET

_sfx_laser:
  .db 0, 1
  .db 0, 1
  .dw _sfx_laser_square1
  .dw 0
  .dw 0
  .dw 0
  .dw 0

_sfx_laser_square1:
  .db CAL,<(_sfx_laser_square1_0),>(_sfx_laser_square1_0)
  .db TRM
_sfx_laser_square1_0:
  .db SLL,16,STI,8,B7
  .db RET

_sfx_dpcm:
  .db 0, 1
  .db 0, 1
  .dw 0
  .dw 0
  .dw 0
  .dw 0
  .dw _sfx_dpcm_dpcm

_sfx_dpcm_dpcm:
  .db CAL,<(_sfx_dpcm_dpcm_0),>(_sfx_dpcm_dpcm_0)
  .db TRM
_sfx_dpcm_dpcm_0:
  .db SLL,8,STI,15,D3
  .db RET

_sfx_zap:
  .db 0, 1
  .db 0, 1
  .dw 0
  .dw 0
  .dw 0
  .dw _sfx_zap_noise
  .dw 0

_sfx_zap_noise:
  .db CAL,<(_sfx_zap_noise_0),>(_sfx_zap_noise_0)
  .db TRM
_sfx_zap_noise_0:
  .db SLL,16,STI,22,4
  .db RET

_sfx_collide:
  .db 0, 1
  .db 0, 1
  .dw 0
  .dw 0
  .dw 0
  .dw _sfx_collide_noise
  .dw 0

_sfx_collide_noise:
  .db CAL,<(_sfx_collide_noise_0),>(_sfx_collide_noise_0)
  .db TRM
_sfx_collide_noise_0:
  .db SLL,16,STI,23,0
  .db RET

