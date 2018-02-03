;Expects sound_param_byte_0 to contain desired region (SOUND_REGION_NTSC, SOUND_REGION_PAL, SOUND_REGION_DENDY)
;Expects sound_param_word_0 to contain song list address.
;Expects sound_param_word_1 to contain sfx list address.
;Expects sound_param_word_2 to contain instrument list address.
;If FEATURE_DPCM is defined, then
;Expects sound_param_word_3 to contain dpcm sample address.
sound_initialize:

    lda #1
    sta sound_disable_update

    lda sound_param_byte_0
    sta sound_region

    ;Get songs address.
    lda sound_param_word_0
    sta song_list_address
    lda sound_param_word_0+1
    sta song_list_address+1

    ;Get sfx address.
    lda sound_param_word_1
    sta sfx_list_address
    lda sound_param_word_1+1
    sta sfx_list_address+1

    ;Get instruments address.
    lda sound_param_word_2
    sta addr_instruments
    lda sound_param_word_2+1
    sta addr_instruments+1

      ifdef FEATURE_DPCM
    ;Get dpcm samples list.
    ldy #0
    lda [sound_param_word_3],y
    sta addr_dpcm_sample_table
    iny
    lda [sound_param_word_3],y
    sta addr_dpcm_sample_table+1
    ;Get dpcm note to sample index table.
    iny
    lda [sound_param_word_3],y
    sta addr_dpcm_note_to_sample_index
    iny
    lda [sound_param_word_3],y
    sta addr_dpcm_note_to_sample_index+1
    ;Get dpcm note to sample length table.
    iny
    lda [sound_param_word_3],y
    sta addr_dpcm_note_to_sample_length
    iny
    lda [sound_param_word_3],y
    sta addr_dpcm_note_to_sample_length+1
    ;Get dpcm note to loop and pitch index table.
    iny
    lda [sound_param_word_3],y
    sta addr_dpcm_note_to_loop_pitch_index
    iny
    lda [sound_param_word_3],y
    sta addr_dpcm_note_to_loop_pitch_index+1
      endif

    ;Load PAL note table for PAL, NTSC for any other region.
    lda sound_region
    cmp #SOUND_REGION_PAL
    beq .pal
.nstc:
    lda #low(ntsc_note_table_lo)
    sta addr_note_table_lo
    lda #high(ntsc_note_table_lo)
    sta addr_note_table_lo+1
    lda #low(ntsc_note_table_hi)
    sta addr_note_table_hi
    lda #high(ntsc_note_table_hi)
    sta addr_note_table_hi+1
    jmp .done
.pal:
    lda #low(pal_note_table_lo)
    sta addr_note_table_lo
    lda #high(pal_note_table_lo)
    sta addr_note_table_lo+1
    lda #low(pal_note_table_hi)
    sta addr_note_table_hi
    lda #high(pal_note_table_hi)
    sta addr_note_table_hi+1
.done:

    ;Enable square 1, square 2, triangle and noise.
    lda #%00001111
    sta $4015

    ;Ensure no apu data is uploaded yet.
    lda #0
    sta apu_data_ready
      ifdef FEATURE_DPCM
    lda #DPCM_STATE_NOP
    sta apu_dpcm_state
      endif

    jsr sound_initialize_apu_buffer

    ;Make sure all streams are killed.
    jsr sound_stop

    dec sound_disable_update

    rts


;Kill all active streams and halt sound.
sound_stop:

    ;Save x.
    txa
    pha

    inc sound_disable_update

    ;Kill all streams.
    ldx #(MAX_STREAMS-1)
.loop:

    lda #0
    sta stream_flags,x

    dex
    bpl .loop

    jsr sound_initialize_apu_buffer

    dec sound_disable_update

    ;Restore x.
    pla
    tax

    rts

;Updates all playing streams, if actve. Streams 0 through MAX_MUSIC_STREAMS-1
;are assumed to be music streams. The last two streams, are assumed to be sound
;effect streams. When these are playing, their channel control registers are
;copied overtop what the corresponding music streams had written, so the sound
;effect streams essentially take over while they are playing. When the sound
;effect streams are finished, they signify their corresponding music stream
;(via the TRM callback) to silence themselves until the next note to avoid
;ugly volume envelope transitions. DPCM is handled within this framework by
;a state machine that handles sound effect priority.
sound_update:

    ;Save regs.
    txa
    pha

    ;Signal apu data not ready.
    lda #0
    sta apu_data_ready

    ;First copy all music streams.
    ldx #0
.song_stream_register_copy_loop:

    ;Load whether this stream is active.
    lda stream_flags,x
    and #STREAM_ACTIVE_TEST
    beq .song_stream_not_active

    ;Update the stream.
    jsr stream_update

    ;Load channel number.
    lda stream_channel,x
    ;Multiply by four to get location within apu_register_sets.
    asl a
    asl a
    tay
    ;Copy the registers over.
    lda stream_channel_register_1,x
    sta apu_register_sets,y
    lda stream_channel_register_2,x
    sta apu_register_sets+1,y
    lda stream_channel_register_3,x
    sta apu_register_sets+2,y
    lda stream_channel_register_4,x
    sta apu_register_sets+3,y
.song_stream_not_active:

    inx
    cpx #MAX_MUSIC_STREAMS
    bne .song_stream_register_copy_loop
.do_not_update_music:

    ldx #soundeffect_one
.sfx_stream_register_copy_loop:

    ;Load whether this stream is active.
    lda stream_flags,x
    and #STREAM_ACTIVE_TEST
    beq .sfx_stream_not_active

    ;Update the stream.
    jsr stream_update

    ;Load channel number
    lda stream_channel,x
    ;Multiply by four to get location within apu_register_sets.
    asl a
    asl a
    tay
    ;Copy the registers over.
    lda stream_channel_register_1,x
    sta apu_register_sets,y
    lda stream_channel_register_2,x
    sta apu_register_sets+1,y
    lda stream_channel_register_3,x
    sta apu_register_sets+2,y
    lda stream_channel_register_4,x
    sta apu_register_sets+3,y
.sfx_stream_not_active:

    inx
    cpx #MAX_STREAMS
    bne .sfx_stream_register_copy_loop

    ;Signial apu data ready.
    lda #1
    sta apu_data_ready

    ;Restore regs.
    pla
    tax

    rts

;Note table borrowed from periods.s provided by FamiTracker's NSF driver.
ntsc_note_table_lo:
    .db low($0D5B), low($0C9C), low($0BE6), low($0B3B), low($0A9A), low($0A01), low($0972), low($08EA), low($086A), low($07F1), low($077F), low($0713)
    .db low($06AD), low($064D), low($05F3), low($059D), low($054C), low($0500), low($04B8), low($0474), low($0434), low($03F8), low($03BF), low($0389)
    .db low($0356), low($0326), low($02F9), low($02CE), low($02A6), low($0280), low($025C), low($023A), low($021A), low($01FB), low($01DF), low($01C4)
    .db low($01AB), low($0193), low($017C), low($0167), low($0152), low($013F), low($012D), low($011C), low($010C), low($00FD), low($00EF), low($00E1)
    .db low($00D5), low($00C9), low($00BD), low($00B3), low($00A9), low($009F), low($0096), low($008E), low($0086), low($007E), low($0077), low($0070)
    .db low($006A), low($0064), low($005E), low($0059), low($0054), low($004F), low($004B), low($0046), low($0042), low($003F), low($003B), low($0038)
    .db low($0034), low($0031), low($002F), low($002C), low($0029), low($0027), low($0025), low($0023), low($0021), low($001F), low($001D), low($001B)
    .db low($001A), low($0018), low($0017), low($0015), low($0014), low($0013), low($0012), low($0011), low($0010), low($000F), low($000E), low($000D)

