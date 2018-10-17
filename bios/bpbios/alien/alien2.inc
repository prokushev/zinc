;============================================================================
;	    S E C T I O N  2  -  5.25" & 3.5" 80 Track Formats
;============================================================================
;			    Single-Sided
;============================================================================
;.....
;*  Ampro, 80-Track, Single-Sided, Quad-Density

	DEFB	'Ampro SSQ','D'+80H ; Id - 10 bytes
	DEFB	DSK5+SS+DD	    ; Format type byte 0
	DEFB	SPEED5+SEC1K+ALC2K  ; Format type byte 1
	DEFB	-2		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	5		; Physical sectors per track
	DEFB	80		; Physical tracks/side

	DEFW	40		; Sectors per track
	DEFB	4		; Block shift factor
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
;?  DEC Rainbow, Single-Sided, Double-Density

	DEFB	'DEC Rainb','o'+80H ; Id - 10 bytes
	DEFB	02H		; Format type byte 0
	DEFB	0AH		; Format type byte 1
	DEFB	2		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	10		; Physical sectors per track
	DEFB	80		; Physical tracks/side

	DEFW	40		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	1		; Extent mask
	DEFW	194		; Disk size-1
	DEFW	127		; Directory max
	DEFB	0C0H, 0		; Alloc 0,1
	DEFW	32		; Check size
	DEFW	2		; Track offset

	DEFB	01,03,05,07,09,02,04,06	; Physical sectors
	DEFB	08,10,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;?  Eagle IIE-2, Single-Sided, Double-Density

	DEFB	'Eagle-IIE',' '+80H ; Id - 10 bytes
	DEFB	02H		; Format type byte 0
	DEFB	0BH		; Format type byte 1
	DEFB	2		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	5		; Physical sectors per track
	DEFB	80		; Physical tracks/side

	DEFW	40		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	1		; Extent mask
	DEFW	194		; Disk size-1
	DEFW	191		; Directory max
	DEFB	0E0H, 0		; Alloc 0,1
	DEFW	48		; Check size
	DEFW	2		; Track offset

	DEFB	01,03,05,02,04,00,00,00	; Physical sectors
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;?  Heath/Zenith 89, 80-Track, Single-Sided, Double-Density

	DEFB	'H89/80  1','D'+80H ; Id - 10 bytes
	DEFB	02H		; Format type byte 0
	DEFB	09H		; Format type byte 1
	DEFB	-3		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	16		; Physical sectors per track
	DEFB	80		; Physical tracks/side

	DEFW	32		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	1		; Extent mask
	DEFW	155		; Disk size-1
	DEFW	127		; Directory max
	DEFB	0C0H, 0		; Alloc 0,1
	DEFW	32		; Check size
	DEFW	2		; Track offset

	DEFB	01,02,03,04,05,06,07,08	; Physical sectors
	DEFB	09,10,11,12,13,14,15,16
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;?  Heath/Zenith 89, 80 Track, Single-Sided, Extended-Density

	DEFB	'H89/80  1','X'+80H ; Id - 10 bytes
	DEFB	02H		; Format type byte 0
	DEFB	0BH		; Format type byte 1
	DEFB	1		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	5		; Physical sectors per track
	DEFB	80		; Physical tracks/side

	DEFW	40		; Sectors per track
	DEFB	4		; Block shift factor
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
;============================================================================
;			    Double-Sided
;============================================================================
;.....
;*  AMPRO/SB180/ON, 80-Track, Double-Sided, Quad-Density

	DEFB	'Ampro DSQ','D'+80H ; Id - 10 bytes
	DEFB	DSK5+DD+TSBTL	    ; Format type byte 0
	DEFB	SPEED5+SEC1K+ALC2K  ; Format type byte 1
	DEFB	-2		; Skew factor
	DEFB	17		; Starting sector number
	DEFB	5		; Physical sectors per track
	DEFB	80		; Physical tracks/side

	DEFW	40		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	0		; Extent mask
	DEFW	394		; Disk size-1
	DEFW	255		; Directory max
	DEFB	0F0H, 0		; Alloc 0,1
	DEFW	64		; Check size
	DEFW	2		; Track offset

	DEFB	17,18,19,20,21,00,00,00	; Physical sectors
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;*  Amstrad PCW-9512, 3.5", 80 Track, Double-Sided, Double-Density
;    Word-Processing System running under CP/M+.

	DEFB	'Amstrad W','P'+80H ; Id - 10 bytes
	DEFB	33H		; Format type byte 0
	DEFB	0AH		; Format type byte 1
	DEFB	-2		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	9		; Physical sectors per track
	DEFB	80		; Physical tracks/side

	DEFW	36		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	0		; Extent mask
	DEFW	356		; Disk size-1
	DEFW	255		; Directory max
	DEFB	0F0H, 0		; Alloc 0,1
	DEFW	64		; Check size
	DEFW	1		; Track offset

	DEFB	01,02,03,04,05,06,07,08	; Physical sectors
	DEFB	09,00,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;?  Heath/Zenith 89, 80-Track, Double-Sided, Double-Density

	DEFB	'H89/80  2','D'+80H ; Id - 10 bytes
	DEFB	32H		; Format type byte 0
	DEFB	09H		; Format type byte 1
	DEFB	-3		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	16		; Physical sectors per track
	DEFB	80		; Physical tracks/side

	DEFW	32		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	0		; Extent mask
	DEFW	315		; Disk size-1
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
;?  Heath/Zenith 89, 80-Track, Double-Sided, Extended-Density

	DEFB	'H89/80  2','X'+80H ; Id - 10 bytes
	DEFB	32H		; Format type byte 0
	DEFB	0BH		; Format type byte 1
	DEFB	1		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	5		; Physical sectors per track
	DEFB	80		; Physical tracks/side

	DEFW	40		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	0		; Extent mask
	DEFW	395		; Disk size-1
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
;?  REH1 REH CPU280 5x1024 - DSDD 96 tpi 5.25" 780K Disk
;  This format is not bootable under CP/M 2.2

	DEFB	'REH1   28','0'+80H ; Id - 10 bytes
	DEFB	DSK5+DD+TSBTL	    ; Format type byte 0
	DEFB	SPEED5+SEC1K+ALC2K  ; Format type byte 1
	DEFB	2		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	5		; Physical sectors per track
	DEFB	80		; Physical tracks/side

	DEFW	40		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	0		; Extent mask
	DEFW	399		; Disk size-1
	DEFW	255		; Directory max
	DEFB	0F0H, 0		; Alloc 0,1
	DEFW	64		; Check size
	DEFW	0		; Track offset

	DEFB	17,18,19,20,21,00,00,00	; Physical sectors
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;*  XBIOS Native 4, 80-Track, Double-Sided, Quad-Density, No System Tracks

	DEFB	'XBIOS-4 2','Q'+80H ; Id - 10 bytes
	DEFB	DSK5+DD+TSBTL	    ; Format type byte 0
	DEFB	SPEED5+SEC1K+ALC2K  ; Format type byte 1
	DEFB	-2		; Skew factor
	DEFB	27		; Starting sector number
	DEFB	5		; Physical sectors per track
	DEFB	80		; Physical tracks/side

	DEFW	40		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	0		; Extent mask
	DEFW	399		; Disk size-1
	DEFW	255		; Directory max
	DEFB	0F0H, 0		; Alloc 0,1
	DEFW	64		; Check size
	DEFW	0		; Track offset

	DEFB	17,18,19,20,21,00,00,00	; Physical sectors
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;*  SuperIO, 3.5", 80 Track, MS-DOS "720k", Double-Sided, Double-Density
;    CP/M+.

	DEFB	'SuperIO 3','D'+80H ; Id - 10 bytes
	DEFB	DSK3+DD+TSBTL	    ; Format type byte 0
	DEFB	SPEED5+SEC512+ALC2K  ; Format type byte 1
	DEFB	-1		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	9		; Physical sectors per track
	DEFB	80		; Physical tracks/side

	DEFW	36		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	0		; Extent mask
	DEFW	354		; Disk size-1
	DEFW	127		; Directory max
	DEFB	0C0H, 0		; Alloc 0,1
	DEFW	32		; Check size
	DEFW	2		; Track offset

	DEFB	01,02,03,04,05,06,07,08	; Physical sectors
	DEFB	09,00,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad
