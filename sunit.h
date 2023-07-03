#ifndef SUNIT_INCLUDED
#define SUNIT_INCLUDED

#include <stdio.h>
#include <stdlib.h>

void assert(void *a, char msg[]);
void assert_eq(void *a, void *b, char msg[]);

#endif