ntsc_note_table_hi:
    .db high($0D5B), high($0C9C), high($0BE6), high($0B3B), high($0A9A), high($0A01), high($0972), high($08EA), high($086A), high($07F1), high($077F), high($0713)
    .db high($06AD), high($064D), high($05F3), high($059D), high($054C), high($0500), high($04B8), high($0474), high($0434), high($03F8), high($03BF), high($0389)
    .db high($0356), high($0326), high($02F9), high($02CE), high($02A6), high($0280), high($025C), high($023A), high($021A), high($01FB), high($01DF), high($01C4)
    .db high($01AB), high($0193), high($017C), high($0167), high($0152), high($013F), high($012D), high($011C), high($010C), high($00FD), high($00EF), high($00E1)
    .db high($00D5), high($00C9), high($00BD), high($00B3), high($00A9), high($009F), high($0096), high($008E), high($0086), high($007E), high($0077), high($0070)
    .db high($006A), high($0064), high($005E), high($0059), high($0054), high($004F), high($004B), high($0046), high($0042), high($003F), high($003B), high($0038)
    .db high($0034), high($0031), high($002F), high($002C), high($0029), high($0027), high($0025), high($0023), high($0021), high($001F), high($001D), high($001B)
    .db high($001A), high($0018), high($0017), high($0015), high($0014), high($0013), high($0012), high($0011), high($0010), high($000F), high($000E), high($000D)

pal_note_table_lo:
    .db low($0C68), low($0BB6), low($0B0E), low($0A6F), low($09D9), low($094B), low($08C6), low($0848), low($07D1), low($0760), low($06F6), low($0692)
    .db low($0634), low($05DB), low($0586), low($0537), low($04EC), low($04A5), low($0462), low($0423), low($03E8), low($03B0), low($037B), low($0349)
    .db low($0319), low($02ED), low($02C3), low($029B), low($0275), low($0252), low($0231), low($0211), low($01F3), low($01D7), low($01BD), low($01A4)
    .db low($018C), low($0176), low($0161), low($014D), low($013A), low($0129), low($0118), low($0108), low($00F9), low($00EB), low($00DE), low($00D1)
    .db low($00C6), low($00BA), low($00B0), low($00A6), low($009D), low($0094), low($008B), low($0084), low($007C), low($0075), low($006E), low($0068)
    .db low($0062), low($005D), low($0057), low($0052), low($004E), low($0049), low($0045), low($0041), low($003E), low($003A), low($0037), low($0034)
    .db low($0031), low($002E), low($002B), low($0029), low($0026), low($0024), low($0022), low($0020), low($001E), low($001D), low($001B), low($0019)
    .db low($0018), low($0016), low($0015), low($0014), low($0013), low($0012), low($0011), low($0010), low($000F), low($000E), low($000D), low($000C)

pal_note_table_hi:
    .db high($0C68), high($0BB6), high($0B0E), high($0A6F), high($09D9), high($094B), high($08C6), high($0848), high($07D1), high($0760), high($06F6), high($0692)
    .db high($0634), high($05DB), high($0586), high($0537), high($04EC), high($04A5), high($0462), high($0423), high($03E8), high($03B0), high($037B), high($0349)
    .db high($0319), high($02ED), high($02C3), high($029B), high($0275), high($0252), high($0231), high($0211), high($01F3), high($01D7), high($01BD), high($01A4)
    .db high($018C), high($0176), high($0161), high($014D), high($013A), high($0129), high($0118), high($0108), high($00F9), high($00EB), high($00DE), high($00D1)
    .db high($00C6), high($00BA), high($00B0), high($00A6), high($009D), high($0094), high($008B), high($0084), high($007C), high($0075), high($006E), high($0068)
    .db high($0062), high($005D), high($0057), high($0052), high($004E), high($0049), high($0045), high($0041), high($003E), high($003A), high($0037), high($0034)
    .db high($0031), high($002E), high($002B), high($0029), high($0026), high($0024), high($0022), high($0020), high($001E), high($001D), high($001B), high($0019)
    .db high($0018), high($0016), high($0015), high($0014), high($0013), high($0012), high($0011), high($0010), high($000F), high($000E), high($000D), high($000C)

;Maps NTSC to NTSC tempo, maps PAL and Dendy to
;faster PAL tempo in song and sfx headers.
sound_region_to_tempo_offset:
    .db 0, 2, 2

channel_callback_table_lo:
    .db low(square_1_play_note)
    .db low(square_2_play_note)
    .db low(triangle_play_note)
    .db low(noise_play_note)
      ifdef FEATURE_DPCM
    .db low(dpcm_play_note)
      endif

channel_callback_table_hi:
    .db high(square_1_play_note)
    .db high(square_2_play_note)
    .db high(triangle_play_note)
    .db high(noise_play_note)
      ifdef FEATURE_DPCM
    .db high(dpcm_play_note)
      endif

stream_callback_table_lo:
    .db low(stream_set_length_s)
    .db low(stream_set_length_s)
    .db low(stream_set_length_s)
    .db low(stream_set_length_s)
    .db low(stream_set_length_s)
    .db low(stream_set_length_s)
    .db low(stream_set_length_s)
    .db low(stream_set_length_s)
    .db low(stream_set_length_s)
    .db low(stream_set_length_s)
    .db low(stream_set_length_s)
    .db low(stream_set_length_s)
    .db low(stream_set_length_s)
    .db low(stream_set_length_s)
    .db low(stream_set_length_s)
    .db low(stream_set_length_s)
    .db low(stream_set_length_lo)
    .db low(stream_set_length_hi)
    .db low(stream_set_instrument)
    .db low(stream_goto)
    .db low(stream_call)
    .db low(stream_return)
    .db low(stream_terminate)

stream_callback_table_hi:
    .db high(stream_set_length_s)
    .db high(stream_set_length_s)
    .db high(stream_set_length_s)
    .db high(stream_set_length_s)
    .db high(stream_set_length_s)
    .db high(stream_set_length_s)
    .db high(stream_set_length_s)
    .db high(stream_set_length_s)
    .db high(stream_set_length_s)
    .db high(stream_set_length_s)
    .db high(stream_set_length_s)
    .db high(stream_set_length_s)
    .db high(stream_set_length_s)
    .db high(stream_set_length_s)
    .db high(stream_set_length_s)
    .db high(stream_set_length_s)
    .db high(stream_set_length_lo)
    .db high(stream_set_length_hi)
    .db high(stream_set_instrument)
    .db high(stream_goto)
    .db high(stream_call)
    .db high(stream_return)
    .db high(stream_terminate)

  ifdef FEATURE_ARPEGGIOS

arpeggio_callback_table_lo:
    .db low((arpeggio_absolute-1))
    .db low((arpeggio_fixed-1))
    .db low((arpeggio_relative-1))

arpeggio_callback_table_hi:
    .db high((arpeggio_absolute-1))
    .db high((arpeggio_fixed-1))
    .db high((arpeggio_relative-1))

  endif

;****************************************************************
;These callbacks are all note playback and only execute once per
;frame.
;****************************************************************

