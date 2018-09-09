/*
 * load - convert a hex file to a com file
 */

#include <stdio.h>

unsigned char   checksum;

unsigned char   getbyte () {
    register int    c;
    unsigned char   x;

    c = getchar ();
    if ('0' <= c && c <= '9')
	x = c - '0';
    else
	if ('A' <= c && c <= 'F')
	    x = c - 'A' + 10;
	else
	    goto funny;

    x <<= 4;
    c = getchar ();
    if ('0' <= c && c <= '9')
	x |= c - '0';
    else
	if ('A' <= c && c <= 'F')
	    x |= c - 'A' + 10;
	else {
    funny:
	    fprintf (stderr, "Funny hex letter %c\n", c);
	    exit (2);
	}
    checksum += x;
    return x;
}

main () {
    register unsigned   i, n;
    char    c, buf[64];
    unsigned    type;

    do {
	do {
	    c = getchar ();
	    if (c == EOF) {
		fprintf (stderr, "Premature EOF colon missing\n");
		exit (1);
	    }
	} while (c != ':');

	checksum = 0;
	n = getbyte ();
	(void) getbyte ();
	(void) getbyte ();

	switch (type = getbyte ()) {
	    case 1:
		break;
	    case 0:
		for (i = 0; i < n; i++)
		    buf[i] = getbyte ();
		fwrite (buf, 1, n, stdout);
		break;
	    default:
		fprintf (stderr, "Funny record type %d\n");
		exit (1);
	}

	(void) getbyte ();
	if (checksum != 0) {
	    fprintf (stderr, "Checksum error");
	    exit (2);
	}
    } while (type != 1);
}
