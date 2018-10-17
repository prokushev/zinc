;============================================================================
;		S E C T I O N  1  -  5.25" 40 Track Formats
;============================================================================
;			    Single-Sided
;============================================================================
;.....
;?  Actrix ACCESS, Single-Sided, Double-Density

	DEFB	'Actrx SSD','D'+80H ; Id - 10 bytes
	DEFB	02H		; Format type byte 0
	DEFB	02H		; Format type byte 1
	DEFB	3		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	9		; Physical sectors per track
	DEFB	40		; Physical tracks/side

	DEFW	36		; Sectors per track
	DEFB	3		; Block shift factor
	DEFB	7		; Block mask
	DEFB	0		; Extent mask
	DEFW	170		; Disk size-1
	DEFW	63		; Directory max
	DEFB	0C0H, 0		; Alloc 0,1
	DEFW	16		; Check size
	DEFW	2		; Track offset

	DEFB	01,04,07,02,05,08,03,06	; Physical sectors
	DEFB	09,00,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;*  Ampro 40-Track, Single-Sided, Double-Density

ENTR0:	DEFB	'Ampro SSD','D'+80H ; Id - 10 bytes
	DEFB	DSK5+SS+DD	    ; Format type byte 0
	DEFB	SPEED5+SEC512+ALC2K ; Format type byte 1
	DEFB	-2		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	10		; Physical sectors per track
	DEFB	40		; Physical tracks/side

DPB00:	DEFW	40		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	1		; Extent mask
	DEFW	94		; Disk size-1
	DEFW	63		; Directory max
	DEFB	80H, 0		; Alloc 0,1
	DEFW	16		; Check size
	DEFW	2		; Track offset

; NOTE: Sectors are Physical Size, Not 128 Byte record size
;		00 01 02 03 04 05 06 07 	; Logical Sector
	DEFB	01,02,03,04,05,00,00,00	; Physical sector
;		08 09 10 11 12 13 14 15 	; Logical Sector
	DEFB	00,00,00,00,00,00,00,00	; Physical sector
;		16 17 18 19 20 21 22 23 	; Logical Sector
	DEFB	00,00,00,00,00,00,00,00	; Physical sector
;		24 25				; Logical Sector
	DEFB	00,00			; Physical sector

HDRSIZ	EQU	DPB00-ENTR0	; DPB Header size
DPBSIZ	EQU	$-DPB00		; DPB Body size w/skew table

	DEFB	0,0,0,0,0,0,0	; Pad to 64-bytes

