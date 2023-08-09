#include <stdio.h>

#include "sunit.h"

int testsRun = 0;
int testsPassed = 0;

int test1(void);
int test2(void);
int test3(void);
int test4(void);
void test(void);

int main()
{
	test();

	return 0;
}

int passing_test()
{
	ASSERT(1);
	ASSERT_EQ(1, 1);
	ASSERT_NEQ(1, 2);
	ASSERT_GT(2, 1);
	ASSERT_LT(1, 2);
	ASSERT_GEQ(2, 1);
	ASSERT_GEQ(1, 1);
	ASSERT_LEQ(1, 2);
	ASSERT_LEQ(1, 1);
	ASSERT_STREQ("breadsticks", "breadsticks");
	ASSERT_STRNEQ("apples", "cheese");
	return 1;
}

int failing_test()
{
	ASSERT(0);
	return 1;
}

void test()
{
	RUN_TEST(passing_test);
	RUN_TEST(failing_test);

	TEST_SUMMARY();
}
