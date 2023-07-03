#include <stdio.h>

#include "sunit.h"

int main()
{
	int a = 0;
	int b = 1;
	ASSERT(a, "a is false");
	ASSERT(b, "b is false");

	return 0;
}
