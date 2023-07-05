#include <stdio.h>

#include "sunit.h"

int testsRun = 0;
int testsPassed = 0;

int test1(void);
int test2(void);
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

void test()
{
	RUN_TEST(test1);
	RUN_TEST(test2);

	fprintf(stderr, "Passed: %d | Failed: %d | Total: %d\n", testsPassed,
			testsRun - testsPassed, testsRun);
}
