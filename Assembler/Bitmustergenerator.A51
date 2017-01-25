;----------------------------------------------------------
;			Author: Niklas Gauder // Felix Zimmermann
;			Name: Bitmustergenerator
;			File: *.A51
;
;			--: Gibt muster aus Speicher an P2 aus
;			--: Geschwindigkeit mit P1.0-P1.3 Steuerbar
;----------------------------------------------------------

;ORG 8000h
P4 EQU 0C0h

;Muster_1			;; Addresse hinter Muster_4 da sonst speicherreichweite 01h-09h überschrieben wird
mov 1Dh, #00h		;Invertiert im Speicher
mov 1Eh, #0FFh		;Da dec und cjne
mov 1Fh, #7Fh		;im R0 Rückwärts zählen
mov 20h, #3Fh	
mov 21h, #1Fh		; Anmerkung:
mov 22h, #0Fh		; Ende bei 01h ? 
mov 23h, #07h
mov 24h, #03h
mov 25h, #01h

;Muster_2			
mov 0Ah, #00h
mov 0Bh, #0FFh
mov 0Ch, #0FEh
mov 0Dh, #0FCh
mov 0Eh, #0F8h
mov 0Fh, #0F0h
mov 10h, #0E0h
mov 11h, #0C0h
mov 12h, #80h

;Muster_3			
mov 13h, #00h
mov 14h, #0FFh
mov 15h, #7Eh
mov 16h, #3Ch
mov 17h, #18h

;Muster_4			
mov 18h, #00h
mov 19h, #18h
mov 1Ah, #3Ch
mov 1Bh, #7Eh
mov 1Ch, #0FFh

Main:			mov P2,#00h
				jnb P1.4,Muster_Ausgabe1
				jnb P1.5,Muster_Ausgabe2
				jnb P1.6,Muster_Ausgabe3
				jnb P1.7,Muster_Ausgabe4
				jmp Main

Muster_Ausgabe1:
				mov R0, #25h
m1: 			mov P2,@R0
				dec R0
				acall wait
				cjne R0,#1Dh, m1
				jmp Main

Muster_Ausgabe2:
				mov R0,#12h
m2: 			mov P2,@R0
				dec R0
				acall wait
				cjne R0,#0Ah, m2
				jmp Main

Muster_Ausgabe3:
				mov R0,#17h
m3: 			mov P2,@R0
				dec R0
				acall wait
				cjne R0,#13h, m3
				jmp Main

Muster_Ausgabe4:
				mov R0,#1ch
m4: 			mov P2,@R0
				dec R0
				acall wait
				cjne R0,#18h, m4
				jmp Main


wait:			mov a, P1
				anl a,#0Fh
					
				mov R3,a
zeit1: 			mov R1,#250
zeit2:			mov R2,#200
zeit3:			djnz R2,zeit3
				djnz R1,zeit2
				djnz R3,zeit1
				ret
END
