#ifndef SUNIT_INCLUDED
#define SUNIT_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define bold		"\033[1m"
#define red		"\033[31m"
#define green		"\033[32m"
#define reset		"\033[m"

#define ASSERT(a)\
do\
	if (a)\
		fprintf(stderr, green bold "PASSED: " reset __FILE__ ", %d: \'"\
				#a "\' expected true; got true\n", __LINE__);\
	else\
		fprintf(stderr, red bold "FAILED: " reset __FILE__ ", %d: \'"\
				#a "\' expected true; got false\n", __LINE__);\
while (0)

#define ASSERT_EQ(a, b)\
do\
	if (a == b)\
		fprintf(stderr, green bold "PASSED: " reset __FILE__ ", %d: \'"\
				#a "\' expected to equal \'" #b "\'; got "\
				"true\n", __LINE__);\
	else\
		fprintf(stderr, red bold "FAILED: " reset __FILE__ ", %d: \'"\
				#a "\' expected to equal \'" #b "\'; got "\
				"false\n", __LINE__);\
while (0)

#define ASSERT_NEQ(a, b)\
do\
	if (a != b)\
		fprintf(stderr, green bold "PASSED: " reset __FILE__ ", %d: \'"\
				#a "\' expected not to equal \'" #b "\'; got "\
				"true\n", __LINE__);\
	else\
		fprintf(stderr, red bold "FAILED: " reset __FILE__ ", %d: \'"\
				#a "\' expected not to equal \'" #b "\'; got "\
				"false\n", __LINE__);\
while (0)

#define ASSERT_GT(a, b)\
do\
	if (a > b)\
		fprintf(stderr, green bold "PASSED: " reset __FILE__ ", %d: \'"\
				#a "\' expected to be greater than \'" #b\
				"\'; got true\n", __LINE__);\
	else\
		fprintf(stderr, red bold "FAILED: " reset __FILE__ ", %d: \'"\
				#a "\' expected to be greater than \'" #b\
				"\'; got false\n", __LINE__);\
while (0)

#define ASSERT_LT(a, b)\
do\
	if (a < b)\
		fprintf(stderr, green bold "PASSED: " reset __FILE__ ", %d: \'"\
				#a "\' expected to be less than \'" #b "\'; "\
				"got true\n", __LINE__);\
	else\
		fprintf(stderr, red bold "FAILED: " reset __FILE__ ", %d: \'"\
				#a "\' expected to be less than \'" #b "\'; "\
				"got false\n", __LINE__);\
while (0)

#endif
