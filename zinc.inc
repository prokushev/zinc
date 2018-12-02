;
;    ZINC header: This file contains configuration definitions for ZINC
;    Copyright (C) 2018  Yuri Prokushev <yuri.prokushev@gmail.com>
;
;    This program is free software; you can redistribute it and/or modify
;    it under the terms of the GNU General Public License as published by
;    the Free Software Foundation; either version 2 of the License, or
;    (at your option) any later version.
;
;    This program is distributed in the hope that it will be useful,
;    but WITHOUT ANY WARRANTY; without even the implied warranty of
;    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;    GNU General Public License for more details.
;
;    You should have received a copy of the GNU General Public License
;    along with this program; if not, write to the Free Software
;    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
;

;*******************************************************************
;* Base definetions
;*******************************************************************

NO	EQU	0
YES	EQU	NOT NO
TRUE	EQU	YES
FALSE	EQU	NO

; Ascii Character Equates

CR	EQU	0DH		; Carriage return
LF	EQU	0AH		; Line feed
TAB	EQU	09H		; Tabulator
ETX	EQU	03H		; End-of-Text
ACK	EQU	06H		; Acknowledge
BELL	EQU	07H		; Bell Character
XON	EQU	11H		; X-On  (Control-Q)
XOFF	EQU	13H		; X-Off (Control-S)
ESC	EQU	1BH		; ANSI Escape code

;*******************************************************************
;* Base ZINC configuration
;*******************************************************************

Z_MACHINE	EQU	M_ZXP3

;*******************************************************************
;* List of supported machines
;*******************************************************************

M_ZXP2A		EQU	0       ; ZX Spectrum +2A/+2B
M_ZXP3		EQU	1       ; ZX Spectrum +3/+3B
M_ZXP3E		EQU	2       ; ZX Spectrum +3e
M_ZXNEXT	EQU	3       ; ZX Spectrum Next
M_ZXEVO		EQU	4       ; ZX Evolution
M_ZX48		EQU	5       ; ZX Spectrum 48k
M_ZX128		EQU	6	; ZX Spectrum 128k
M_ZXP2		EQU	7	; ZX Spectrum +2
M_ZXATM2	EQU	8	; ATM 2
M_ZXUNO		EQU	9	; ZX UNO

;*******************************************************************
;* Machine specific configuration
;*******************************************************************
;* BANKED determines is banked or non-banked version
;* ROM determines is ZINC resides in ROM or in RAM
;*     If ROM version definet then separate code and data segments
;*     for blowing ZSDOS into ROM.  Calling BDOS Function 0 will initialize the
;*     Data Segment to default values.
;*     BIOS alternate bank also in ROM.
;* BIAS is a bias of ZINC system in RAM
;*   ZINC 20K - 00000H
;*   ZINC 24K - 01000H
;*   ZINC 32K - 03000H
;*   ZINC 40K - 05000H
;*   ZINC 48K - 07000H
;*   ZINC 56K - 09000H
;*   ZINC 62K - 0A800H
;*   ZINC 64K - 0B000H
;* CPMLOC is a system page location
;*   ZINC - 00000H
;*   Personal ZINC - any other (16-bit boundary)
;*******************************************************************

		IF	Z_MACHINE EQ M_ZXP2A
CPMLOC          EQU     00000H          ; ZINC starting address
BANKED          EQU     YES		; Banked version
ROM             EQU     NO		; Not ROM based version
BIAS		EQU	0B000H		; ZINC BIAS
                ENDIF

                IF	Z_MACHINE EQ M_ZXP3
CPMLOC          EQU     00000H          ; ZINC starting address
BANKED          EQU     0               ; Banked version ; !!! For prototype only !!!
ROM             EQU     NO		; Not ROM based version
BIAS		EQU	0A800H		; ZINC BIAS
                ENDIF
                
                IF	Z_MACHINE EQ M_ZXP3E
CPMLOC          EQU     00000H          ; ZINC starting address
BANKED          EQU     YES		; Banked version
ROM             EQU     NO		; Not ROM based version
BIAS		EQU	0A800H		; ZINC BIAS
                ENDIF

                IF	Z_MACHINE EQ M_ZXUNO
