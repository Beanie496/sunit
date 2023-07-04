#ifndef SUNIT_INCLUDED
#define SUNIT_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define BOLD            "\033[1m"
#define RED             "\033[31m"
#define GREEN           "\033[32m"
#define RESET           "\033[m"

#define ASSERT(a)\
do\
	if (a)\
		fprintf(stderr, GREEN BOLD "PASSED: " RESET __FILE__ ", %d: \'"\
				#a "\' expected true\n", __LINE__);\
	else\
		fprintf(stderr, RED BOLD "FAILED: " RESET __FILE__ ", %d: \'"\
				#a "\' expected true\n", __LINE__);\
while (0)

#define ASSERT_EQ(a, b)\
do\
	if (a == b)\
		fprintf(stderr, GREEN BOLD "PASSED: " RESET __FILE__ ", %d: \'"\
				#a "\' expected to equal \'" #b "\'\n",\
				__LINE__);\
	else\
		fprintf(stderr, RED BOLD "FAILED: " RESET __FILE__ ", %d: \'"\
				#a "\' expected to equal \'" #b "\'\n",\
				__LINE__);\
while (0)

#define ASSERT_NEQ(a, b)\
do\
	if (a != b)\
		fprintf(stderr, GREEN BOLD "PASSED: " RESET __FILE__ ", %d: \'"\
				#a "\' expected not to equal \'" #b "\'\n",\
				__LINE__);\
	else\
		fprintf(stderr, RED BOLD "FAILED: " RESET __FILE__ ", %d: \'"\
				#a "\' expected not to equal \'" #b "\'\n",\
				__LINE__);\
while (0)

#define ASSERT_GT(a, b)\
do\
	if (a > b)\
		fprintf(stderr, GREEN BOLD "PASSED: " RESET __FILE__ ", %d: \'"\
				#a "\' expected to be greater than \'" #b\
				"\'\n", __LINE__);\
	else\
		fprintf(stderr, RED BOLD "FAILED: " RESET __FILE__ ", %d: \'"\
				#a "\' expected to be greater than \'" #b\
				"\'\n", __LINE__);\
while (0)

#define ASSERT_LT(a, b)\
do\
	if (a < b)\
		fprintf(stderr, GREEN BOLD "PASSED: " RESET __FILE__ ", %d: \'"\
				#a "\' expected to be less than \'" #b "\'\n",\
				__LINE__);\
	else\
		fprintf(stderr, RED BOLD "FAILED: " RESET __FILE__ ", %d: \'"\
				#a "\' expected to be less than \'" #b "\'\n",\
				__LINE__);\
while (0)

#define ASSERT_GEQ(a, b)\
do\
	if (a >= b)\
		fprintf(stderr, GREEN BOLD "PASSED: " RESET __FILE__ ", %d: \'"\
				#a "\' expected to be greater than or equal "\
				"to \'" #b "\'\n", __LINE__);\
	else\
		fprintf(stderr, RED BOLD "FAILED: " RESET __FILE__ ", %d: \'"\
				#a "\' expected to be greater than or equal "\
				"to \'" #b "\'\n", __LINE__);\
while (0)

#define ASSERT_LEQ(a, b)\
do\
	if (a <= b)\
		fprintf(stderr, GREEN BOLD "PASSED: " RESET __FILE__ ", %d: \'"\
				#a "\' expected to be less than or equal to "\
				"\'" #b "\'\n", __LINE__);\
	else\
		fprintf(stderr, RED BOLD "FAILED: " RESET __FILE__ ", %d: \'"\
				#a "\' expected to be less than or equal to "\
				"\'" #b "\'\n", __LINE__);\
while (0)

#endif
