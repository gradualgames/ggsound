;Comment out these equates for features you do not wish to use.
FEATURE_DPCM = 1
FEATURE_ARPEGGIOS = 1

  ifdef FEATURE_DPCM
DPCM_STATE_NOP = 0
DPCM_STATE_UPLOAD = 1
DPCM_STATE_UPLOAD_THEN_WAIT = 2
DPCM_STATE_WAIT = 3
  endif

;Max number of music streams, sfx streams, and max total streams
;based on whether dpcm is enabled. soundeffect_one and soundeffect_two
;are always to be used when specifying sound effect priority.
  ifdef FEATURE_DPCM
MAX_MUSIC_STREAMS = 5
soundeffect_one = 5
soundeffect_two = 6
  else
MAX_MUSIC_STREAMS = 4
soundeffect_one = 4
soundeffect_two = 5
  endif
MAX_SFX_STREAMS = 2
MAX_STREAMS = (MAX_MUSIC_STREAMS + MAX_SFX_STREAMS)

;****************************************************************
;The following are all opcodes. All opcodes in range 0-86 are
;interpreted as a note playback call. Everything 87 or above
;are interpreted as stream control opcodes.
;****************************************************************

C0  = 0
CS0 = 1
D0  = 2
DS0 = 3
E0  = 4
F0  = 5
FS0 = 6
G0  = 7
GS0 = 8
A0  = 9
AS0 = 10
B0  = 11
C1  = 12
CS1 = 13
D1  = 14
DS1 = 15
E1  = 16
F1  = 17
FS1 = 18
G1  = 19
GS1 = 20
A1  = 21
AS1 = 22
B1  = 23
C2  = 24
CS2 = 25
D2  = 26
DS2 = 27
E2  = 28
F2  = 29
FS2 = 30
G2  = 31
GS2 = 32
A2  = 33
AS2 = 34
B2  = 35
C3  = 36
CS3 = 37
D3  = 38
DS3 = 39
E3  = 40
F3  = 41
FS3 = 42
G3  = 43
GS3 = 44
A3  = 45
AS3 = 46
B3  = 47
C4  = 48
CS4 = 49
D4  = 50
DS4 = 51
E4  = 52
F4  = 53
FS4 = 54
G4  = 55
GS4 = 56
A4  = 57
AS4 = 58
B4  = 59
C5  = 60
CS5 = 61
D5  = 62
DS5 = 63
E5  = 64
F5  = 65
FS5 = 66
G5  = 67
GS5 = 68
A5  = 69
AS5 = 70
B5  = 71
C6  = 72
CS6 = 73
D6  = 74
DS6 = 75
E6  = 76
F6  = 77
FS6 = 78
G6  = 79
GS6 = 80
A6  = 81
AS6 = 82
B6  = 83
C7  = 84
CS7 = 85
D7  = 86
DS7 = 87
E7  = 88
F7  = 89
FS7 = 90
G7  = 91
GS7 = 92
A7  = 93
AS7 = 94
B7  = 95

HIGHEST_NOTE = B7

OPCODES_BASE = 96

;stream control opcodes

;set length opcodes for standard note lengths
SL1 = 0  + OPCODES_BASE
SL2 = 1  + OPCODES_BASE
SL3 = 2  + OPCODES_BASE
SL4 = 3  + OPCODES_BASE
SL5 = 4  + OPCODES_BASE
SL6 = 5  + OPCODES_BASE
SL7 = 6  + OPCODES_BASE
SL8 = 7  + OPCODES_BASE
SL9 = 8  + OPCODES_BASE
SLA = 9  + OPCODES_BASE
SLB = 10 + OPCODES_BASE
SLC = 11 + OPCODES_BASE
SLD = 12 + OPCODES_BASE
SLE = 13 + OPCODES_BASE
SLF = 14 + OPCODES_BASE
SL0 = 15 + OPCODES_BASE

;set length lo byte
SLL = 16+OPCODES_BASE

;set length hi byte
SLH = 17+OPCODES_BASE

;set instrument
STI = 18+OPCODES_BASE

;goto
GOT = 19+OPCODES_BASE

;call
CAL = 20+OPCODES_BASE

;return
RET = 21+OPCODES_BASE

;terminate
TRM = 22+OPCODES_BASE

;opcodes read from volume and pitch envelopes. These values are also
;reserved by Famitracker, so they are safe to use.
ENV_STOP = %10000000 ;-128
ENV_LOOP = %01111111 ; 127

;a different set of opcodes for stop and loop for duty cycle envelopes.
;This is necessary since ENV_STOP can be intepreted as duty cycle = 2,
;preventing users from using that setting.
DUTY_ENV_STOP = %00111111
DUTY_ENV_LOOP = %00101010

;these opcodes exist at the start of any arpeggio envelope to indicate
;how the arpeggio is to be executed.
ARP_TYPE_ABSOLUTE = 0
ARP_TYPE_FIXED    = 1
ARP_TYPE_RELATIVE = 2

;values for stream flags
STREAM_ACTIVE_SET         = %00000001
STREAM_ACTIVE_TEST        = %00000001
STREAM_ACTIVE_CLEAR       = %11111110

STREAM_SILENCE_SET        = %00000010
STREAM_SILENCE_TEST       = %00000010
STREAM_SILENCE_CLEAR      = %11111101

STREAM_PAUSE_SET          = %00000100
STREAM_PAUSE_TEST         = %00000100
STREAM_PAUSE_CLEAR        = %11111011

STREAM_PITCH_LOADED_SET   = %00001000
STREAM_PITCH_LOADED_TEST  = %00001000
STREAM_PITCH_LOADED_CLEAR = %11110111

;default tempo.
DEFAULT_TEMPO = 256 * 15

;Region constants.
SOUND_REGION_NTSC = 0
SOUND_REGION_PAL  = 1
SOUND_REGION_DENDY = 2

track_header_ntsc_tempo_lo            = 0
track_header_ntsc_tempo_hi            = 1
track_header_pal_tempo_lo             = 2
track_header_pal_tempo_hi             = 3
track_header_square1_stream_address   = 4
track_header_square2_stream_address   = 6
track_header_triangle_stream_address  = 8
track_header_noise_stream_address     = 10
  ifdef FEATURE_DPCM
track_header_dpcm_stream_address      = 12
  endif

instrument_header_volume_offset = 0
instrument_header_pitch_offset = 1
instrument_header_duty_offset = 2
instrument_header_arpeggio_offset = 3
instrument_header_arpeggio_type = 4

  macro advance_stream_read_address

    inc stream_read_address_lo,x
    bne .skip_advance\@
    inc stream_read_address_hi,x
.skip_advance\@

  endm

;this macro updates the sound engine. It is intended to
;be used at the end of an nmi routine, after ppu synchronization.
  macro soundengine_update

    lda sound_disable_update
    bne .sound_update_disabled

    jsr sound_update
    jsr sound_upload

.sound_update_disabled:

  endm
