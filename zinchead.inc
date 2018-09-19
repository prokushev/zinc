;
;    ZINC header: This file contains common definitions for ZINC programs.  
;    Copyright (C) 2000,2001  John Elliott <jce@seasip.demon.co.uk>
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
; ---------------------------------------------------------------------------
;
; This is startup file which provides MS-DOS protection (write error end exit under MS-DOS),
; initializes configuration variables end pass control to MAIN label. Also provides machine
; configuration check end exits if no required features are presented.
;
; Usage is:
;
; ; Program title
;
; ; -- SECTION 0 -- Configuration and startup
; CPM3  EQU 0 ; Requires CP/M 3
; CPNET EQU 0 ; Requires CP/NET
; Z80   EQU 0 ; Requires Z80 CPU
;
;       INCLUDE ZINCHEAD.INC
;
; ; -- SECTION 1 -- Entry point
; MAIN: RET
;

        .Z80
        CSEG

FCB	EQU	005Ch
CR	EQU	0Dh
LF	EQU	0Ah
EOF	EQU	1Ah

NO	EQU	0
YES	EQU	NOT NO

	EXT	BDOS		;SYSLIB

BASE:	DEFB	0EBh,04h	;DOS protection... JMPS LABE
	EX	DE,HL
	JP	BEGIN
	DEFB	0B4h,09h	;DOS protection... MOV AH,9
	DEFB	0BAh
	DEFW	BVMES		;DOS protection... MOV DX,OFFSET BVMES
	DEFB	0CDh,021h	;DOS protection... INT 21h.
	DEFB	0CDh,020h	;DOS protection... INT 20h.
;
        DSEG

BVMES:	DEFB	'Requires CP/M '
	IF	CPM3
	DEFB	'3'
	ELSE
	DEFB	'2'
	ENDIF
	DEFB	' and a '
        IF  Z80
        DEFB    'Z80'
        ELSE
        DEFB    '8080'
        ENDIF
        DEFB    ' CPU',cr,lf,'$'
	IF	CPNET
BNMES	DEFB    'Requires network support',cr,lf,'$'
        ENDIF

	CSEG

BEGIN:
        IF  Z80
        SUB	A
	JP	PE, BADVER
        ENDIF

	IF  CPNET OR CPM3
	LD	C, 0Ch
	CALL	BDOS
	IF	CPM3
	CP	30h
	JP	C, BADVER	; <30h
	ENDIF
	IF	NOT CPM3
	CP	20h
	JP	C, BADVER	; <20h
	ENDIF
	IF	CPNET
	LD	A, H
	AND	00000010b
	JP	Z, BADNET
	ENDIF
	ENDIF
	JP	MAIN

       	IF	CPNET
BADNET:	LD	DE, BNMES
	JP	BADMSG
        ENDIF
BADVER: LD	DE, BVMES
BADMSG: LD	C, 9
	JP	BDOS

;
	DEFS	BASE+40h-$
	DEFB	'ZINC v3.2.0 Copy'
	DEFB	'right 2001 J. El'
	DEFB	'liott. GPLed. '
	DEFB	'20010307'		;Date in YYYYMMDD format
	DEFB	0,0,0,0			;Patchlevel
	DEFB	'654321'		;Serial number
;

        CSEG
        
