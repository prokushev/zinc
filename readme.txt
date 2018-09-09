The ZINC project
----------------

The ZINC project is an attempt to replicate 8-bit CP/M 3.1 and some other DRI programs under the GNU General
Public License.

ZINC stands for ZINC Is Not CP/M.

Design choices
--------------

The idea is to come as close as possible to CP/M 3 in option syntax and functionality. There are many
programs in existence to list a directory, but much fewer that let you type DIR [EXCLUDE] *.COM.

All current ZINC components are written in Z80 assembly language and require a Z80 processor.

The idea is to keep a lot of the necessary functionality in code libraries. SYSLIB is used for some
functions, and two further libraries (CPM3LIB and CFCB) provide functionality specific to CP/M 3.
A fourth library (STRLIB) provides some string functions. A fifth  library (NETLIB) provides
CP/NET support.

This will not apply to programs that have a use outside CP/M; for example, the development tools. Since
these could be used for cross-development, they would be written in C. The same goes for the help system.

Don't use BIOS. Use BDOS!

Current status (version 3.2.0)
------------------------------

In strict accordance with tradition, I'm announcing a grandiose plan when I have very little to show for it.
The following programs have been done:

DATE.COM
    Complete. Is Year 2000 compliant and supports date entry in US, UK and ISO formats.
DEVICE.COM
    Complete. Optionally supports the Amstrad TIMEOUT extension so that it can also replace TIMEOUT.COM on
    Amstrad computers.
DIR.COM
    Complete. Is Year 2000 compliant and supports I/O redirection. Several new output formats and sorting
    options.
DUMP.COM
    A version exists, but the CFCB library seems to produce bloated code; DUMP.COM is actually bigger than
    the DRI original.
ERASE.COM
    Complete. Can take more than one filespec on the command line (eg: ERASE *.PRN *.SYM )
SETDEF.COM
    Complete. Supports the multiple date formats used by DATE, DIR and SHOW.
SHOW.COM
    Complete. Year 2000 compliant and supports I/O redirection.
TYPE.COM
    Same caveat as for DUMP.COM - it's bloated.
ENDLIST.COM
    Complete.
LOGOFF.COM
    Complete.
ASM.COM
    Alpha.
LOAD.COM
    Alpha. Based on load.c from ftp://oak.oakland.edu/pub/unix-c/cpm
PIP.COM
    Alpha. Based on ppip.c from https://github.com/ptrrkssn/ppip
STAT.COM
    Alpha. Based on XSTAT2.ASM from CPMUG vol008
SUBMIT.COM
    Alpha. Based on SUPERSUB.ASM from CPMUG vol081
BDOS
    Alpha. Based on ZSDOS
CCP
    Alpha. Based on ZCPR1

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

The Submit files provided with the source assume a MYZ80 environment running CP/M 3. They assume that
B0: contains library files, C0: contains the program source, C1: contains CFCB source, C2: contains
C3LIB source and C4: contains STRLIB source.

To build ZINC, you will need:

    CP/M 3
    A recent CCP (eg from the November 1998 update of CP/M 3)
    M80, and the Digital Research LINK.COM and LIB.COM.
    patches to M80 to make it return CP/M 3 error codes.
    PIPEMGR
    SYSLIB in .IRL form.
    BDS C

Why?
----

    Because I want to.
    CP/M emulators cannot include the CP/M utilities, because of copyright problems. I happen to have written some CP/M emulators, and I would like to include workalikes for the utilities.
    The original 151282 release of CP/M 3.1 is not Year 2000 compliant. I have fixed this (November 1998 update) but some programs still use two-digit year numbers, which looks untidy.

John Elliott, 3-1-2000

To do
-----

1. Replace SYSLIB routines by LGPL code(?)
2. NENDLINT.ASM uses SYSLIB LOUT. Need to replace by BDOS, not BIOS, call.
2. Add NETLIB for CP/NET functions support.
