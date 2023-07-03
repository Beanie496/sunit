#include <stdio.h>

#include "sunit.h"

int main()
{
	int a = 1;
	int b = a;
	ASSERT_GEQ(a, b);
	b--;
	ASSERT_GEQ(a, b);
	b = a + 1;
	ASSERT_GEQ(a, b);

	return 0;
}
