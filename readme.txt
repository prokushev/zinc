The ZINC project
----------------

The ZINC project is an attempt to replicate 8-bit CP/M 3.1 and some other DRI programs under the GNU General
Public License.

ZINC stands for ZINC Is Not CP/M.

Originally project started by John Elliott (https://www.seasip.info/Cpm/Zinc/index.html). Last
version by John is version 3.1.1 (3-1-2000). Since last version was some thing published under
GPL license, so ZINC can be extended to be closer to ZINC goals. ZSDOS (GPL), ZCPR1(Public domain)
and some other code was added and adopted to ZINC environment. So, version 3.2.0 was born in 2018.

Design choices
--------------

The idea is to come as close as possible to CP/M 3 in option syntax and functionality. There are many
programs in existence to list a directory, but much fewer that let you type DIR [EXCLUDE] *.COM.

Most of current ZINC components are written in Z80 assembly language and requires a Z80 processor.

The idea is to keep a lot of the necessary functionality in code libraries. SYSLIB is used for some
functions, and two further libraries (CPM3LIB and CFCB) provide functionality specific to CP/M 3.
A fourth library (STRLIB) provides some string functions. A fifth  library (NETLIB) provides
CP/NET support.

This will not apply to programs that have a use outside CP/M; for example, the development tools. Since
these could be used for cross-development, they would be written in C. The same goes for the help system.

Don't use BIOS. Use BDOS!

Current status (version 3.2.0)
------------------------------

The following programs have been done:

DATE.PRL
    Complete. Is Year 2000 compliant and supports date entry in US, UK and ISO formats.
DEVICE.PRL
    Complete. Optionally supports the Amstrad TIMEOUT extension so that it can also replace TIMEOUT.COM on
    Amstrad computers.
DIR.RPL
    Complete. Is Year 2000 compliant and supports I/O redirection. Several new output formats and sorting
    options.
DUMP.RPL
    Complete. A version exists, but the CFCB library seems to produce bloated code; DUMP.COM is actually bigger than
    the DRI original.
ERASE.RPL
    Complete. Can take more than one filespec on the command line (eg: ERASE *.PRN *.SYM )
SETDEF.PRL
    Complete. Supports the multiple date formats used by DATE, DIR and SHOW.
SHOW.PRL
    Complete. Year 2000 compliant and supports I/O redirection.
TYPE.PRL
    Same caveat as for DUMP.COM - it's bloated.
ENDLIST.PRL
    Complete.
LOGOFF.PRL
    Complete.
ASM.PRL
    Alpha.
LOAD.PRL
    Alpha. Based on load.c from ftp://oak.oakland.edu/pub/unix-c/cpm
PIP.PRL
    Alpha. Based on ppip.c from https://github.com/ptrrkssn/ppip
STAT.PRL
    Alpha. Based on XSTAT2.ASM from CPMUG vol008
SUBMIT.PRL
    Alpha. Based on SUPERSUB.ASM from CPMUG vol081
BDOS
    Alpha. Based on ZSDOS
CCP
    Alpha. Based on ZCPR1
BIOS
    Alpha. Based on B/P BIOS

The Grandiose Vision
--------------------

A ZINC program should:

    Support user numbers in filenames (part of CFCB)
    Support exact file sizes (part of CFCB)
    Support piping and redirection of I/O, if appropriate (done with PIPEMGR)
    Return error codes if it encounters a fatal error (CPM3LIB)
    Support paged output, if appropriate (CPM3LIB)
    If possible, be smaller than its CP/M counterpart.

Build environment
-----------------

!!TODO!! Mostly cross-development environment used for 3.2.0.

The Submit files provided with the source assume a MYZ80 environment running CP/M 3. They assume that
B0: contains library files, C0: contains the program source, C1: contains CFCB source, C2: contains
C3LIB source and C4: contains STRLIB source.

To build ZINC, you will need:

    CP/M 3
    A recent CCP (eg from the November 1998 update of CP/M 3)
    M80, and the Digital Research LINK.COM and LIB.COM.
    patches to M80 to make it return CP/M 3 error codes.
    PIPEMGR
    BDS C

Why? (John Elliott, 3-1-2000)
-----------------------------

    Because I want to.
    CP/M emulators cannot include the CP/M utilities, because of copyright problems. I happen to have written 
    some CP/M emulators, and I would like to include workalikes for the utilities.
    The original 151282 release of CP/M 3.1 is not Year 2000 compliant. I have fixed this (November 1998 update)
    but some programs still use two-digit year numbers, which looks untidy.


To do/ideas
-----------

1. Replace SYSLIB routines by LGPL code(?)
2. Rewrite C3BIOS to use SBIOS (because SBIOS now portable)
3. Add ROM define to prevent code self-modification and allow to have CP/M in ROM
4. Add PRL support to CCP
5. Downgrade CCP to hold only CCP 2.2 and CCP 3 resident commands
6. Downgrade BDOS to support only CP/M 2.2 and CP/M 3 functions
7. Use ZINC.INC for B/P BIOS config
8. Rumor ZX Interface 1 can be used on +2A/+3 machines. If so then think about microdrive support.

Platform specific distributions of ZINC
=======================================

+2A ZINC
--------

+2A ZINC is a ZX Spectrum +3 build of ZINC system. +2A ZINC is a diskless CP/M with only tape and memdisk
support. If external drive detected then works as +3 ZINC.

+3 ZINC
-------

+3 ZINC is a ZX Spectrum +3 build of ZINC system. Works fine on ZX Spectrum +3e and ZX
Spectrum Next too.

+3e ZINC
-------

+3e ZINC is a ZX Spectrum +3e build of ZINC system. IDE support added.

ZX Library
----------

ZXLIB is a library for ZX Spectrum development. ZX Library is external package which you can
download from http://????????

Amstrad XBIOS
-------------

Follow table says about implementation status

| Function name    | +2A ZINC | +3 ZINC |
| DD_INIT (2)      |   Done   |  Done   |
| DD_SETUP         |   Done   |  Done   |
| DD_READ_SECTOR   |   Done   |  Done   |
| DD_WRITE_SECTOR  |   Done   |  Done   |
| DD_CHECK_SECTOR  |          |         |
| DD_FORMAT        |          |         |
| DD_LOGIN         |          |         |
| DD_SEL_FORMAT    |          |         |
| DD_DRIVE_STATUS  |          |         |
| DD_READ_ID       |          |         |
| DD_L_DPB         |          |         |
| DD_L_XDPB        |          |         |
| DD_L_ON_MOTOR    |          |         |
| DD_L_T_OFF_MOTOR |          |         |
| DD_L_OFF_MOTOR   |          |         |
| DD_L_READ        |          |         |
| DD_L_WRITE       |          |         |
| DD_L_SEEK        |          |         |
| CD_SA_INIT       |          |         |
| CD_SA_BAUD       |          |         |
| CD_SA_PARAMS     |          |         |
| TE_ASK           |          |         |
| TE_RESET         |          |         |
| TE_STL_ASK       |          |         |
| TE_STL_ON_OFF    |          |         |
| TE_SET_INK       |          |         |
| TE_SET_BORDER    |          |         |
| TE_SET_SPEED     |   Done   |  Done   |
| KM_SET_EXPAND    |          |         |
| KM_SET_KEY       |          |         |
| KM_KT_GET        |          |         |
| KM_KT_PUT        |          |         |
| KM_SET_SPEED     |          |         |
| CD_VERSION       |   Done   |  Done   |
| CD_INFO          |          |         |
| SCR_RUN_ROUTINE  |          |         |
| FIND_FID         |          |         |

| CD_COLDBOOT (1)  |   Done   |  Done   |

1 - No clock tick call are implemented
2 - If no disk drive interface presented then all DD_* functions patched to return NO DRIVE error.
