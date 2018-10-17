1 REM SYS tool to install boot
2 REM sector to disk.
3 REM Tape/Disk version.
10 CLEAR 28671
20 PRINT "Installing boot sector"
30 LOAD "sys.bin" CODE 28672
30 LOAD "bootsect.bin" CODE 28672+512
40 LET ret=USR 28672
50 PRINT "FAILED: Error code: "; ret
