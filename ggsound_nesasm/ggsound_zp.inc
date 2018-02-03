sound_region: .rs 1
sound_disable_update: .rs 1
sound_local_byte_0: .rs 1
sound_local_byte_1: .rs 1
sound_local_byte_2: .rs 1

sound_local_word_0: .rs 2
sound_local_word_1: .rs 2
sound_local_word_2: .rs 2

sound_param_byte_0: .rs 1
sound_param_byte_1: .rs 1
sound_param_byte_2: .rs 1

sound_param_word_0: .rs 2
sound_param_word_1: .rs 2
sound_param_word_2: .rs 2
sound_param_word_3: .rs 2

addr_instruments: .rs 2
addr_note_table_lo:  .rs 2
addr_note_table_hi:  .rs 2
  ifdef FEATURE_DPCM
addr_dpcm_sample_table: .rs 2
addr_dpcm_note_to_sample_index: .rs 2
addr_dpcm_note_to_sample_length: .rs 2
addr_dpcm_note_to_loop_pitch_index: .rs 2
  endif

apu_data_ready: .rs 1
apu_square_1_old: .rs 1
apu_square_2_old: .rs 1
  ifdef FEATURE_DPCM
apu_dpcm_state: .rs 1
  endif

song_list_address: .rs 2
sfx_list_address: .rs 2
song_address: .rs 2
apu_register_sets: .rs 20