;.....
;?  DEC VT-180, Single-Sided, Double-Density

	DEFB	'VT180 SSD','D'+80H ; Id - 10 bytes
	DEFB	02H		; Format type byte 0
	DEFB	02H		; Format type byte 1
	DEFB	5		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	9		; Physical sectors per track
	DEFB	40		; Physical tracks/side

	DEFW	36		; Sectors per track
	DEFB	3		; Block shift factor
	DEFB	7		; Block mask
	DEFB	0		; Extent mask
	DEFW	170		; Disk size-1
	DEFW	63		; Directory max
	DEFB	0C0H, 0		; Alloc 0,1
	DEFW	16		; Check size
	DEFW	2		; Track offset

	DEFB	01,03,05,07,09,02,04,06	; Physical sectors
	DEFB	08,00,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;?  Heath/Zenith-100, 40 Track, Single-Sided, Double-Density

	DEFB	'H-100/4 1','D'+80H ; Id - 10 bytes
	DEFB	02H		; Format type byte 0
	DEFB	02H		; Format type byte 1
	DEFB	1		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	8		; Physical sectors per track
	DEFB	40		; Physical tracks/side

	DEFW	32		; Sectors per track
	DEFB	3		; Block shift factor
	DEFB	7		; Block mask
	DEFB	0		; Extent mask
	DEFW	151		; Disk size-1
	DEFW	127		; Directory max
	DEFB	0F0H, 0		; Alloc 0,1
	DEFW	32		; Check size
	DEFW	2		; Track offset

	DEFB	01,02,03,04,05,06,07,08	; Physical sectors
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;?  Heath/Zenith-89, 40 Track, Single-Sided, Single Density

	DEFB	'H89/40  1','S'+80H ; Id - 10 bytes
	DEFB	0C2H		; Format type byte 0
	DEFB	01H		; Format type byte 1
	DEFB	1		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	10		; Physical sectors per track
	DEFB	40		; Physical tracks/side

	DEFW	20		; Sectors per track
	DEFB	3		; Block shift factor
	DEFB	7		; Block mask
	DEFB	0		; Extent mask
	DEFW	91		; Disk size-1
	DEFW	63		; Directory max
	DEFB	0C0H, 0		; Alloc 0,1
	DEFW	16		; Check size
	DEFW	3		; Track offset

	DEFB	01,02,03,04,05,06,07,08	; Physical sectors
	DEFB	09,10,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;?  Heath/Zenith 89, 40 Track, Single-Sided, Double-Density

	DEFB	'H89/40  1','D'+80H ; Id - 10 bytes
	DEFB	02H		; Format type byte 0
	DEFB	01H		; Format type byte 1
	DEFB	-3		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	16		; Physical sectors per track
	DEFB	40		; Physical tracks/side

	DEFW	32		; Sectors per track
	DEFB	3		; Block shift factor
	DEFB	7		; Block mask
	DEFB	0		; Extent mask
	DEFW	151		; Disk size-1
	DEFW	127		; Directory max
	DEFB	0F0H, 0		; Alloc 0,1
	DEFW	32		; Check size
	DEFW	2		; Track offset

	DEFB	01,02,03,04,05,06,07,08	; Physical sectors
	DEFB	09,10,11,12,13,14,15,16
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;?  Heath/Zenith 89, 40 Track, Single-Sided, Extended-Density

	DEFB	'H89/40  1','X'+80H ; Id - 10 bytes
	DEFB	02H		; Format type byte 0
	DEFB	03H		; Format type byte 1
	DEFB	1		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	5		; Physical sectors per track
	DEFB	40		; Physical tracks/side

	DEFW	40		; Sectors per track
	DEFB	3		; Block shift factor
	DEFB	7		; Block mask
	DEFB	0		; Extent mask
	DEFW	189		; Disk size-1
	DEFW	127		; Directory max
	DEFB	0F0H, 0		; Alloc 0,1
	DEFW	32		; Check size
	DEFW	2		; Track offset

	DEFB	01,02,03,04,05,00,00,00	; Physical sectors
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;*  Kaypro 2, Single-Sided, Double-Density

	DEFB	'Kaypro 2 ',' '+80H ; Id - 10 bytes
	DEFB	DSK5+SS+DD	; Format type byte 0
	DEFB	SPEED5+SEC512+ALC1K ; Format type byte 1
	DEFB	-2		; Skew factor
	DEFB	0		; Starting sector number
	DEFB	10		; Physical sectors per track
	DEFB	40		; Physical tracks/side

	DEFW	40		; Sectors per track
	DEFB	3		; Block shift factor
	DEFB	7		; Block mask
	DEFB	0		; Extent mask
	DEFW	194		; Disk size-1
	DEFW	63		; Directory max
	DEFB	0F0H, 0		; Alloc 0,1
	DEFW	16		; Check size
	DEFW	1		; Track offset

	DEFB	00,01,02,03,04,05,06,07	; Physical sectors
	DEFB	08,09,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;?  Osborne 1, Single-Sided, Single-Density

	DEFB	'Osborne 1','S'+80H ; Id - 10 bytes
	DEFB	0C2H		; Format type byte 0
	DEFB	09H		; Format type byte 1
	DEFB	2		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	10		; Physical sectors per track
	DEFB	40		; Physical tracks/side

	DEFW	20		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	1		; Extent mask
	DEFW	45		; Disk size-1
	DEFW	63		; Directory max
	DEFB	80H, 0		; Alloc 0,1
	DEFW	16		; Check size
	DEFW	3		; Track offset

	DEFB	00,00,00,00,00,00,00,00	; Physical sectors
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;?  Osborne 2, Single-Sided, Double-Density

	DEFB	'Osborne 1','D'+80H ; Id - 10 bytes
	DEFB	02H		; Format type byte 0
	DEFB	03H		; Format type byte 1
	DEFB	-1		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	5		; Physical sectors per track
	DEFB	40		; Physical tracks/side

	DEFW	40		; Sectors per track
	DEFB	3		; Block shift factor
	DEFB	7		; Block mask
	DEFB	0		; Extent mask
	DEFW	184		; Disk size-1
	DEFW	63		; Directory max
	DEFB	0C0H, 0		; Alloc 0,1
	DEFW	16		; Check size
	DEFW	3		; Track offset

	DEFB	01,02,03,04,05,00,00,00	; Physical sectors
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;============================================================================
;			    Double-Sided
;============================================================================
;.....
;*  AMPRO/SB180/ON, Double-Sided, Double-Density

	DEFB	'Ampro DSD','D'+80H ; Id - 10 bytes
	DEFB	DSK5+DD+TSBTL	    ; Format type byte 0
	DEFB	SPEED5+SEC512+ALC2K ; Format type byte 1
	DEFB	-2		; Skew factor
	DEFB	17		; Starting sector number
	DEFB	10		; Physical sectors per track
	DEFB	40		; Physical tracks/side

	DEFW	40		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	1		; Extent mask
	DEFW	194		; Disk size-1
	DEFW	127		; Directory max
	DEFB	0C0H, 0		; Alloc 0,1
	DEFW	32		; Check size
	DEFW	2		; Track offset

	DEFB	17,18,19,20,21,22,23,24	; Physical sector
	DEFB	25,26,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;*  D-X Designs Pty Ltd P112 - 5.25", 40 Track, Double-Sided, Double-Density
