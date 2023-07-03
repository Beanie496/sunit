#include <stdio.h>

#include "sunit.h"

int main()
{
	int a = 1;
	ASSERT(a);
	a = 0;
	ASSERT(a);

	return 0;
}
