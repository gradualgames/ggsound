# GGSound Guide
## by Derek Andrews <gradualgames@gmail.com>

# Introduction:

This guide explains how to use GGSound and its associated tools. The
GGSound distribution comes with the following:

* /ggsound_ca65:
This demo shows how to use ggsound with ca65. It requires that
you have python 3 and cc65 installed in order to build it.
Simply run build.py to build the demo and clean.py to clean it.

* /ggsound_asm6:
This demo shows how to use ggsound with asm6. It requires that
you have asm6 installed in order to build it. Simply run build.bat
to build it and clean.bat to clean it.

* /ggsound_nesasm:
This demo shows how to use ggsound with nesasm3. It requires that
you have nesasm3 installed in order to build it. Simply run build.bat
to build it and clean.bat to clean it.

* demo.nes:
A prebuilt NES rom so you can quickly check out what GGSound can
do in your favorite emulator.

* README.md:
You're reading it.

* LICENSE:
A file stating that GGSound is public domain and you may do
anything you like with it. I'd appreciate credit, but other than
that courtesy I do not require you do anything else, and feel
free to sell anything you make using it.

# Features:

GGSound is intended to be an easy to use and lightweight sound
engine. It is able to create most of the sounds one would have
heard in professional NES games from the 80's and 90's. It
currently supports:

- Square 1, 2, Triangle, Noise, and DPCM channels
- Volume, Arpeggio, Pitch and Duty envelopes
- Hi-Pitch envelopes are NOT supported
- Looping envelopes at an arbitrary loop point
- Speed and Tempo
- Looping with the Bxx (must be present in all channels, using
unique patterns) command
- Note cuts
- Tempo and pitch adjustment for NTSC and PAL
- Multi-song export
- Sound effects on two channels
- Pause/unpause
- All 87 audible notes in FamiTracker
- 128 of each type of envelope
- 128 songs
- 128 sound effects
- 256 byte long envelopes

# Credits:
* MotZilla - For testing a very early version of the engine.
* zxdplay - For using GGSound in his excellent game, StarKeeper.
* jsr - For enabling me to work with the FamiTracker code and
learn from it.
* Shiru - For making FamiTone2 and inspiring me to improve
GGSound.
* MetalSlime - For the Nerdy Nights sound tutorials.
* Joe Granato - For helping test the new and improved version of
GGSound.
* Memblers - For including GGSound in his benchmark thread.
* Tepples - For tips and wisdom on nesdev.
* Rainwarrior - For tips and wisdom on nesdev.
* ggf1979 - For asking for new features on nesdev.
* alekmaul - For asking for new features on nesdev.
* Hamtaro126 - For asking for new features on nesdev.
* 8bitMicroGuy - For supplying a sample song to help exercise
GGSound and the converter.
* Velathnos 2.0 - For supplying a sample song to help exercise
GGSound and the converter.
* darryl.revok - For bug reports and supplying sample songs to
* help exercise GGSound and the converter.
* Peter McQuillan - For bug reports and supplying sample songs
to help exercise GGSound and the converter.

# Changes:
* 8-28-16: Fixed two bugs in converter:
           Sfx envelope length determination has been fixed.
           Patterns are now looked up by id.
* 5-29-16: Fixed bug in converter so that all envelopes revert
           to default for instruments that do not specify them.
           Fixed how beginning of note is detected.
           Fixed arpeggio processing to work with new beginning
           of note code.
           Fixed bug in converter which was processing spaces in
           track and dpcm names incorrectly.
           Convert spaces to underscores in output asm for
           readability.
* 5-7-16:  Implemented duty/noise envelopes for the noise
           channel. Better late than never!
* 5-4-16:  Implemented duty cycle loop points for square waves.
           Added unlicense.txt to comfort people actually
           worried about legal issues with NES sound engines :)
* 5-2-16:  Fixed regression from label name sanitization fixup.
           Gotta get rid of those quotes!
* 5-1-16:  Fixed regression from fix for Bxx loop processing.
           Also added even more paranoia for label name
           sanitization. It's a jungle out there.
* 4-27-16: Fixed dpcm sample indexing.
           Added extra paranoia to label name sanitization.
* 4-23-16: Added track and dpcm label name sanitization.
           Fixed a bug in Bxx loop processing.
* 3-20-16: Added support for DPCM, arpeggios, Bxx, and pause.
* 2-17-16: Added support for note cuts.
* 1-16-16: Fixed a bug in ft_txt_to_asm.py for all assemblers
* that allows it to output correct song headers under
* Python 2.x.

