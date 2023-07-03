#include <stdio.h>

#include "sunit.h"

int main()
{
	int a = 1;
	int gta = a + 1;
	int lta = a - 1;
	int na = !a;

	ASSERT(1);
	ASSERT(0);
	ASSERT_EQ(a, a);
	ASSERT_EQ(a, na);
	ASSERT_NEQ(a, na);
	ASSERT_NEQ(a, a);
	ASSERT_GT(gta, a);
	ASSERT_GT(lta, a);
	ASSERT_LT(lta, a);
	ASSERT_LT(gta, a);
	ASSERT_GEQ(gta, a);
	ASSERT_GEQ(a,   a);
	ASSERT_GEQ(lta, a);
	ASSERT_LEQ(lta, a);
	ASSERT_LEQ(a,   a);
	ASSERT_LEQ(gta, a);

	return 0;
}
