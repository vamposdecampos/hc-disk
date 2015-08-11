#ifndef _STRINGUTILS_H_
#define _STRINGUTILS_H_

#ifndef _WIN32

#include <stdio.h>
#include <ctype.h>

static inline char *strupr(char *s)
{
	char *p;

	for (p = s; *p; p++)
		*p = toupper(*p);
	return s;
}

/* TODO: replace call sites with snprintf() instead */
static char *itoa(int value, char *str, int base)
{
	const char *fmt;

	switch (base) {
	case 8:
		fmt = "%o";
		break;
	case 10:
		fmt = "%d";
		break;
	case 16:
		fmt = "%x";
		break;
	default:
		return NULL;
	}

	sprintf(str, fmt, value);
	return str;
}

#endif

#endif