square_1_play_note:

    ;Load instrument index.
    ldy stream_instrument_index,x
    ;Load instrument address.
    lda [addr_instruments],y
    sta sound_local_word_0
    iny
    lda [addr_instruments],y
    sta sound_local_word_0+1

    ;Set negate flag for sweep unit.
    lda #$08
    sta stream_channel_register_2,x

      ifdef FEATURE_ARPEGGIOS

    ;Get arpeggio type.
    ldy #instrument_header_arpeggio_type
    lda [sound_local_word_0],y
    tay

    ;Get the address.
    lda #high((.return_from_arpeggio_callback-1))
    pha
    lda #low((.return_from_arpeggio_callback-1))
    pha
    lda arpeggio_callback_table_hi,y
    pha
    lda arpeggio_callback_table_lo,y
    pha
    rts
.return_from_arpeggio_callback:

      else

    ldy stream_note,x

      endif

    ;Skip loading note pitch if already loaded, to allow envelopes
    ;to modify the pitch.
    lda stream_flags,x
    and #STREAM_PITCH_LOADED_TEST
    bne .pitch_already_loaded
    lda stream_flags,x
    ora #STREAM_PITCH_LOADED_SET
    sta stream_flags,x
    ;Load low byte of note.
    lda [addr_note_table_lo],y
    ;Store in low 8 bits of pitch.
    sta stream_channel_register_3,x
    ;Load high byte of note.
    lda [addr_note_table_hi],y
    sta stream_channel_register_4,x
.pitch_already_loaded:

    lda stream_flags,x
    and #STREAM_SILENCE_TEST
    bne .silence_until_note
.note_not_silenced:

    ;Load volume offset.
    ldy stream_volume_offset,x

    ;Load volume value for this frame, branch if opcode.
    lda [sound_local_word_0],y
    cmp #ENV_STOP
    beq .volume_stop
    cmp #ENV_LOOP
    bne .skip_volume_loop

    ;We hit a loop opcode, advance envelope index and load loop point.
    iny
    lda [sound_local_word_0],y
    sta stream_volume_offset,x
    tay

.skip_volume_loop:

    ;Initialize channel control register with envelope decay and
    ;length counter disabled but preserving current duty cycle.
    lda stream_channel_register_1,x
    and #%11000000
    ora #%00110000

    ;Load current volume value.
    ora [sound_local_word_0],y
    sta stream_channel_register_1,x

    inc stream_volume_offset,x

.volume_stop:

    jmp .done
.silence_until_note:
    lda stream_channel_register_1,x
    and #%11000000
    ora #%00110000
    sta stream_channel_register_1,x

.done:

    ;Load pitch offset.
    ldy stream_pitch_offset,x

    ;Load pitch value.
    lda [sound_local_word_0],y
    cmp #ENV_STOP
    beq .pitch_stop
    cmp #ENV_LOOP
    bne .skip_pitch_loop

    ;We hit a loop opcode, advance envelope index and load loop point.
    iny
    lda [sound_local_word_0],y
    sta stream_pitch_offset,x
    tay

.skip_pitch_loop:

    ;Test sign.
    lda [sound_local_word_0],y
    bmi .pitch_delta_negative
.pitch_delta_positive:

    clc
    lda stream_channel_register_3,x
    adc [sound_local_word_0],y
    sta stream_channel_register_3,x
    lda stream_channel_register_4,x
    adc #0
    sta stream_channel_register_4,x

    jmp .pitch_delta_test_done

.pitch_delta_negative:

    clc
    lda stream_channel_register_3,x
    adc [sound_local_word_0],y
    sta stream_channel_register_3,x
    lda stream_channel_register_4,x
    adc #$ff
    sta stream_channel_register_4,x

.pitch_delta_test_done:

    ;Move pitch offset along.
    inc stream_pitch_offset,x

.pitch_stop:

.duty_code:

    ldy stream_duty_offset,x

    ;Load duty value for this frame, but hard code flags and duty for now.
    lda [sound_local_word_0],y
    cmp #DUTY_ENV_STOP
    beq .duty_stop
    cmp #DUTY_ENV_LOOP
    bne .skip_duty_loop

    ;We hit a loop opcode, advance envelope index and load loop point.
    iny
    lda [sound_local_word_0],y
    sta stream_duty_offset,x
    tay

.skip_duty_loop:

    ;Or the duty value into the register.
    lda stream_channel_register_1,x
    and #%00111111
    ora [sound_local_word_0],y
    sta stream_channel_register_1,x

    ;Move duty offset along.
    inc stream_duty_offset,x

.duty_stop:

    rts


square_2_play_note = square_1_play_note

triangle_play_note:

    ;Load instrument index.
    ldy stream_instrument_index,x
    ;Load instrument address.
    lda [addr_instruments],y
    sta sound_local_word_0
    iny
    lda [addr_instruments],y
    sta sound_local_word_0+1

      ifdef FEATURE_ARPEGGIOS
    ;Get arpeggio type.
    ldy #instrument_header_arpeggio_type
    lda [sound_local_word_0],y
    tay

    ;Get the address.
    lda #high((.return_from_arpeggio_callback-1))
    pha
    lda #low((.return_from_arpeggio_callback-1))
    pha
    lda arpeggio_callback_table_hi,y
    pha
    lda arpeggio_callback_table_lo,y
    pha
    rts
.return_from_arpeggio_callback:

      else

    ldy stream_note,x

      endif

    ;Skip loading note pitch if already loaded, to allow envelopes
    ;to modify the pitch.
    lda stream_flags,x
    and #STREAM_PITCH_LOADED_TEST
    bne .pitch_already_loaded
    lda stream_flags,x
    ora #STREAM_PITCH_LOADED_SET
    sta stream_flags,x
    ;Load low byte of note.
    lda [addr_note_table_lo],y
    ;Store in low 8 bits of pitch.
    sta stream_channel_register_3,x
    ;Load high byte of note.
    lda [addr_note_table_hi],y
    sta stream_channel_register_4,x
.pitch_already_loaded:

    ;Load volume offset.
    ldy stream_volume_offset,x

    ;Load volume value for this frame, but hard code flags and duty for now.
    lda [sound_local_word_0],y
    cmp #ENV_STOP
    beq .volume_stop
    cmp #ENV_LOOP
    bne .skip_volume_loop

    ;We hit a loop opcode, advance envelope index and load loop point.
    iny
    lda [sound_local_word_0],y
    sta stream_volume_offset,x
    tay

.skip_volume_loop:

    lda #%10000000
    ora [sound_local_word_0],y
    sta stream_channel_register_1,x

    inc stream_volume_offset,x

.volume_stop:

    ;Load pitch offset.
    ldy stream_pitch_offset,x

    ;Load pitch value.
    lda [sound_local_word_0],y
    cmp #ENV_STOP
    beq .pitch_stop
    cmp #ENV_LOOP
    bne .skip_pitch_loop

    ;We hit a loop opcode, advance envelope index and load loop point.
    iny
    lda [sound_local_word_0],y
    sta stream_pitch_offset,x
    tay

.skip_pitch_loop:

    ;Test sign.
    lda [sound_local_word_0],y
    bmi .pitch_delta_negative
.pitch_delta_positive:

    clc
    lda stream_channel_register_3,x
    adc [sound_local_word_0],y
    sta stream_channel_register_3,x
    lda stream_channel_register_4,x
    adc #0
    sta stream_channel_register_4,x

    jmp .pitch_delta_test_done

.pitch_delta_negative:

    clc
    lda stream_channel_register_3,x
    adc [sound_local_word_0],y
    sta stream_channel_register_3,x
    lda stream_channel_register_4,x
    adc #$ff
    sta stream_channel_register_4,x

.pitch_delta_test_done:

    ;Move pitch offset along.
    inc stream_pitch_offset,x

.pitch_stop:

    rts


