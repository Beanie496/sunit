#ifndef SUNIT_INCLUDED
#define SUNIT_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define ASSERT(a, msg)\
do {\
	if (!a) {\
		fprintf(stderr, "%s\n", msg);\
		exit(1);\
	}\
} while (0)

#define ASSERT_EQ(a, b, msg)\
do {\
	if (a != b) {\
		fprintf(stderr, "%s\n", msg);\
		exit(1);\
	}\
} while (0)

#endif
