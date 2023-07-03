#ifndef SUNIT_INCLUDED
#define SUNIT_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define ASSERT(a)\
do {\
	if (!a) {\
		fprintf(stderr, "FAILED: \'" #a "\' expected true; got "\
                                "false\n");\
		exit(1);\
	}\
} while (0)

#define ASSERT_EQ(a, b)\
do {\
	if (a != b) {\
		fprintf(stderr, "FAILED: value of \'" #a "\' expected "\
				"to match value of \'" #b "\'\n");\
		exit(1);\
	}\
} while (0)

#endif