noise_play_note:

    ;Load instrument index.
    ldy stream_instrument_index,x
    ;Load instrument address.
    lda [addr_instruments],y
    sta sound_local_word_0
    iny
    lda [addr_instruments],y
    sta sound_local_word_0+1

      ifdef FEATURE_ARPEGGIOS
    ;Get arpeggio type.
    ldy #instrument_header_arpeggio_type
    lda [sound_local_word_0],y
    tay

    ;Get the address.
    lda #high((.return_from_arpeggio_callback-1))
    pha
    lda #low((.return_from_arpeggio_callback-1))
    pha
    lda arpeggio_callback_table_hi,y
    pha
    lda arpeggio_callback_table_lo,y
    pha
    rts
.return_from_arpeggio_callback:

      else

    ldy stream_note,x

      endif

    tya
    and #%01111111
    sta sound_local_byte_0

    ;Skip loading note pitch if already loaded, to allow envelopes
    ;to modify the pitch.
    lda stream_flags,x
    and #STREAM_PITCH_LOADED_TEST
    bne .pitch_already_loaded
    lda stream_flags,x
    ora #STREAM_PITCH_LOADED_SET
    sta stream_flags,x
    lda stream_channel_register_3,x
    and #%10000000
    ora sound_local_byte_0
    sta stream_channel_register_3,x
.pitch_already_loaded:

    ;Load volume offset.
    ldy stream_volume_offset,x

    ;Load volume value for this frame, hard code disable flags.
    lda [sound_local_word_0],y
    cmp #ENV_STOP
    beq .volume_stop
    cmp #ENV_LOOP
    bne .skip_volume_loop

    ;We hit a loop opcode, advance envelope index and load loop point.
    iny
    lda [sound_local_word_0],y
    sta stream_volume_offset,x
    tay

.skip_volume_loop:

    lda #%00110000
    ora [sound_local_word_0],y
    sta stream_channel_register_1,x

    ;Move volume offset along.
    inc stream_volume_offset,x
.volume_stop:

    ;Load pitch offset.
    ldy stream_pitch_offset,x

    ;Load pitch value.
    lda [sound_local_word_0],y
    cmp #ENV_STOP
    beq .pitch_stop
    cmp #ENV_LOOP
    bne .skip_pitch_loop

    ;We hit a loop opcode, advance envelope index and load loop point.
    iny
    lda [sound_local_word_0],y
    sta stream_pitch_offset,x
    tay

.skip_pitch_loop:

    ;Save off current duty bit.
    lda stream_channel_register_3,x
    and #%10000000
    sta sound_local_byte_0

    ;Advance pitch regardless of duty bit.
    clc
    lda stream_channel_register_3,x
    adc [sound_local_word_0],y
    and #%00001111
    ;Get duty bit back in.
    ora sound_local_byte_0
    sta stream_channel_register_3,x

    ;Move pitch offset along.
    inc stream_pitch_offset,x

.pitch_stop:

.duty_code:
    ;Load duty offset.
    ldy stream_duty_offset,x

    ;Load duty value for this frame, but hard code flags and duty for now.
    lda [sound_local_word_0],y
    cmp #DUTY_ENV_STOP
    beq .duty_stop
    cmp #DUTY_ENV_LOOP
    bne .skip_duty_loop

    ;We hit a loop opcode, advance envelope index and load loop point.
    iny
    lda [sound_local_word_0],y
    sta stream_duty_offset,x
    tay

.skip_duty_loop:

    ;We only care about bit 6 for noise, and we want it in bit 7 position.
    lda [sound_local_word_0],y
    asl a
    sta sound_local_byte_0

    lda stream_channel_register_3,x
    and #%01111111
    ora sound_local_byte_0
    sta stream_channel_register_3,x

    ;Move duty offset along.
    inc stream_duty_offset,x

.duty_stop:

    rts


  ifdef FEATURE_DPCM
dpcm_play_note:

    ;Determine if silence until note is set.
    lda stream_flags,x
    and #STREAM_SILENCE_TEST
    bne .note_already_played

    ;Load note index.
    ldy stream_note,x

    ;Get sample index.
    lda [addr_dpcm_note_to_sample_index],y
    bmi .no_sample

    ;This sample index looks up into addr_dpcm_sample_table.
    tay
    lda [addr_dpcm_sample_table],y
    sta stream_channel_register_3,x

    ;Get loop and pitch from dpcm_note_to_loop_pitch_index table.
    ldy stream_note,x
    lda [addr_dpcm_note_to_loop_pitch_index],y
    sta stream_channel_register_1,x

    ;Get sample length.
    lda [addr_dpcm_note_to_sample_length],y
    sta stream_channel_register_4,x

    ;Upload the dpcm data if sfx commands are not overriding.
    lda apu_dpcm_state
    cmp #DPCM_STATE_WAIT
    beq .skip
    cmp #DPCM_STATE_UPLOAD_THEN_WAIT
    beq .skip
    lda #DPCM_STATE_UPLOAD
    sta apu_dpcm_state
.skip:

    lda stream_flags,x
    ora #STREAM_SILENCE_SET
    sta stream_flags,x
.no_sample:
.note_already_played:

    rts

  endif

  ifdef FEATURE_ARPEGGIOS

arpeggio_absolute:

    ldy stream_arpeggio_offset,x

    lda [sound_local_word_0],y
    cmp #ENV_STOP
    beq .arpeggio_stop
    cmp #ENV_LOOP
    beq .arpeggio_loop
.arpeggio_play:

    ;We're changing notes.
    lda stream_flags,x
    and #STREAM_PITCH_LOADED_CLEAR
    sta stream_flags,x

    ;Load the current arpeggio value and add it to current note.
    clc
    lda [sound_local_word_0],y
    adc stream_note,x
    tay
    ;Advance arpeggio offset.
    inc stream_arpeggio_offset,x

    jmp .done
.arpeggio_stop:

    ;Just load the current note.
    ldy stream_note,x

    jmp .done
.arpeggio_loop:

    ;We hit a loop opcode, advance envelope index and load loop point.
    iny
    lda [sound_local_word_0],y
    sta stream_arpeggio_offset,x
    tay

    ;We're changing notes.
    lda stream_flags,x
    and #STREAM_PITCH_LOADED_CLEAR
    sta stream_flags,x

    ;Load the current arpeggio value and add it to current note.
    clc
    lda [sound_local_word_0],y
    adc stream_note,x
    tay
    ;Advance arpeggio offset.
    inc stream_arpeggio_offset,x
.done:

    rts


arpeggio_fixed:

    ldy stream_arpeggio_offset,x

    lda [sound_local_word_0],y
    cmp #ENV_STOP
    beq .arpeggio_stop
    cmp #ENV_LOOP
    beq .arpeggio_loop
.arpeggio_play:

    ;We're changing notes.
    lda stream_flags,x
    and #STREAM_PITCH_LOADED_CLEAR
    sta stream_flags,x

    ;Load the current arpeggio value and use it as the current note.
    lda [sound_local_word_0],y
    ;sta stream_note,x
    tay
    ;Advance arpeggio offset.
    inc stream_arpeggio_offset,x

    jmp .done
