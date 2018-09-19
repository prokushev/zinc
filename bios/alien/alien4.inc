;============================================================================
;	    S E C T I O N  4  -  'High-Density' Formats (500 kb/s)
;============================================================================
;			    5.25" Formats
;============================================================================
;.....
;*  Bower/Cotrill 5.25" High-Density Format (1.44 MB)
;  The format is: 9-1k Sectors/Track, Format Skew of 2 (sequential R/W),
;   500kbps data rate, 360rpm.
;  A Sector offset of 48 (30H) is used to differentiate from other formats.

	DEFB	'BP 5.25"H','D'+80H ; Id - 10 bytes
	DEFB	DSK5+DD+TSBTL	    ; Format type byte 0
	DEFB	SPEED8+SEC1K+ALC2K  ; Format type byte 1
	DEFB	-2		; Skew factor
	DEFB	49		; Starting sector number
	DEFB	9		; Physical sectors per track
	DEFB	80		; Physical tracks/side

	DEFW	72		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	0		; Extent mask
	DEFW	710		; Disk size-1
	DEFW	255		; Directory max
	DEFB	0F0H, 0		; Alloc 0, 1
	DEFW	64		; Check size
	DEFW	2		; Track offset

	DEFB	49,54,50,55,51,56,52,57	; Physical sectors
	DEFB	53,00,00,00,00,00,00,00	; Physical sector
	DEFB	00,00,00,00,00,00,00,00	; Physical sector
	DEFB	00,00			; Physical sector

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;? REH2 REH CPU280 9x1024 - HD 96 tpi 5.25" 1.432K Disk
;  The format is: 9-1k Sectors/Track, Sequential Format Skew (Skew=2 for R/W),
;  500kbps data rate, 360rpm.
; This format is not bootable under CP/M 2.2

	DEFB	'REH2   28','0'+80H ; Id - 10 bytes
	DEFB	DSK5+DD+TSBTL	    ; Format type byte 0
	DEFB	SPEED8+SEC1K+ALC4K  ; Format type byte 1
	DEFB	2		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	9		; Physical sectors per track
	DEFB	80		; Physical tracks/side

	DEFW	72		; Sectors per track
	DEFB	5		; Block shift factor
	DEFB	31		; Block mask
	DEFB	1		; Extent mask
	DEFW	359		; Disk size-1
	DEFW	255		; Directory max
	DEFB	0C0H, 0		; Alloc 0, 1
	DEFW	64		; Check size
	DEFW	0		; Track offset

	DEFB	01,03,05,07,09,02,04,06	; Physical sectors
	DEFB	08,00,00,00,00,00,00,00	; Physical sector
	DEFB	00,00,00,00,00,00,00,00	; Physical sector
	DEFB	00,00			; Physical sector

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;?  IBM/MS-DOS Formatted 5.25" HD Disks
;  This format is: 15-512 byte Sectors/Track, No Format Skew (sequential R/W),
;  500 kbps data rate, 360 rpm.

	DEFB	'IBM-HD 5"',' '+80H ; Id - 10 bytes
	DEFB	DSK5+DD+TSBTL	    ; Format type byte 0
	DEFB	SPEED8+SEC512+ALC2K ; Format type byte 1
	DEFB	-1		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	15		; Physical sectors per track
	DEFB	80		; Physical tracks/side

	DEFW	60		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	0		; Extent mask
	DEFW	599		; Disk size-1
	DEFW	255		; Directory max
	DEFB	0F0H, 0		; Alloc 0, 1
	DEFW	64		; Check size
	DEFW	0		; Track offset

	DEFB	01,02,03,04,05,06,07,08	; Physical sectors
	DEFB	09,10,11,12,13,14,15,16	; Physical sector
	DEFB	17,18,00,00,00,00,00,00	; Physical sector
	DEFB	00,00			; Physical sector

	DEFB	0,0,0,0,0,0,0	; Pad

