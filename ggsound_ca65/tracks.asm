.feature force_range
.include "tracks.inc"
.include "ggsound.inc"

.segment "CODE"

.align 64
.include "track_dpcm.inc"

.segment "ROM0"

.include "track_data.inc"
