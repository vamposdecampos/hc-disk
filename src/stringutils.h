#ifndef _STRINGUTILS_H_
#define _STRINGUTILS_H_

#ifndef _WIN32

#include <ctype.h>

static inline char *strupr(char *s)
{
	char *p;

	for (p = s; *p; p++)
		*p = toupper(*p);
	return s;
}

#endif

#endif
