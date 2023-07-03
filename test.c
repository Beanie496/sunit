#include <stdio.h>

#include "sunit.h"

int main()
{
	int a = 1;
	int b = a;
	ASSERT(a);
	ASSERT_EQ(a, b);

	b++;
	ASSERT_EQ(a, b);

	return 0;
}