CPMLOC          EQU     00000H          ; ZINC starting address
BANKED          EQU     YES		; Banked version
ROM             EQU     NO		; Not ROM based version
BIAS		EQU	0A800H		; ZINC BIAS
                ENDIF

                IF	Z_MACHINE EQ M_ZXNEXT
CPMLOC          EQU     00000H          ; ZINC starting address
BANKED          EQU     YES		; Banked version
ROM             EQU     NO		; Not ROM based version
BIAS		EQU	0A800H		; ZINC BIAS
                ENDIF

                IF	Z_MACHINE EQ M_ZXATM2
CPMLOC          EQU     00000H          ; ZINC starting address
BANKED          EQU     YES		; Banked version
ROM             EQU     YES		; ROM based version
BIAS		EQU	0		; ZINC BIAS
                ENDIF

                IF	Z_MACHINE EQ M_ZXEVO
CPMLOC          EQU     00000H          ; ZINC starting address
BANKED          EQU     YES		; Banked version
ROM             EQU     YES		; ROM based version
BIAS		EQU	0		; ZINC BIAS
                ENDIF

                IF	Z_MACHINE EQ M_ZX48
CPMLOC          EQU     06000H          ; ZINC starting address
BANKED          EQU     NO		; Non-Banked version
ROM             EQU     NO		; Not ROM based version
BIAS		EQU	0A800H		; ZINC BIAS
                ENDIF

                IF	Z_MACHINE EQ M_ZX128
CPMLOC          EQU     06000H          ; ZINC starting address
BANKED          EQU     NO		; Non-Banked version
ROM             EQU     NO		; Not ROM based version
BIAS		EQU	0A800H		; ZINC BIAS
                ENDIF

                IF	Z_MACHINE EQ M_ZXP2
CPMLOC          EQU     06000H          ; ZINC starting address
BANKED          EQU     NO		; Non-Banked version
ROM             EQU     NO		; Not ROM based version
BIAS		EQU	0A800H		; ZINC BIAS
                ENDIF
                
;*********************************************************************
;* ZINC bank 1 memory map (resident part, CP/M 2 sizes comatibility) *
;*********************************************************************

ZEROSIZE	EQU	0100H		; Zero page size
CCPSIZE		EQU	0800H		; CCP size

		IF	BANKED
BDOSSIZE	EQU	0E00H		; RESIDENT BDOS size
BIOSSIZE	EQU	0600H		; RESIDENT BIOS size
		ENDIF

		IF	NOT BANKED
BDOSSIZE	EQU	0E00H		; BDOS size
BIOSSIZE	EQU	0600H		; BIOS size
		ENDIF

TPALOC          EQU     CPMLOC+ZEROSIZE	; TPA address

CCPLOC          EQU     BIAS+03400H	; CCP Location
BDOSLOC         EQU     CCPLOC+CCPSIZE	; BDOS Location
BIOSLOC		EQU	BDOSLOC+BDOSSIZE; BIOS Location

;*********************************************************************
;* ZINC features control                                             *
;*********************************************************************

;--- Compatible API's

CPM3API		EQU	NO		; CP/M 3 API support

BPBIOSAPI	EQU	NO		; B/P BIOS API support

XBIOSAPI	EQU	YES		; Amstrad XBIOS API support
				; Use Amstrad XBIOS instead of B/P BIOS code for
				; disk operations. This turns off all disk support
				; code of B/P BIOS

;--- CCP resident commands support ---

Z_EXTCCP	EQU	NO		; CCP is Transient
Z_GO		EQU	YES		; CCP resident GO command support
Z_JUMP		EQU	YES		; CCP resident JUMP command support
Z_LIST		EQU	YES		; CCP resident LIST command support
Z_DFU		EQU	YES		; CCP resident DFU command support
Z_SAVE		EQU	YES		; CCP resident SAVE command support
Z_GET		EQU	YES		; CCP resident GET command support

