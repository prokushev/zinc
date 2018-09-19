;============================================================================
;			S E C T I O N  3  -  8" Formats
;============================================================================
;				Single-Sided
;============================================================================
;.....
;*  CCS/CompuPro, Single-Sided, Double-Density

	DEFB	'CCS   SSD','D'+80H ; Id - 10 bytes
	DEFB	01H		; Format type byte 0
	DEFB	8BH		; Format type byte 1
	DEFB	3		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	8		; Physical sectors per track
	DEFB	77		; Physical tracks/side

	DEFW	64		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	0		; Extent mask
	DEFW	299		; Disk size-1
	DEFW	127		; Directory max
	DEFB	0C0H, 0		; Alloc 0,1
	DEFW	32		; Check size
	DEFW	2		; Track offset

	DEFB	01,04,07,02,05,08,03,06	; Physical sectors
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;*  IBM 3740, 8-inch, Single-Sided, Single-Density

	DEFB	'IBM 3740 ',' '+80H ; Id - 10 bytes
	DEFB	DSK8+SS+SD	    ; Format type byte 0
	DEFB	SPEED8+SEC128+ALC1K ; Format type byte 1
	DEFB	6		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	26		; Physical sectors per track
	DEFB	77		; Physical tracks/side

	DEFW	26		; Sectors per track
	DEFB	3		; Block shift factor
	DEFB	7		; Block mask
	DEFB	0		; Extent mask
	DEFW	242		; Disk size-1
	DEFW	63		; Directory max
	DEFB	0C0H, 0		; Alloc 0,1
	DEFW	16		; Check size
	DEFW	2		; Track offset

	DEFB	01,07,13,19,25,05,11,17	; Physical sectors
	DEFB	23,03,09,15,21,02,08,14
	DEFB	20,26,06,12,18,24,04,10
	DEFB	16,22

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;*  Bower 8" 1k-sctrs, Single-Sided, Double-Density

	DEFB	'Bower 8"1','D'+80H ; Id - 10 bytes
	DEFB	DSK8+SS+DD	    ; Format type byte 0
	DEFB	SPEED8+SEC1K+ALC2K  ; Format type byte 1
	DEFB	-2		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	9		; Physical sectors per track
	DEFB	77		; Physical tracks/side

	DEFW	72		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	0		; Extent mask
	DEFW	336		; Disk size-1
	DEFW	255		; Directory max
	DEFB	0F0H, 0		; Alloc 0,1
	DEFW	64		; Check size
	DEFW	2		; Track offset

	DEFB	01,02,03,04,05,06,07,08	; Physical sectors
	DEFB	09,00,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;?  Teletek 8", Single-Sided, Double-Density

	DEFB	'TTek  SSD','D'+80H ; Id - 10 bytes
	DEFB	DSK8+SS+DD+T0S0SD ; Format type byte 0
	DEFB	SPEED8+SEC256+ALC2K ; Format type byte 1
	DEFB	6		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	26		; Physical sectors per track
	DEFB	77		; Physical tracks/side

	DEFW	52		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	1		; Extent mask
	DEFW	242		; Disk size-1
	DEFW	127		; Directory max
	DEFB	0C0H, 0		; Alloc 0,1
	DEFW	32		; Check size
	DEFW	2		; Track offset

	DEFB	01,07,13,19,25,05,11,17	; Physical sectors
	DEFB	23,03,09,15,21,02,08,14
	DEFB	20,26,06,12,18,24,04,10
	DEFB	16,22

	DEFB	0,0,0,0,0,0,0	; Pad

;============================================================================
;			    Double-Sided
;============================================================================
;.....
;*  Bower 8", 1k sctrs, Double-Sided, Double-Density

	DEFB	'Bower 8"2','D'+80H ; Id - 10 bytes
	DEFB	DSK8+TSBTL+DD	    ; Format type byte 0
	DEFB	SPEED8+SEC1K+ALC2K  ; Format type byte 1
	DEFB	-2		; Skew factor
	DEFB	17		; Starting sector number
	DEFB	9		; Physical sectors per track
	DEFB	77		; Physical tracks/side

	DEFW	72		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	0		; Extent mask
	DEFW	683		; Disk size-1
	DEFW	255		; Directory max
	DEFB	0F0H, 0		; Alloc 0,1
	DEFW	64		; Check size
	DEFW	2		; Track offset

	DEFB	17,18,19,20,21,22,23,24	; Physical sectors
	DEFB	25,00,00,00,00,00,00,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;?  CCS/CompuPro 8", Double-Sided, Double-Density

	DEFB	'CCS   DSD','D'+80H ; Id - 10 bytes
	DEFB	31H		; Format type byte 0
	DEFB	8AH		; Format type byte 1
	DEFB	4		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	15		; Physical sectors per track
	DEFB	77		; Physical tracks/side

	DEFW	60		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	0		; Extent mask
	DEFW	561		; Disk size-1
	DEFW	255		; Directory max
	DEFB	0F0H, 0		; Alloc 0,1
	DEFW	64		; Check size
	DEFW	4		; Track offset

	DEFB	01,05,09,13,02,06,10,14	; Physical sectors
	DEFB	03,07,11,15,04,08,12,00
	DEFB	00,00,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;?  Teletek 8" (CC Modified), Double-Sided, Double-Density

	DEFB	'TTek DSDD','2'+80H  ; Id - 10 bytes
	DEFB	DSK8+DD+TSBTM+T0S0SD ; Format type byte 0
	DEFB	SPEED8+SEC256+ALC2K  ; Format type byte 1
	DEFB	6		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	26		; Physical sectors per track
	DEFB	77		; Physical tracks/side

	DEFW	52		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	0		; Extent mask
	DEFW	493		; Disk size-1
	DEFW	255		; Directory max
	DEFB	0F0H, 0		; Alloc 0,1
	DEFW	64		; Check size
	DEFW	2		; Track offset

	DEFB	01,07,13,19,25,05,11,17	; Physical sectors
	DEFB	23,03,09,15,21,02,08,14
	DEFB	20,26,06,12,18,24,04,10
	DEFB	16,22

	DEFB	0,0,0,0,0,0,0	; Pad
;.....
;?  Teletek 8" (STOCK), Double-Sided, Double-Density

	DEFB	'TTek DSDD','1'+80H  ; Id - 10 bytes
	DEFB	DSK8+DD+TSBTM+T0S0SD ; Format type byte 0
	DEFB	SPEED8+SEC256+ALC2K  ; Format type byte 1
	DEFB	6		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	26		; Physical sectors per track
	DEFB	77		; Physical tracks/side

	DEFW	52		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	0		; Extent mask
	DEFW	493		; Disk size-1
	DEFW	127		; Directory max
	DEFB	0C0H, 0		; Alloc 0,1
	DEFW	32		; Check size
	DEFW	2		; Track offset

	DEFB	01,07,13,19,25,05,11,17	; Physical sectors
	DEFB	23,03,09,15,21,02,08,14
	DEFB	20,26,06,12,18,24,04,10
	DEFB	16,22

	DEFB	0,0,0,0,0,0,0	; Pad
