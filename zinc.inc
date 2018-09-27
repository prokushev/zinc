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
;* Base ZINC configuration
;*******************************************************************

MACHINE         EQU     M_ZXP3

;*******************************************************************
;* List of supported machines
;*******************************************************************

M_ZXP2A		EQU     0       ; ZX Spectrum +2A
M_ZXP3		EQU     1       ; ZX Spectrum +3
M_ZXP3E		EQU     2       ; ZX Spectrum +3e
M_ZXNEXT	EQU     3       ; ZX Spectrum Next
M_ZXEVO		EQU     4       ; ZX Evolution

;*******************************************************************
;* Machine specific configuration
;*******************************************************************
;* BANKED determines is banked or non-banked version
;* ROM determines is ZINC resides in ROM or in RAM
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
                IF      MACHINE=M_ZXP2A
BANKED          EQU     1               ; Banked version
ROM             EQU     0               ; Not ROM based version
BIAS		EQU	0		; ZINC BIAS
                ENDIF

                IF      MACHINE=M_ZXP3
BANKED          EQU     0               ; Banked version ; !!! For prototype only !!!
ROM             EQU     0               ; Not ROM based version
BIAS		EQU	0		; ZINC BIAS
                ENDIF
                
                IF      MACHINE=M_ZXP3E
BANKED          EQU     1               ; Banked version
ROM             EQU     0               ; Not ROM based version
BIAS		EQU	0		; ZINC BIAS
                ENDIF

                IF      MACHINE=M_ZXNEXT
BANKED          EQU     1               ; Banked version
ROM             EQU     0               ; Not ROM based version
BIAS		EQU	0		; ZINC BIAS
                ENDIF

                IF      MACHINE=M_ZXEVO
BANKED          EQU     1               ; Banked version
ROM             EQU     1               ; ROM based version
BIAS		EQU	0		; ZINC BIAS
                ENDIF
                
;*******************************************************************
;* ZINC bank 1 memory map (resident part, CP/M 2 sizes comatibility)
;*******************************************************************

ZEROSIZE	EQU	0100H		; Zero page size
CCPSIZE		EQU	0800H		; CPP size
		IF	BANKED
BDOSSIZE	EQU	0E00H		; BDOS size
BIOSSIZE	EQU	0E00H		; BIOS size
		ENDIF

		IF	NOT BANKED
BDOSSIZE	EQU	0E00H		; BDOS size
BIOSSIZE	EQU	0E00H		; BIOS size
		ENDIF

CPMLOC          EQU     00000H          ; ZINC starting address
TPALOC          EQU     CPMLOC+ZEROSIZE	; TPA address

CCPLOC          EQU     BIAS+03400H	; CCP Location
BDOSLOC         EQU     CCPLOC+CCPSIZE	; BDOS Location
BIOSLOC		EQU	BDOSLOC+BDOSSIZE; BIOS Location
