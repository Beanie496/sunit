#include <stdio.h>

#include "sunit.h"

int main()
{
	int a = 10;
	int b = a;
	ASSERT_EQ(a, b, "a != b");

	b++;
	ASSERT_EQ(a, b, "a != b");

	return 0;
}