;  This is an adaptation of the IBM "360k" Disk format for use with CP/M.

	DEFB	'D-X D5_36','0'+80H ; Id - 10 bytes
	DEFB	DSK5+DD+TSBSS	    ; Format type byte 0
	DEFB	SPEED5+SEC512+ALC2K ; Format type byte 1
	DEFB	-2		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	9		; Physical sectors per track
	DEFB	40		; Physical tracks/side

	DEFW	72		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	1		; Extent mask
	DEFW	174		; Disk size-1
	DEFW	63		; Directory max
	DEFB	80H, 0		; Alloc 0,1
	DEFW	16		; Check size
	DEFW	1		; Track offset

	DEFB	01,03,05,07,09,02,04,06	; Physical sectors
	DEFB	08,00,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;*  Epson QX-10, American 10-512 Sctrs, Double-Sided, Double-Density, Bootable.
;	(courtesy, Mr. Robert L. Edgecombe, Atascadero, CA)
; NOTE: System Tracks are 256 byte sectors, Recorded Skew of 4, Unknown layout.

	DEFB	'Epsn QX10','A'+80H ; Id - 10 bytes
	DEFB	DSK5+DD+TSBTL	    ; Format type byte 0
	DEFB	SPEED5+SEC512+ALC2K ; Format type byte 1
	DEFB	-3		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	10		; Physical sectors per track
	DEFB	40		; Physical tracks/side

	DEFW	40		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	1		; Extent mask
	DEFW	189		; Disk size-1
	DEFW	127		; Directory max
	DEFB	0C0H, 0		; Alloc 0,1
	DEFW	32		; Check size
	DEFW	4		; Track offset

	DEFB	01,08,05,02,09,06,03,10	; Physical sectors
	DEFB	07,04,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;*  Epson QX-10, European 16-256 Sctrs, Double-Sided, Double-Density
