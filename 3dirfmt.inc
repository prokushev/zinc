;
;Directory formats. 
;
D_FULL	EQU	0	;Everything that fits
D_ATT	EQU	1	;Attributes
D_SIZE	EQU	2	;Size
D_DATE	EQU	3	;Date
D_BARE	EQU	4	;Bare
D_COL	EQU	5	;Columnar
D_LS	EQU	6	;Like DRDOS xdir, or ls -l
D_DOS	EQU	7	;Like DRDOS DIR /L
D_DOS2	EQU	8	;Like DRDOS DIR /2
D_LAST	EQU	D_DOS2	;Last format in list
;