.arpeggio_stop:

    ;When a fixed arpeggio is done, we're changing notes to the
    ;currently playing note. (This is FamiTracker's behavior)
    ;However, we only do this if we're stopping at any point other
    ;than one, which indicates an arpeggio did in fact execute.
    lda stream_arpeggio_offset,x
    cmp #1
    beq .skip_clear_pitch_loaded
    lda stream_flags,x
    and #STREAM_PITCH_LOADED_CLEAR
    sta stream_flags,x
.skip_clear_pitch_loaded:

    ;Just load the current note.
    ldy stream_note,x

    jmp .done
.arpeggio_loop:

    ;We hit a loop opcode, advance envelope index and load loop point.
    iny
    lda [sound_local_word_0],y
    sta stream_arpeggio_offset,x
    tay

    ;We're changing notes.
    lda stream_flags,x
    and #STREAM_PITCH_LOADED_CLEAR
    sta stream_flags,x

    ;Load the current arpeggio value and use it as the current note.
    lda [sound_local_word_0],y
    tay
    ;Advance arpeggio offset.
    inc stream_arpeggio_offset,x
.done:

    rts


arpeggio_relative:

    ldy stream_arpeggio_offset,x

    lda [sound_local_word_0],y
    cmp #ENV_STOP
    beq .arpeggio_stop
    cmp #ENV_LOOP
    beq .arpeggio_loop
.arpeggio_play:

    ;We're changing notes.
    lda stream_flags,x
    and #STREAM_PITCH_LOADED_CLEAR
    sta stream_flags,x

    ;Load the current arpeggio value and add it to current note.
    clc
    lda [sound_local_word_0],y
    adc stream_note,x
    cmp #HIGHEST_NOTE
    bmi .skip
    lda #HIGHEST_NOTE
.skip:
    sta stream_note,x
    tay
    ;Advance arpeggio offset.
    inc stream_arpeggio_offset,x

    jmp .done
.arpeggio_stop:

    ;Just load the current note.
    ldy stream_note,x

    jmp .done
.arpeggio_loop:

    ;We hit a loop opcode, advance envelope index and load loop point.
    iny
    lda [sound_local_word_0],y
    sta stream_arpeggio_offset,x
    tay

    ;We're changing notes.
    lda stream_flags,x
    and #STREAM_PITCH_LOADED_CLEAR
    sta stream_flags,x

    ;Load the current arpeggio value and add it to current note.
    clc
    lda [sound_local_word_0],y
    adc stream_note,x
    tay
    ;Advance arpeggio offset.
    inc stream_arpeggio_offset,x
.done:

    rts


  endif

;****************************************************************
;These callbacks are all stream control and execute in sequence
;until exhausted.
;****************************************************************

stream_set_instrument:

    advance_stream_read_address
    ;Load byte at read address.
    lda stream_read_address_lo,x
    sta sound_local_word_0
    lda stream_read_address_hi,x
    sta sound_local_word_0+1
    ldy #0
    lda [sound_local_word_0],y
    asl a
    sta stream_instrument_index,x
    tay

    lda [addr_instruments],y
    sta sound_local_word_0
    iny
    lda [addr_instruments],y
    sta sound_local_word_0+1

    ldy #0
    lda [sound_local_word_0],y
    sta stream_volume_offset,x
    iny
    lda [sound_local_word_0],y
    sta stream_pitch_offset,x
    iny
    lda [sound_local_word_0],y
    sta stream_duty_offset,x
      ifdef FEATURE_ARPEGGIOS
    iny
    lda [sound_local_word_0],y
    sta stream_arpeggio_offset,x
      endif

    rts

;Set a standard note length. This callback works for a set
;of opcodes which can set the note length for values 1 through 16.
;This helps reduce ROM space required by songs.
stream_set_length_s:

    ;determine note length from opcode
    sec
    lda stream_note,x
    sbc #OPCODES_BASE
    clc
    adc #1
    sta stream_note_length_lo,x
    sta stream_note_length_counter_lo,x
    lda #0
    sta stream_note_length_hi,x
    sta stream_note_length_counter_hi,x

    rts


stream_set_length_lo:

    advance_stream_read_address
    ;Load byte at read address.
    lda stream_read_address_lo,x
    sta sound_local_word_0
    lda stream_read_address_hi,x
    sta sound_local_word_0+1
    ldy #0
    lda [sound_local_word_0],y
    sta stream_note_length_lo,x
    sta stream_note_length_counter_lo,x
    lda #0
    sta stream_note_length_hi,x
    sta stream_note_length_counter_hi,x

    rts

stream_set_length_hi:

    advance_stream_read_address
    ;Load byte at read address.
    lda stream_read_address_lo,x
    sta sound_local_word_0
    lda stream_read_address_hi,x
    sta sound_local_word_0+1
    ldy #0
    lda [sound_local_word_0],y
    sta stream_note_length_hi,x
    sta stream_note_length_counter_hi,x

    rts

;This opcode loops to the beginning of the stream. It expects the two
;following bytes to contain the address to loop to.
stream_goto:

    advance_stream_read_address
    ;Load byte at read address.
    lda stream_read_address_lo,x
    sta sound_local_word_0
    lda stream_read_address_hi,x
    sta sound_local_word_0+1
    ldy #0
    lda [sound_local_word_0],y
    sta stream_read_address_lo,x
    ldy #1
    lda [sound_local_word_0],y
    sta stream_read_address_hi,x

    sec
    lda stream_read_address_lo,x
    sbc #1
    sta stream_read_address_lo,x
    lda stream_read_address_hi,x
    sbc #0
    sta stream_read_address_hi,x

    rts


;This opcode stores the current stream read address in
;return_stream_read_address (lo and hi) and then reads the
;following two bytes and stores them in the current stream read address.
;It is assumed that a RET opcode will be encountered in the stream which
;is being called, which will restore the return stream read address.
;This is how the engine can allow repeated chunks of a song.
stream_call:

    advance_stream_read_address
    lda stream_read_address_lo,x
    sta sound_local_word_0
    lda stream_read_address_hi,x
    sta sound_local_word_0+1

    ;Retrieve lo byte of destination address from first CAL parameter.
    ldy #0
    lda [sound_local_word_0],y
    sta sound_local_word_1
    iny
    ;Retrieve hi byte of destination address from second CAL parameter.
    lda [sound_local_word_0],y
    sta sound_local_word_1+1

    advance_stream_read_address

    ;Now store current stream read address in stream's return address.
    lda stream_read_address_lo,x
    sta stream_return_address_lo,x
    lda stream_read_address_hi,x
    sta stream_return_address_hi,x

    ;Finally, transfer address we are calling to current read address.
    sec
    lda sound_local_word_1
    sbc #low(1)
    sta stream_read_address_lo,x
    lda sound_local_word_1+1
    sbc #high(1)
    sta stream_read_address_hi,x

    rts


;This opcode restores the stream_return_address to the stream_read_address
;and continues where it left off.
stream_return:

    lda stream_return_address_lo,x
    sta stream_read_address_lo,x
    lda stream_return_address_hi,x
    sta stream_read_address_hi,x

    rts


;This opcode returns from the parent caller by popping two bytes off
;the stack and then doing rts.
stream_terminate:

    ;Set the current stream to inactive.
    lda #0
    sta stream_flags,x

    cpx #soundeffect_one
    bmi .not_sound_effect

    ;Load channel this sfx writes to.
    ldy stream_channel,x
    ;Use this as index into streams to tell corresponding music channel
    ;to silence until the next note.
    lda stream_flags,y
    ora #STREAM_SILENCE_SET
    sta stream_flags,y

.not_sound_effect:

    ;Pop current address off the stack.
    pla
    pla

    ;Return from parent caller.
    rts

;Expects sound_param_byte_0 to contain index of a song in song_list.
;Assumed to be four addresses to initialize streams on, for square1, square2, triangle and noise.
;Any addresses found to be zero will not initialize that channel.
play_song:

    ;Save index regs.
    tya
    pha
    txa
    pha

    inc sound_disable_update

    ;Select header tempo offset based on region.
    ldx sound_region
    lda sound_region_to_tempo_offset,x
    sta sound_local_byte_0

    ;Get song address from song list.
    lda sound_param_byte_0
    asl a
    tay
    lda [song_list_address],y
    sta song_address
    iny
    lda [song_list_address],y
    sta song_address+1

    ;Load square 1 stream.
    ldx #0
    jsr stream_stop

    ldy #track_header_square1_stream_address
    lda [song_address],y
    sta sound_param_word_0
    iny
    lda [song_address],y
    beq .no_square_1
    sta sound_param_word_0+1

    lda #0
    sta sound_param_byte_0

    lda #0
    sta sound_param_byte_1

    jsr stream_initialize

    clc
    lda #track_header_ntsc_tempo_lo
    adc sound_local_byte_0
    tay
    lda [song_address],y
    sta stream_tempo_lo,x
    sta stream_tempo_counter_lo,x

    iny
    lda [song_address],y
    sta stream_tempo_hi,x
    sta stream_tempo_counter_hi,x
.no_square_1:

    ;Load square 2 stream.
    ldx #1
    jsr stream_stop

    ldy #track_header_square2_stream_address
    lda [song_address],y
    sta sound_param_word_0
    iny
    lda [song_address],y
    beq .no_square_2
    sta sound_param_word_0+1

    lda #1
    sta sound_param_byte_0

    lda #1
    sta sound_param_byte_1

    jsr stream_initialize

    clc
    lda #track_header_ntsc_tempo_lo
    adc sound_local_byte_0
    tay
    lda [song_address],y
    sta stream_tempo_lo,x
    sta stream_tempo_counter_lo,x

    iny
    lda [song_address],y
    sta stream_tempo_hi,x
    sta stream_tempo_counter_hi,x
.no_square_2:

    ;Load triangle stream.
    ldx #2
    jsr stream_stop

    ldy #track_header_triangle_stream_address
    lda [song_address],y
    sta sound_param_word_0
    iny
    lda [song_address],y
    beq .no_triangle
    sta sound_param_word_0+1

    lda #2
    sta sound_param_byte_0

    lda #2
    sta sound_param_byte_1

    jsr stream_initialize

    clc
    lda #track_header_ntsc_tempo_lo
    adc sound_local_byte_0
    tay
    lda [song_address],y
    sta stream_tempo_lo,x
    sta stream_tempo_counter_lo,x

    iny
    lda [song_address],y
    sta stream_tempo_hi,x
    sta stream_tempo_counter_hi,x
.no_triangle:

    ;Load noise stream.
    ldx #3
    jsr stream_stop

    ldy #track_header_noise_stream_address
    lda [song_address],y
    sta sound_param_word_0
    iny
    lda [song_address],y
    beq .no_noise
    sta sound_param_word_0+1

    lda #3
    sta sound_param_byte_0

    lda #3
    sta sound_param_byte_1

    jsr stream_initialize

    clc
    lda #track_header_ntsc_tempo_lo
    adc sound_local_byte_0
    tay
    lda [song_address],y
    sta stream_tempo_lo,x
    sta stream_tempo_counter_lo,x

    iny
    lda [song_address],y
    sta stream_tempo_hi,x
    sta stream_tempo_counter_hi,x
.no_noise:

      ifdef FEATURE_DPCM
    ;Load dpcm stream.
    ldx #4
    jsr stream_stop

    ldy #track_header_dpcm_stream_address
    lda [song_address],y
    sta sound_param_word_0
    iny
    lda [song_address],y
    beq .no_dpcm
    sta sound_param_word_0+1

    lda #4
    sta sound_param_byte_0

    lda #4
    sta sound_param_byte_1

    jsr stream_initialize

    lda #DPCM_STATE_NOP
    sta apu_dpcm_state

    ;Reset load counter to safeguard against accumulating too far
    ;in one direction. (can cause distortion). Suggestion by thefox
    ;on nesdev. I've never actually heard this distortion occur.
    lda #0
    sta $4011

    clc
    lda #track_header_ntsc_tempo_lo
    adc sound_local_byte_0
    tay
    lda [song_address],y
    sta stream_tempo_lo,x
    sta stream_tempo_counter_lo,x

    iny
    lda [song_address],y
    sta stream_tempo_hi,x
    sta stream_tempo_counter_hi,x
.no_dpcm:
      endif

    dec sound_disable_update

    ;Restore index regs.
    pla
    tax
    pla
    tay

    rts


;Expects sound_param_byte_0 to contain the index of the sound effect to play.
;Expects sound_param_byte_1 to contain the sound effect priority. This can
;be one of two values: soundeffect_one, and soundeffect_two from ggsound.inc.
;Assumes the parameters are correct; no range checking is performed.
play_sfx:

    ;Save index regs.
    tya
    pha
    txa
    pha

    inc sound_disable_update

    ;Select header tempo offset based on region.
    ldx sound_region
    lda sound_region_to_tempo_offset,x
    sta sound_local_byte_1

    ;Get sfx address from sfx list.
    lda sound_param_byte_0
    asl a
    tay
    lda [sfx_list_address],y
    sta sound_local_word_0
    iny
    lda [sfx_list_address],y
    sta sound_local_word_0+1

    lda sound_param_byte_1
    sta sound_local_byte_0

    ;Load square 1 stream.
    ldy #track_header_square1_stream_address
    lda [sound_local_word_0],y
    sta sound_param_word_0
    iny
    lda [sound_local_word_0],y
    beq .no_square_1
    sta sound_param_word_0+1

    lda #0
    sta sound_param_byte_0

    lda sound_local_byte_0
    sta sound_param_byte_1

    jsr stream_initialize

    ldx sound_local_byte_0
    clc
    lda #track_header_ntsc_tempo_lo
    adc sound_local_byte_1
    tay
    lda [sound_local_word_0],y
    sta stream_tempo_lo,x
    sta stream_tempo_counter_lo,x
    iny
    lda [sound_local_word_0],y
    sta stream_tempo_hi,x
    sta stream_tempo_counter_hi,x

    inc sound_local_byte_0
.no_square_1:

    lda sound_local_byte_0
    cmp #(soundeffect_two + 1)
    bne .skip0
    jmp .no_more_sfx_streams_available
.skip0:

    ;Load square 2 stream.
    ldy #track_header_square2_stream_address
    lda [sound_local_word_0],y
    sta sound_param_word_0
    iny
    lda [sound_local_word_0],y
    beq .no_square_2
    sta sound_param_word_0+1

    lda #1
    sta sound_param_byte_0

    lda sound_local_byte_0
    sta sound_param_byte_1

    jsr stream_initialize

    ldx sound_local_byte_0
    clc
    lda #track_header_ntsc_tempo_lo
    adc sound_local_byte_1
    tay
    lda [sound_local_word_0],y
    sta stream_tempo_lo,x
    sta stream_tempo_counter_lo,x
    iny
    lda [sound_local_word_0],y
    sta stream_tempo_hi,x
    sta stream_tempo_counter_hi,x

    inc sound_local_byte_0
.no_square_2:

    lda sound_local_byte_0
    cmp #(soundeffect_two + 1)
    bne .skip1
    jmp .no_more_sfx_streams_available
.skip1:

    ;Load triangle stream.
    ldy #track_header_triangle_stream_address
    lda [sound_local_word_0],y
    sta sound_param_word_0
    iny
    lda [sound_local_word_0],y
    beq .no_triangle
    sta sound_param_word_0+1

    lda #2
    sta sound_param_byte_0

    lda sound_local_byte_0
    sta sound_param_byte_1

    jsr stream_initialize

    ldx sound_local_byte_0
    clc
    lda #track_header_ntsc_tempo_lo
    adc sound_local_byte_1
    tay
    lda [sound_local_word_0],y
    sta stream_tempo_lo,x
    sta stream_tempo_counter_lo,x
    iny
    lda [sound_local_word_0],y
    sta stream_tempo_hi,x
    sta stream_tempo_counter_hi,x

    inc sound_local_byte_0
.no_triangle:

    lda sound_local_byte_0
    cmp #(soundeffect_two + 1)
    beq .no_more_sfx_streams_available

    ;Load noise stream.
    ldy #track_header_noise_stream_address
    lda [sound_local_word_0],y
    sta sound_param_word_0
    iny
    lda [sound_local_word_0],y
    beq .no_noise
    sta sound_param_word_0+1

    lda #3
    sta sound_param_byte_0

    lda sound_local_byte_0
    sta sound_param_byte_1

    jsr stream_initialize

    ldx sound_local_byte_0
    clc
    lda #track_header_ntsc_tempo_lo
    adc sound_local_byte_1
    tay
    lda [sound_local_word_0],y
    sta stream_tempo_lo,x
    sta stream_tempo_counter_lo,x
    iny
    lda [sound_local_word_0],y
    sta stream_tempo_hi,x
    sta stream_tempo_counter_hi,x

    inc sound_local_byte_0
.no_noise:

      ifdef FEATURE_DPCM
    ;Load dpcm stream.
    ldy #track_header_dpcm_stream_address
    lda [sound_local_word_0],y
    sta sound_param_word_0
    iny
    lda [sound_local_word_0],y
    beq .no_dpcm
    sta sound_param_word_0+1

    lda #4
    sta sound_param_byte_0

    lda sound_local_byte_0
    sta sound_param_byte_1

    jsr stream_initialize

    ldx sound_local_byte_0
    clc
    lda #track_header_ntsc_tempo_lo
    adc sound_local_byte_1
    tay
    lda [sound_local_word_0],y
    sta stream_tempo_lo,x
    sta stream_tempo_counter_lo,x

    iny
    lda [sound_local_word_0],y
    sta stream_tempo_hi,x
    sta stream_tempo_counter_hi,x

    lda #DPCM_STATE_UPLOAD_THEN_WAIT
    sta apu_dpcm_state
.no_dpcm:
     endif

.no_more_sfx_streams_available:

    dec sound_disable_update

    ;Restore index regs.
    pla
    tax
    pla
    tay

    rts


;Pauses all music streams by clearing volume bits from all channel registers
;and setting the pause flag so these streams are not updated.
pause_song:

    ldx #(MAX_MUSIC_STREAMS-1)
.next_stream:

    lda stream_flags,x
    ora #STREAM_PAUSE_SET
    sta stream_flags,x

    lda stream_channel_register_1,x
    and #%11110000
    sta stream_channel_register_1,x

    dex
    bpl .next_stream

    rts


;Resumes all music streams.
resume_song:

    ldx #(MAX_MUSIC_STREAMS-1)
.next_stream:

    lda stream_flags,x
    and #STREAM_PAUSE_CLEAR
    sta stream_flags,x

    dex
    bpl .next_stream

    rts


;Expects sound_param_byte_0 to contain the channel on which to play the stream.
;Expects sound_param_byte_1 to contain the offset of the stream instance to initialize.
;Expects sound_param_word_0 to contain the starting read address of the stream to
;initialize.
stream_initialize:
channel = sound_param_byte_0
stream = sound_param_byte_1
starting_read_address = sound_param_word_0

    ;Save x.
    txa
    pha

    ldx stream

    inc sound_disable_update

    lda starting_read_address
    ora starting_read_address+1
    beq .null_starting_read_address

    ;Set stream to be inactive while initializing.
    lda #0
    sta stream_flags,x

    ;Set a default note length (20 frames).
    lda #20
    sta stream_note_length_lo,x
    ;Set initial note length counter.
    sta stream_note_length_counter_lo,x
    lda #0
    sta stream_note_length_hi,x
    sta stream_note_length_counter_hi,x

    ;Set initial instrument index.
    lda #0
    sta stream_instrument_index,x
    sta stream_volume_offset,x
    sta stream_pitch_offset,x
    sta stream_duty_offset,x
      ifdef FEATURE_ARPEGGIOS
    sta stream_arpeggio_offset,x
      endif

    ;Set channel.
    lda channel
    sta stream_channel,x

    ;Set initial read address.
    lda starting_read_address
    sta stream_read_address_lo,x
    lda starting_read_address+1
    sta stream_read_address_hi,x

    ;Set default tempo.
    lda #low(DEFAULT_TEMPO)
    sta stream_tempo_lo,x
    sta stream_tempo_counter_lo,x
    lda #high(DEFAULT_TEMPO)
    sta stream_tempo_hi,x
    sta stream_tempo_counter_hi,x

    ;Set stream to be active.
    lda stream_flags,x
    ora #STREAM_ACTIVE_SET
    sta stream_flags,x
.null_starting_read_address:

    dec sound_disable_update

    ;Restore x.
    pla
    tax

    rts

;Stops a stream from playing.
;Assumes x contains the index of the stream to kill.
stream_stop:

    inc sound_disable_update

    lda #0
    sta stream_flags,x

    dec sound_disable_update

    rts


;Updates a single stream.
;Expects x to be pointing to a stream instance as an offset from streams.
stream_update:
callback_address = sound_local_word_0
read_address = sound_local_word_1

    lda stream_flags,x
    and #STREAM_PAUSE_TEST
    beq .skip0
    rts
.skip0:

    ;Load current read address of stream.
    lda stream_read_address_lo,x
    sta read_address
    lda stream_read_address_hi,x
    sta read_address+1

    ;Load next byte from stream data.
    lda stream_flags,x
    and #STREAM_PITCH_LOADED_TEST
    bne .skip1
    ldy #0
    lda [read_address],y
    sta stream_note,x
.skip1:

    ;Is this byte a note or a stream opcode?
    cmp #OPCODES_BASE
    bcc .process_note
.process_opcode:

    ;Look up the opcode in the stream callbacks table.
    sec
    sbc #OPCODES_BASE
    tay
    ;Get the address.
    lda stream_callback_table_lo,y
    sta callback_address
    lda stream_callback_table_hi,y
    sta callback_address+1
    ;Call the callback!
    jsr indirect_jsr_callback_address

    ;Advance the stream's read address.
    advance_stream_read_address

    ;Immediately process the next opcode or note. The idea here is that
    ;all stream control opcodes will execute during the current frame as "setup"
    ;for the next note. All notes will execute once per frame and will always
    ;return from this routine. This leaves the problem, how would the stream
    ;control opcode "terminate" work? It works by pulling the current return
    ;address off the stack and then performing an rts, effectively returning
    ;from its caller, this routine.
    jmp stream_update

.process_note:

    ;Determine which channel callback to use.
    lda stream_channel,x
    tay
    lda channel_callback_table_lo,y
    sta callback_address
    lda channel_callback_table_hi,y
    sta callback_address+1

    ;Call the channel callback!
    jsr indirect_jsr_callback_address

    sec
    lda stream_tempo_counter_lo,x
    sbc #low(256)
    sta stream_tempo_counter_lo,x
    lda stream_tempo_counter_hi,x
    sbc #high(256)
    sta stream_tempo_counter_hi,x
    bcs .do_not_advance_note_length_counter

    ;Reset tempo counter when we cross 0 by adding original tempo back on.
    ;This way we have a wrap-around value that does not get lost when we count
    ;down to the next note.
    clc
    lda stream_tempo_counter_lo,x
    adc stream_tempo_lo,x
    sta stream_tempo_counter_lo,x
    lda stream_tempo_counter_hi,x
    adc stream_tempo_hi,x
    sta stream_tempo_counter_hi,x

    ;Decrement the note length counter.. On zero, advance the stream's read address.
    sec
    lda stream_note_length_counter_lo,x
    sbc #low(1)
    sta stream_note_length_counter_lo,x
    lda stream_note_length_counter_hi,x
    sbc #high(1)
    sta stream_note_length_counter_hi,x

    lda stream_note_length_counter_lo,x
    ora stream_note_length_counter_hi,x

    bne .note_length_counter_not_zero

    ;Reset the note length counter.
    lda stream_note_length_lo,x
    sta stream_note_length_counter_lo,x
    lda stream_note_length_hi,x
    sta stream_note_length_counter_hi,x

    ldy stream_instrument_index,x
    lda [addr_instruments],y
    sta sound_local_word_0
    iny
    lda [addr_instruments],y
    sta sound_local_word_0+1
    ldy #0
    lda [sound_local_word_0],y
    sta stream_volume_offset,x
    iny
    lda [sound_local_word_0],y
    sta stream_pitch_offset,x
    iny
    lda [sound_local_word_0],y
    sta stream_duty_offset,x
      ifdef FEATURE_ARPEGGIOS
    iny
    lda [sound_local_word_0],y
    sta stream_arpeggio_offset,x
      endif

    ;Reset silence until note and pitch loaded flags.
    lda stream_flags,x
    and #STREAM_SILENCE_CLEAR
    and #STREAM_PITCH_LOADED_CLEAR
    sta stream_flags,x

    ;Advance the stream's read address.
    advance_stream_read_address
.do_not_advance_note_length_counter:
.note_length_counter_not_zero:

    rts

indirect_jsr_callback_address:
    jmp [callback_address]
    rts


sound_initialize_apu_buffer:

    ;****************************************************************
    ;Initialize Square 1
    ;****************************************************************

    ;Set Saw Envelope Disable and Length Counter Disable to 1 for square 1.
    lda #%00110000
    sta apu_register_sets

    ;Set Negate flag on the sweep unit.
    lda #$08
    sta apu_register_sets+1

    ;Set period to C9, which is a C#...just in case nobody writes to it.
    lda #$C9
    sta apu_register_sets+2

    ;Make sure the old value starts out different from the first default value.
    sta apu_square_1_old

    lda #$00
    sta apu_register_sets+3

    ;****************************************************************
    ;Initialize Square 2
    ;****************************************************************

    ;Set Saw Envelope Disable and Length Counter Disable to 1 for square 2.
    lda #%00110000
    sta apu_register_sets+4

    ;Set Negate flag on the sweep unit.
    lda #$08
    sta apu_register_sets+5

    ;Set period to C9, which is a C#...just in case nobody writes to it.
    lda #$C9
    sta apu_register_sets+6

    ;Make sure the old value starts out different from the first default value.
    sta apu_square_2_old

    lda #$00
    sta apu_register_sets+7

    ;****************************************************************
    ;Initialize Triangle
    ;****************************************************************
    lda #%10000000
    sta apu_register_sets+8

    lda #$C9
    sta apu_register_sets+10

    lda #$00
    sta apu_register_sets+11

    ;****************************************************************
    ;Initialize Noise
    ;****************************************************************
    lda #%00110000
    sta apu_register_sets+12

    lda #%00000000
    sta apu_register_sets+13

    lda #%00000000
    sta apu_register_sets+14

    lda #%00000000
    sta apu_register_sets+15

      ifdef FEATURE_DPCM
    ;****************************************************************
    ;Initialize DPCM
    ;****************************************************************
    lda #0
    sta apu_register_sets+16

    lda #0
    sta apu_register_sets+17

    lda #0
    sta apu_register_sets+18

    lda #0
    sta apu_register_sets+19
      endif

    rts

sound_upload:

    lda apu_data_ready
    beq .apu_data_not_ready

    jsr sound_upload_apu_register_sets

.apu_data_not_ready:

    rts

sound_upload_apu_register_sets:
.square1:
    lda apu_register_sets+0
    sta $4000
    lda apu_register_sets+1
    sta $4001
    lda apu_register_sets+2
    sta $4002
    lda apu_register_sets+3
    ;Compare to last write.
    cmp apu_square_1_old
    ;Don't write this frame if they were equal.
    beq .square2
    sta $4003
    ;Save the value we just wrote to $4003.
    sta apu_square_1_old
.square2:
    lda apu_register_sets+4
    sta $4004
    lda apu_register_sets+5
    sta $4005
    lda apu_register_sets+6
    sta $4006
    lda apu_register_sets+7
    cmp apu_square_2_old
    beq .triangle
    sta $4007
    ;Save the value we just wrote to $4007.
    sta apu_square_2_old
.triangle:
    lda apu_register_sets+8
    sta $4008
    lda apu_register_sets+10
    sta $400A
    lda apu_register_sets+11
    sta $400B
.noise:
    lda apu_register_sets+12
    sta $400C
    lda apu_register_sets+14
    ;Our notes go from 0 to 15 (low to high)
    ;but noise channel's low to high is 15 to 0.
    eor #$0f
    sta $400E
    lda apu_register_sets+15
    sta $400F

    ;Clear out all volume values from this frame in case a sound effect is killed suddenly.
    lda #%00110000
    sta apu_register_sets
    sta apu_register_sets+4
    sta apu_register_sets+12
    lda #%10000000
    sta apu_register_sets+8

      ifdef FEATURE_DPCM
    ;Now execute DPCM command/state machine. This state machine has logic for allowing
    ;a DPCM sound effect to override the currenty playing music DPCM sample until finished.
.dpcm:
    ldx apu_dpcm_state
    lda .dpcm_state_callback_hi,x
    pha
    lda .dpcm_state_callback_lo,x
    pha
    rts
.dpcm_upload:
    jsr .dpcm_upload_registers
    lda #DPCM_STATE_NOP
    sta apu_dpcm_state
    rts
.dpcm_upload_then_wait:
    jsr .dpcm_upload_registers
    lda #DPCM_STATE_WAIT
    sta apu_dpcm_state
    rts
.dpcm_wait:
    lda $4015
    and #%00010000
    bne .skip
    lda #DPCM_STATE_NOP
    sta apu_dpcm_state
.skip:
    rts
.dpcm_nop:
    rts

.dpcm_state_callback_lo:
    .db low((.dpcm_nop-1))
    .db low((.dpcm_upload-1))
    .db low((.dpcm_upload_then_wait-1))
    .db low((.dpcm_wait-1))

.dpcm_state_callback_hi:
    .db high((.dpcm_nop-1))
    .db high((.dpcm_upload-1))
    .db high((.dpcm_upload_then_wait-1))
    .db high((.dpcm_wait-1))

.dpcm_upload_registers:
    lda apu_register_sets+16
    sta $4010
    lda apu_register_sets+18
    sta $4012
    lda apu_register_sets+19
    sta $4013
    ;Restart DPCM channel in case a new note was played before sample finished.
    lda #%00001111
    sta $4015
    lda #%00011111
    sta $4015
    rts
      else
    rts
      endif

