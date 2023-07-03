#include <stdio.h>

#include "sunit.h"

int main()
{
	int a = 0;
	int b = 1;
	ASSERT("a is false", a);
	ASSERT("b is false", b);

	return 0;
}
