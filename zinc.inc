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
;* List of supported machines
;*******************************************************************

M_ZXP3          EQU     1       ; ZX Spectrum +3
M_ZXP3E         EQU     2       ; ZX Spectrum +3e
M_ZXNEXT        EQU     3       ; ZX Spectrum Next
M_ZXEVO         EQU     4       ; ZX Evolution

;*******************************************************************
;* Base ZINC configuration
;*******************************************************************

MACHINE         EQU     M_ZXP3

;*******************************************************************
;* Machine specific configuration
;*******************************************************************

                IF      MACHINE=M_ZXP3
BANKED          EQU     1               ; Banked version
ROM             EQU     0               ; Not ROM based version
                ENDIF
                
                IF      MACHINE=M_ZXP3E
BANKED          EQU     1               ; Banked version
ROM             EQU     0               ; Not ROM based version
                ENDIF

                IF      MACHINE=M_ZXNEXT
BANKED          EQU     1               ; Banked version
ROM             EQU     0               ; Not ROM based version
                ENDIF

                IF      MACHINE=M_ZXEVO
BANKED          EQU     1               ; Banked version
ROM             EQU     1               ; ROM based version
                ENDIF
                
;*******************************************************************
;* ZINC bank 0 memory map. By default standard DRI CP/M 2 addresses
;*******************************************************************

                IF      MACHINE=M_ZXP3 OR MACHINE=M_ZXP3E OR MACHINE=M_ZXNEXT OR MACHINE=M_ZXEVO
CPMLOC          EQU     00000H          ; CP/M starting address
TPALOC          EQU     00100H          ; TPA address
CCPLOC          EQU     0DC00H          ; CCP Location
BDOSLOC         EQU     0E400H          ; BDOS Location
BIOSLOC         EQU     0F200H          ; BIOS Location
                ENDIF
