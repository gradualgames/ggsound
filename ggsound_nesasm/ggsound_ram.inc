stream_flags:                  .rs MAX_STREAMS
stream_note:                   .rs MAX_STREAMS
stream_note_length_lo:         .rs MAX_STREAMS
stream_note_length_hi:         .rs MAX_STREAMS
stream_note_length_counter_lo: .rs MAX_STREAMS
stream_note_length_counter_hi: .rs MAX_STREAMS
stream_instrument_index:       .rs MAX_STREAMS
stream_volume_offset:          .rs MAX_STREAMS
  ifdef FEATURE_ARPEGGIOS
stream_arpeggio_index:         .rs MAX_STREAMS
stream_arpeggio_offset:        .rs MAX_STREAMS
  endif
stream_pitch_offset:           .rs MAX_STREAMS
stream_duty_offset:            .rs MAX_STREAMS

stream_channel:                .rs MAX_STREAMS
stream_channel_register_1:     .rs MAX_STREAMS
stream_channel_register_2:     .rs MAX_STREAMS
stream_channel_register_3:     .rs MAX_STREAMS
stream_channel_register_4:     .rs MAX_STREAMS

stream_read_address_lo:        .rs MAX_STREAMS
stream_read_address_hi:        .rs MAX_STREAMS
stream_return_address_lo:      .rs MAX_STREAMS
stream_return_address_hi:      .rs MAX_STREAMS

stream_tempo_counter_lo:       .rs MAX_STREAMS
stream_tempo_counter_hi:       .rs MAX_STREAMS
stream_tempo_lo:               .rs MAX_STREAMS
stream_tempo_hi:               .rs MAX_STREAMS
