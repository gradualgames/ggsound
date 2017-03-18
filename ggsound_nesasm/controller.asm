;Deserializes the controller into a buffer.
;output: controller_buffer
controller_read:

    jsr read_joy

    ;a
    ror a
    rol controller_buffer

    ;b
    ror a
    rol controller_buffer+1

    ;select
    ror a
    rol controller_buffer+2

    ;start
    ror a
    rol controller_buffer+3

    ;up
    ror a
    rol controller_buffer+4

    ;down
    ror a
    rol controller_buffer+5

    ;left
    ror a
    rol controller_buffer+6

    ;right
    ror a
    rol controller_buffer+7

    rts

;****************************************************************
;The following DMC safe controller reading code was adapted from
;read_joy3, created by blargg of NESDEV.
;****************************************************************
;.align 32
; Reads controller into A.
; Reliable even if DMC is playing.
; Preserved: X, Y
; Time: ~660 clocks
read_joy:
temp = b0
temp2 = b1
temp3 = b2
    jsr read_joy_fast
    sta low(temp3)
    jsr read_joy_fast
    pha
    jsr read_joy_fast
    sta low(temp2)
    jsr read_joy_fast

    ; All combinations of one controller
    ; change and one DMC DMA corruption
    ; leave at least two matching readings,
    ; and never just the first and last
    ; matching. No more than one DMC DMA
    ; corruption can occur.

    ; X--X can't occur
    pla
    cmp low(temp3)
    beq .s1         ; XX--
    cmp low(temp)
    beq .s1         ; -X-X

    lda low(temp2)  ; X-X-
            ; -XX-
            ; --XX
.s1:cmp #0
    rts

; Reads controller into A and temp.
; Unreliable if DMC is playing.
; Preserved: X, Y
; Time: 153 clocks

read_joy_fast:
    ; Strobe controller
    lda #1          ; 2
    sta $4016       ; 4
    lda #0          ; 2
    sta $4016       ; 4

    ; Read 8 bits
    lda #$80        ; 2
    sta low(temp)   ; 3
.s2:lda $4016       ; *4

    ; Merge bits 0 and 1 into carry. Normal
    ; controllers use bit 0, and Famicom
    ; external controllers use bit 1.
    and #$03        ; *2
    cmp #$01        ; *2

    ror low(temp)   ; *5
    bcc .s2         ; *3
            ; -1
    lda low(temp)   ; 3
    rts             ; 6