;============================================================================
;			    3.5" Formats
;============================================================================
;.....
;*  HD Bower/Cotrill 3.5" Format (1.76 MB)
;  The format is: 11-1k Sectors/Track, Format Skew of 2 (sequential R/W),
;  500kbps data rate, 300rpm.
;  A Sector offset of 64 (40H) is used to differentiate from other formats.
; NOTE: Parenthetical Numbers are for 1.60 MB format.

	DEFB	'BP 3.5" H','D'+80H ; Id - 10 bytes
	DEFB	DSK3+DD+TSBTL	    ; Format type byte 0
	DEFB	SPEED8+SEC1K+ALC2K  ; Format type byte 1
	DEFB	-2		; Skew factor
	DEFB	65		; Starting sector number
	DEFB	11		; Physical sectors per track	(10)
	DEFB	80		; Physical tracks/side

	DEFW	88		; Sectors per track		(80)
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	0		; Extent mask
	DEFW	873		; Disk size-1			(794)
	DEFW	255		; Directory max
	DEFB	0F0H, 0		; Alloc 0, 1
	DEFW	64		; Check size
	DEFW	1		; Track offset

	DEFB	65,71,66,72,67,73,68,74	; Physical sectors
	DEFB	69,75,70,00,00,00,00,00	; Physical sector
	DEFB	00,00,00,00,00,00,00,00	; Physical sector
	DEFB	00,00			; Physical sector

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;*  D-X Designs, Pty Ltd P112 - 3.5", 80 Track, Double-Sided, Double-Density
;  This is the original Format used with the P112.  Use is not recommended
;  for new systems due to limited directory space and as boot disk.

	DEFB	'D-X D3_14','4'+80H ; Id - 10 bytes
	DEFB	DSK3+DD+TSBTL	     ; Format type byte 0
	DEFB	SPEED8+SEC512+ALC2K  ; Format type byte 1
	DEFB	-2		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	18		; Physical sectors per track
	DEFB	80		; Physical tracks/side

	DEFW	72		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	0		; Extent mask
	DEFW	714		; Disk size-1
	DEFW	127		; Directory max
	DEFB	0C0H, 0		; Alloc 0,1
	DEFW	32		; Check size
	DEFW	1		; Track offset

	DEFB	01,03,05,07,09,11,13,15	; Physical sectors
	DEFB	17,02,04,06,08,10,12,14
	DEFB	16,18,00,00,00,00,00,00
	DEFB	00,00

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;?  REH3 REH CPU280 11x1024 - HD 135 tpi, 3.5" 1770k Disk
;  The format is: 11-1k Sectors/Track, Sequential Format Skew (Skew=2 on R/W),
;  500kbps data rate, 300rpm.
; Non-bootable under CP/M 2.2.

	DEFB	'REH3   28','0'+80H ; Id - 10 bytes
	DEFB	DSK3+DD+TSBTL	    ; Format type byte 0
	DEFB	SPEED8+SEC1K+ALC4K  ; Format type byte 1
	DEFB	2		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	11		; Physical sectors per track
	DEFB	80		; Physical tracks/side

	DEFW	88		; Sectors per track
	DEFB	5		; Block shift factor
	DEFB	31		; Block mask
	DEFB	1		; Extent mask
	DEFW	439		; Disk size-1
	DEFW	255		; Directory max
	DEFB	0C0H, 0		; Alloc 0, 1
	DEFW	64		; Check size
	DEFW	0		; Track offset

	DEFB	01,03,05,07,09,11,02,04	; Physical sectors
	DEFB	06,08,10,00,00,00,00,00	; Physical sector
	DEFB	00,00,00,00,00,00,00,00	; Physical sector
	DEFB	00,00			; Physical sector

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;?  IBM/MS-DOS Formatted 3.5" HD Disks
;  This format is: 18-512 byte Sectors/Track, No Format Skew (sequential R/W),
;  500 kbps data rate, 300 rpm.

	DEFB	'IBM-HD 3.','5'+80H ; Id - 10 bytes
	DEFB	DSK3+DD+TSBTL	    ; Format type byte 0
	DEFB	SPEED8+SEC512+ALC2K ; Format type byte 1
	DEFB	-1		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	18		; Physical sectors per track
	DEFB	80		; Physical tracks/side

	DEFW	72		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	0		; Extent mask
	DEFW	719		; Disk size-1
	DEFW	255		; Directory max
	DEFB	0F0H, 0		; Alloc 0, 1
	DEFW	64		; Check size
	DEFW	0		; Track offset

	DEFB	01,02,03,04,05,06,07,08	; Physical sectors
	DEFB	09,10,11,12,13,14,15,16	; Physical sector
	DEFB	17,18,00,00,00,00,00,00	; Physical sector
	DEFB	00,00			; Physical sector

	DEFB	0,0,0,0,0,0,0	; Pad

;.....
;?  SuperIO MS-DOS-compatible Formatted 3.5" HD Disks
;  This format is: 18-512 byte Sectors/Track, No Format Skew (sequential R/W),
;  500 kbps data rate, 300 rpm.

	DEFB	'SuperIO 3','H'+80H ; Id - 10 bytes
	DEFB	DSK3+DD+TSBTL	    ; Format type byte 0
	DEFB	SPEED8+SEC512+ALC2K ; Format type byte 1
	DEFB	-1		; Skew factor
	DEFB	1		; Starting sector number
	DEFB	18		; Physical sectors per track
	DEFB	80		; Physical tracks/side

	DEFW	72		; Sectors per track
	DEFB	4		; Block shift factor
	DEFB	15		; Block mask
	DEFB	1		; Extent mask
	DEFW	714		; Disk size-1
	DEFW	127		; Directory max
	DEFB	0C0H, 0		; Alloc 0, 1
	DEFW	32		; Check size
	DEFW	1		; Track offset

	DEFB	01,02,03,04,05,06,07,08	; Physical sectors
	DEFB	09,10,11,12,13,14,15,16	; Physical sector
	DEFB	17,18,00,00,00,00,00,00	; Physical sector
	DEFB	00,00			; Physical sector

	DEFB	0,0,0,0,0,0,0	; Pad

	DEFB	0,0		;--- End of Entries Marker
