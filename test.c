#include <stdio.h>

#include "sunit.h"

int main()
{
	int a = 1;
	int b = a + 1;
	ASSERT_LT(a, b);
	b = a;
	ASSERT_LT(a, b);

	return 0;
}
