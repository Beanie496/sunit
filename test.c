#include <stdio.h>

#include "sunit.h"

int main()
{
	int a = 10;
	int b = 11;
	ASSERT("a != b", a, b);

	b = a;
	ASSERT("a != b", a, b);

	return 0;
}
