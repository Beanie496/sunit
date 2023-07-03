#include <stdio.h>

#include "sunit.h"

int main()
{
	int a = 10;
	int b = a;
	assert_eq(a, b, "a != b");

	b++;
	assert_eq(a, b, "a != b");

	return 0;
}
