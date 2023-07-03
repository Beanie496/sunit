#ifndef SUNIT_INCLUDED
#define SUNIT_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define ASSERT(a)\
do {\
	if (!a) {\
		fprintf(stderr, "FAILED: " __FILE__ ", %d: \'" #a "\' "\
				"expected true; got false\n", __LINE__);\
		exit(1);\
	}\
} while (0)

#endif