# Including GGSound in a CA65 program:

* ggsound.inc is needed for access to the ggsound api (usage guide
later in this file).

* ggsound.asm may be compiled as its own object file. It requires
that your configuration file have a ZEROPAGE, a BSS and a CODE
segment defined in order to link successfully with your program.

# Including GGSound in an ASM6 program:

* ggsound.inc: Include this at the top of your program. All
ggsound data and usage of its routines will need these equates
and macros.

* ggsound.asm: Include this in a PRG-ROM bank which has enough
space.

* ggsound_zp.inc: Include this file within your zeropage enumer-
ation, like this:

```
.base $0000
.enum $0000

include "demo_zp.inc"
include "ggsound_zp.inc"

.ende
```

* ggsound_ram.inc: Include this file within your BSS enumeration,
like this:

```
.base $0200
.enum $0200

include "ggsound_ram.inc"

.ende
```

# Including GGSound in a NESASM3 program:

* ggsound.inc: Include this at the top of your program. All
ggsound data and usage of its routines will need these equates
and macros.

* ggsound.asm: Include this in an 8kb nesasm3 bank which has
enough space.

* ggsound_zp.inc: Include this file within your zeropage section,
like this:

```
  .rsset $0000
  include "ggsound_zp.inc"
```

* ggsound_ram.inc: Include this file within your BSS section, like
this:

```
  .rsset $0200
  include "ggsound_ram.inc"
```

# Usage of ft_txt_to_asm.py

You must use ft_txt_to_asm.py to convert FamiTracker text output
data into assembly language code for ggsound to use within your
program. To use ft_txt_to_asm.py you will need to install
Python 3.x. Go to www.python.org, click on Downloads, and then
download Python 3.x for Windows. Run the installer and choose all
defaults. This should be fairly self-explanatory. Note: The
script may work under Python 2.x in most cases, but it has not
been extensively tested. Please email me if you find bugs.

There are three versions of ft_txt_to_asm.py tailored for ca65,
nesasm3 and asm6. You must use the one included with the demo
for your target assembler, or the output will not work with your
code.

To use it, follow these steps:

1. Open your .ftm file in FamiTracker.
2. Run Edit -> Clean Up -> Remove Unused Instruments.
3. Select File...Export Text.
4. Save the text file in a desired location, probably wherever
your program files are.
5. Drag the text file to ft_txt_to_asm.py. If there are no
errors, it will generate a file with the same name as the text
file, but with .asm as the extension. It should place the asm
file in the same folder that the txt file was. If you have any
DPCM samples, a file with the same name _dpcm.asm will be
generated.

If no asm file is generated, there may be an error. Run
ft_txt_to_asm.py instead from a command line. You can run it
like this:

```
python ft_txt_to_asm.py your_file.txt
```

Then, you can examine the error output. Please email me if you
end up in this situation---you have either encountered a bug or
a limitation in ft_txt_to_asm.py. Known limitations are docu-
mented below.

# Limitations of ft_txt_to_asm.py

ft_txt_to_asm.py does not convert your famitracker data verbat-
im. It uses a subset of all the possible features you can use
within a song. Here are a list of all the features that are
currently supported:

- speed
- tempo
- pattern length
- frames
- multi song files
- "Bxx" effect. This is for looping a song which does not end at
the end of a frame. MAKE SURE TO INCLUDE THIS EFFECT AT THE END
OF EACH OF YOUR SONG'S CHANNELS OR THE DATA WILL NOT BE CORRECT.
THESE MUST BE IN *UNIQUE* PATTERNS.
-note cuts
- volume envlopes
- arpeggio envelopes. These can be disabled if you do not wish
to use them by setting ARPEGGIOS_ENABLED = False within
ft_txt_to_asm.py, at the top of the file. Just open it in a text
editor.
- pitch envelopes
- hi-pitch envelopes are NOT supported
- duty envelopes
- loop points within envelopes
- all 87 audible notes within FamiTracker are available for you
to use
- DPCM samples. The script assumes only one instrument has DPCM
samples mapped to it. If you have more than one instrument
which maps DPCM samples to notes, the behavior will be undefined.
NOTE: Your DPCM instrument must specify a volume envelope, even
though it is not used by DPCM. Otherwise, your DPCM stream will
not be exported.
- sound effect tracks. To export sound effect tracks, you must
prefix any song within your famitracker file with "sfx_." This
lets ft_txt_to_asm.py know to treat this track as a sound effect
and make sure that it terminates after its longest envelope
finishes.

