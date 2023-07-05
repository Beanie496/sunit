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

int test1()
{
	ASSERT(10);
}

int test2()
{
	ASSERT(0);
}

int test3()
{
	ASSERT_EQ(0, 3);
}

int test4()
{
	ASSERT_GEQ(10, 5);
}

void test()
{
	RUN_TEST(test1);
	RUN_TEST(test2);
	RUN_TEST(test3);
	RUN_TEST(test4);

	fprintf(stderr, "Passed: %d | Failed: %d | Total: %d\n", testsPassed,
			testsRun - testsPassed, testsRun);
}