;	(courtesy, Mr. Robert L. Edgecombe, Atascadero, CA)
; NOTE: System Tracks are 256 byte sectors, Same Skew as Data, Unknown layout.

	DEFB	'Epsn QX10','E'+80H ; Id - 10 bytes
	DEFB	DSK5+DD+TSBTL	    ; Format type byte 0
	DEFB	SPEED5+SEC256+ALC2K ; Format type byte 1
	DEFB	-1		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	16		; Physical sectors per track
	DEFB	40		; Physical tracks/side

	DEFW	32		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	1		; Extent mask
	DEFW	139		; Disk size-1
	DEFW	63		; Directory max
	DEFB	80H, 0		; Alloc 0,1
	DEFW	16		; Check size
	DEFW	8		; Track offset

	DEFB	01,02,03,04,09,10,11,12	; Physical sectors
	DEFB	05,06,07,08,13,14,15,16
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;*  European Epson QX-10 Data Disk, Double-Sided, Dbl-Density, No System Tracks
;	(courtesy, Mr. Robert L. Edgecombe, Atascadero, CA)
; NOTE: Same as XL-M180T2 format.

	DEFB	'QX10E Dat','a'+80H ; Id - 10 bytes
	DEFB	DSK5+DD+TSBTL	    ; Format type byte 0
	DEFB	SPEED5+SEC1K+ALC2K  ; Format type byte 1
	DEFB	-2		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	5		; Physical sectors per track
	DEFB	40		; Physical tracks/side

	DEFW	40		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	0FH		; Block mask
	DEFB	1		; Extent mask
	DEFW	199		; Disk size-1
	DEFW	127		; Directory max
	DEFB	0C0H, 0		; Alloc 0,1
	DEFW	32		; Check size
	DEFW	0		; Track offset

	DEFB	01,04,02,05,03,00,00,00	; Physical sectors
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;*  Heath/Zenith 100, 40-Track, Double-Sided, Double-Density

	DEFB	'H-100 DSD','D'+80H ; Id - 10 bytes
	DEFB	32H		; Format type byte 0
	DEFB	0AH		; Format type byte 1
	DEFB	-1		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	8		; Physical sectors per track
	DEFB	40		; Physical tracks/side

	DEFW	32		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	1		; Extent mask
	DEFW	155		; Disk size-1
	DEFW	255		; Directory max
	DEFB	0F0H, 0		; Alloc 0,1
	DEFW	64		; Check size
	DEFW	2		; Track offset

	DEFB	01,02,03,04,05,06,07,08	; Physical sectors
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;?  Heath/Zenith 89, 40-Track, Double-Sided, Double-Density

	DEFB	'H89/40  2','D'+80H ; Id - 10 bytes
	DEFB	32H		; Format type byte 0
	DEFB	09H		; Format type byte 1
	DEFB	-3		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	16		; Physical sectors per track
	DEFB	40		; Physical tracks/side

	DEFW	32		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	0		; Extent mask
	DEFW	155		; Disk size-1
	DEFW	255		; Directory max
	DEFB	0F0H, 0		; Alloc 0,1
	DEFW	64		; Check size
	DEFW	2		; Track offset

	DEFB	01,02,03,04,05,06,07,08	; Physical sectors
	DEFB	09,10,11,12,13,14,15,16
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;?  Heath/Zenith 89, 40-Track, Double-Sided, Extended-Density

	DEFB	'H89/40  2','X'+80H ; Id - 10 bytes
	DEFB	32H		; Format type byte 0
	DEFB	0BH		; Format type byte 1
	DEFB	1		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	5		; Physical sectors per track
	DEFB	40		; Physical tracks/side

	DEFW	40		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	0		; Extent mask
	DEFW	194		; Disk size-1
	DEFW	255		; Directory max
	DEFB	0F0H, 0		; Alloc 0,1
	DEFW	64		; Check size
	DEFW	2		; Track offset

	DEFB	01,02,03,04,05,00,00,00	; Physical sectors
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;?  Hitachi QC-10, Double-Sided, Double-Density

	DEFB	'QC-10 DSD','D'+80H ; Id - 10 bytes
	DEFB	32H		; Format type byte 0
	DEFB	09H		; Format type byte 1
	DEFB	-2		; Skew factor			???
	DEFB	1		; Starting sector number
	DEFB	16		; Physical sectors per track
	DEFB	40		; Physical tracks/side

	DEFW	32		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	-1		; Extent mask
	DEFW	143		; Disk size-1
	DEFW	63		; Directory max
	DEFB	80H, 0		; Alloc 0,1
	DEFW	16		; Check size
	DEFW	8		; Track offset

	DEFB	01,02,03,04,05,06,07,08	; Physical sectors
	DEFB	09,10,11,12,13,14,15,16
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;*  Kaypro 4, Double-Sided, Double-Density (mod 5 Aug 95 per R.L.Edgecombe)

	DEFB	'Kaypro 4 ',' '+80H ; Id - 10 bytes
	DEFB	DSK5+DD+TSBSC	; Format type byte 0
	DEFB	SPEED5+SEC512+ALC2K ; Format type byte 1
	DEFB	-2		; Skew factor
	DEFB	0		; Starting sector number
	DEFB	10		; Physical sectors per track
	DEFB	40		; Physical tracks/side

	DEFW	40		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	1		; Extent mask
	DEFW	196		; Disk size-1
	DEFW	127		; Directory max
	DEFB	0C0H, 0		; Alloc 0,1
	DEFW	32		; Check size
	DEFW	1		; Track offset

	DEFB	00,01,02,03,04,05,06,07	; Physical sectors
	DEFB	08,09,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;?  Morrow MD3, Double-Sided, Double-Density

	DEFB	'MD-3  DSD','D'+80H ; Id - 10 bytes
	DEFB	32H		; Format type byte 0
	DEFB	0BH		; Format type byte 1
	DEFB	2		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	5		; Physical sectors per track
	DEFB	40		; Physical tracks/side

	DEFW	40		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	1		; Extent mask
	DEFW	194		; Disk size-1
	DEFW	191		; Directory max
	DEFB	0E0H, 0		; Alloc 0,1
	DEFW	48		; Check size
	DEFW	2		; Track offset

	DEFB	01,04,02,05,03,00,00,00	; Physical sectors
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;?  PMC-101 MicroMate, Type A, Double-Sided, Double-Density

	DEFB	'PMC-101  ',' '+80H ; Id - 10 bytes
	DEFB	32H		; Format type byte 0
	DEFB	0BH		; Format type byte 1
	DEFB	-1		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	5		; Physical sectors per track
	DEFB	40		; Physical tracks/side

	DEFW	40		; Sectors per track
	DEFB	5		; Block shift factor
	DEFB	15		; Block mask
	DEFB	1		; Extent mask
	DEFW	194		; Disk size-1
	DEFW	127		; Directory max
	DEFB	0C0H, 0		; Alloc 0,1
	DEFW	32		; Check size
	DEFW	2		; Track offset

	DEFB	01,02,03,04,05,00,00,00	; Physical sectors
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;?  Sanyo MBC-1000/1100, Double-Sided, Double-Density

	DEFB	'Sanyo 100','0'+80H ; Id - 10 bytes
	DEFB	32H		; Format type byte 0
	DEFB	09H		; Format type byte 1
	DEFB	3		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	16		; Physical sectors per track
	DEFB	40		; Physical tracks/side

	DEFW	32		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	1		; Extent mask
	DEFW	155		; Disk size-1
	DEFW	63		; Directory max
	DEFB	80H, 0		; Alloc 0,1
	DEFW	16		; Check size
	DEFW	2		; Track offset

	DEFB	01,04,07,10,13,16,03,06	; Physical sectors
	DEFB	09,12,15,02,05,08,11,14
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;?  Seequa Chameleon Computer, Double-Sided, Double-Density 5.25"

	DEFB	'Chameleon',' '+80H ; Id - 10 bytes
	DEFB	2AH		; Format type byte 0 (5",S0 All S1 rev,Trk0 DD)
	DEFB	0AH		; Format type byte 1 (300rpm,512 Sctrs,2k Alloc)
	DEFB	-2		; Skew Factor
	DEFB	1		; Starting Sector Number
	DEFB	8		; Physical Sectors per Track
	DEFB	40		; Physical tracks/side

	DEFW	32		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	1		; Extent mask
	DEFW	157		; Disk size-1
	DEFW	63		; Directory max
	DEFB	80H, 0		; Alloc 0,1
	DEFW	16		; Check size
	DEFW	1		; Track offset

	DEFB	01,02,03,04,05,06,07,08	; Physical sectors
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;*  Televideo 802/803, Double-Sided, Double-Density

	DEFB	'TV 802/80','3'+80H ; Id - 10 bytes
	DEFB	32H		; Format type byte 0
	DEFB	09H		; Format type byte 1
	DEFB	-3		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	18		; Physical sectors per track
	DEFB	40		; Physical tracks/side

	DEFW	36		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	0		; Extent mask
	DEFW	170		; Disk size-1
	DEFW	63		; Directory max
	DEFB	80H, 0		; Alloc 0,1
	DEFW	16		; Check size
	DEFW	4		; Track offset

	DEFB	01,02,03,04,05,06,07,08	; Physical sectors
	DEFB	09,10,11,12,13,14,15,16
	DEFB	17,18,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;*  XBIOS Native-3, Double-Sided, Double-Density, No System Tracks

	DEFB	'XBIOS-3 2','D'+80H ; Id - 10 bytes
	DEFB	DSK5+DD+TSBTL	    ; Format type byte 0
	DEFB	SPEED5+SEC512+ALC2K ; Format type byte 1
	DEFB	-2		; Skew factor
	DEFB	27		; Starting sector number
	DEFB	10		; Physical sectors per track
	DEFB	40		; Physical tracks/side

	DEFW	40		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	1		; Extent mask
	DEFW	199		; Disk size-1
	DEFW	127		; Directory max
	DEFB	0C0H, 0		; Alloc 0,1
	DEFW	32		; Check size
	DEFW	0		; Track offset

	DEFB	17,18,19,20,21,22,23,24	; Physical sector
	DEFB	25,26,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;*  XEROX Format 6, Double-Sided, Double-Density, Bootable		TEST
;	(courtesy, Mr. Robert L. Edgecombe, Atascadero, CA)
; NOTE: May NOT work!  <Head number 0F0H for Side #0, 0F2H for Side #1>

	DEFB	'XEROX 512',' '+80H ; Id - 10 bytes
	DEFB	DSK5+DD+TSBTL	    ; Format type byte 0
	DEFB	SPEED5+SEC512+ALC2K ; Format type byte 1
	DEFB	-2		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	9		; Physical sectors per track
	DEFB	40		; Physical tracks/side

	DEFW	36		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	1		; Extent mask
	DEFW	172		; Disk size-1
	DEFW	127		; Directory max
	DEFB	0C0H, 0		; Alloc 0,1
	DEFW	32		; Check size
	DEFW	3		; Track offset

	DEFB	17,18,19,20,21,22,23,24	; Physical sector
	DEFB	25,26,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;?  XEROX Format 5, Double-Sided, Double-Density, No System Tracks.	TEST
; Annotated as Data Only, 820-II compatlble, Can't Boot on Xerox 16/8 Computer.
;	(courtesy, Mr. Robert L. Edgecombe, Atascadero, CA)
; NOTE: May NOT work!  <Head number 0F0H for Side #0, 0F2H for Side #1>

	DEFB	'XEROX 256',' '+80H ; Id - 10 bytes
	DEFB	DSK5+DD+TSBTL	    ; Format type byte 0
	DEFB	SPEED5+SEC256+ALC2K ; Format type byte 1
	DEFB	-2		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	17		; Physical sectors per track
	DEFB	40		; Physical tracks/side

	DEFW	34		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	1		; Extent mask
	DEFW	169		; Disk size-1
	DEFW	127		; Directory max
	DEFB	0C0H, 0		; Alloc 0,1
	DEFW	32		; Check size
	DEFW	0		; Track offset

	DEFB	17,18,19,20,21,22,23,24	; Physical sector
	DEFB	25,26,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;*  XL-M180 TurboDos-2 Format, Double-Sided, Double-Density, No System Tracks

	DEFB	'XL-M180 T','2'+80H ; Id - 10 bytes
	DEFB	DSK5+DD+TSBTL	    ; Format type byte 0
	DEFB	SPEED5+SEC1K+ALC2K  ; Format type byte 1
	DEFB	-2		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	5		; Physical sectors per track
	DEFB	40		; Physical tracks/side

	DEFW	40		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	0FH		; Block mask
	DEFB	1		; Extent mask
	DEFW	199		; Disk size-1
	DEFW	127		; Directory max
	DEFB	0C0H, 0		; Alloc 0,1
	DEFW	32		; Check size
	DEFW	0		; Track offset

	DEFB	01,02,03,04,05,00,00,00	; Physical sectors
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad
