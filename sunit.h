#ifndef SUNIT_INCLUDED
#define SUNIT_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define bold		"\033[1m"
#define red		"\033[31m"
#define green		"\033[32m"
#define reset		"\033[m"

#define ASSERT(a)\
do {\
	if (a) {\
		fprintf(stderr, green bold "PASSED: " reset __FILE__ ", %d: \'"\
				#a "\' expected true; got true\n", __LINE__);\
	} else {\
		fprintf(stderr, red bold "FAILED: " reset __FILE__ ", %d: \'"\
				#a "\' expected true; got false\n", __LINE__);\
		exit(1);\
	}\
} while (0)

#endif
