#include <stdio.h>

#include "sunit.h"

int main()
{
	int a = 2;
	int b = a - 1;
	ASSERT_GT(a, b);
	b = a;
	ASSERT_GT(a, b);

	return 0;
}