# Including your song data in your code in CA65

ft_txt_to_asm.py generates an .asm file you need to include in
your code. For ca65, it is recommended to include this file in
another file which wraps it in a segment that you desire to
place your song data in. You will also need to expose your
song_list, sfx_list, and envelopes_list symbols in order to be
able to initialize ggsound properly. See tracks.asm and
tracks.inc in the ggsound demo for an example. track_data.inc
is a renamed version of the data generated by ft_txt_to_asm.py.

If you are using DPCM, a second file with the same name as your
ft txt file will be generated with the suffix _dpcm.asm. This is
your dpcm sample data. It is pre-aligned to 64 byte boundaries,
but assumes you will place the data at a 64 byte aligned
boundary to begin with. Note that your DPCM data MUST be at
$C000 or later or it will not work.

# Including your song data in asm6 or nesasm3

ft_txt_to_asm.py generates an .asm file you need to include in
your code. To include your song .asm file in asm6 or nesasm3,
this is much simpler. Just

```
include "songs.asm"
```

In a bank that has enough space. songs.asm will need to see the
equates defined in ggsound.inc, so make sure ggsound.inc is
somewhere above songs.asm.

If you are using DPCM, a second file with the same name as your
ft txt file will be generated with the suffix _dpcm.asm. This is
your dpcm sample data. It is pre-aligned to 64 byte boundaries,
but assumes you will place the data at a 64 byte aligned
boundary to begin with. ASM6 allows you to use .ALIGN 64 to do
this. In nesasm3, your best bet would be to include your dpcm
data at the very beginning of a dedicated bank. Note that your
DPCM data MUST be at $C000 or later or it will not work.

# Basic usage of GGSound

## Initialization:

To initialize GGSound, you must call sound_initialize. You need
to tell it which region to use (NTSC or PAL), and the addresses
of lists of songs, sound effects, envelopes and dpcm samples.
These lists are located at the top of the asm file that you
generate from your songs file with ft_txt_to_asm.py.

```
    lda #SOUND_REGION_NTSC ;or #SOUND_REGION_PAL
    sta sound_param_byte_0
    lda #<song_list
    sta sound_param_word_0
    lda #>song_list
    sta sound_param_word_0+1
    lda #<sfx_list
    sta sound_param_word_1
    lda #>sfx_list
    sta sound_param_word_1+1
    lda #<envelopes_list
    sta sound_param_word_2
    lda #>envelopes_list
    sta sound_param_word_2+1
    lda #<dpcm_list
    sta sound_param_word_3
    lda #>dpcm_list
    sta sound_param_word_3+1
    jsr sound_initialize
```

## Updating:

To hear anything at all, you must update GGSound on every frame.
It is highly recommended that you use the provided "sound_update"
macro at the end of your vblank routine to do this, like so:

```
vblank:
    pha
    txa
    pha
    tya
    pha
    php

    soundengine_update

    plp
    pla
    tay
    pla
    tax
    pla

irq:
    rti
```

## Playing songs:

At the top of your songs.asm file above the song_list
and sfx_list are some enumerated equates for each song and
sound effect that you've included in your famitracker file.
To play one, just load up one of these equates and call
play_song, like this:

```
    lda #song_index_k466
    sta sound_param_byte_0
    jsr play_song
```

## Playing sound effects:

Playing sound effects is nearly identical, except you must also
specify the sound effect priority in a second parameter. This
priority can be one of two values: soundeffect_one and
soundeffect_two, defined in ggsound.inc. soundeffect_two, if
played on the same channel, will override what soundeffect_one
is playing.

```
    lda #sfx_index_sfx_shot
    sta sound_param_byte_0
    lda #soundeffect_one
    sta sound_param_byte_1
    jsr play_sfx
```

## Disabling features:

DPCM and arpeggio support can be disabled. To disable DPCM,
comment out FEATURE_DPCM = 1 at the top of ggsound.inc. To
disable arpeggios, comment out FEATURE_ARPEGGIOS = 1 at the
top of ggsound.inc.

To disable DPCM from ft_txt_to_asm.py, just don't use any
dpcm in your song and no dpcm streams will be exported. To
disable arpeggios in ft_txt_to_asm.py is required if you are
disabling it in ggsound itself. Change ARPEGGIOS_ENABLED to
False within ft_txt_to_asm.py to avoid exporting any arpeggio
data or opcodes.
