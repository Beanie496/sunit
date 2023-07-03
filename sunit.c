#include <stdio.h>
#include <stdlib.h>

#include "sunit.h"

void assert(void *a, char msg[])
{
	if (!a) {
		fprintf(stderr, "%s\n", msg);
		exit(1);
	}
}

void assert_eq(void *a, void *b, char msg[])
{
	if (a != b) {
		fprintf(stderr, "%s\n", msg);
		exit(1);
	}
}
