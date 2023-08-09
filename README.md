sunit - Simple Unit Tests for C/C++

This is a somewhat mininal unit testing framework.

Usage:
Include `sunit.h` and define two variables global to the translation unit/s
containing the tests:
`int testsRun = 0` and `int testsPassed = 0`.
To make a test, make a function that returns an int and put `return 1;` at the
bottom.
Put as many asserts as you wish inside the function - if they all pass, the
test function passes; if any fail, the test function fails.
To run a test, use `RUN_TEST()`, with the name of the test in the parenthesis.
To see a summary of the tests so far, use `TEST_SUMMARY()`.

Each of the following asserts test a condition.
Each prints: `<PASSED/FAILED>: <FILE>, <LINE>: expected <a> <condition> <b>`.
The exception is `ASSERT(a)`, which prints:
`<PASSED/FAILED>: <FILE>, <LINE>: expected <a> == true (!= 0)`.

Asserts:
- `ASSERT(a)`: tests `a == true`, which in C-style is `a != 0`
- `ASSERT_EQ(a, b)`: tests `a == b`
- `ASSERT_NEQ(a, b)`: tests `a != b`
- `ASSERT_GT(a, b)`: tests `a > b`
- `ASSERT_LT(a, b)`: tests `a < b`
- `ASSERT_GEQ(a, b)`: tests `a >= b`
- `ASSERT_LEQ(a, b)`: tests `a <= b`
- `ASSERT_STREQ(a, b)`: tests `strcmp(a, b) == 0`
- `ASSERT_STRNEQ(a, b)`: tests `strcmp(a, b) != 0`

Other macros:
- `RUN_TEST(test)`: runs a test and stores the result (1 for passed; 0 for failed)
- `TEST_SUMMARY()`: prints a summary of the tests so far

Example:
```c
#include "sunit.h"

int passing_test(void);
int failing_test(void);

int main()
{
    RUN_TEST(passing_test);
    RUN_TEST(failing_test);
    TEST_SUMMARY();
}

int passing_test()
{
    ASSERT_GEQ(1, 1);
    return 1;
}

int failing_test()
{
    ASSERT_GEQ(0, 1);
    return 1;
}
```
Would print
```
Running test passing_test
PASSED: <file>, 18: expected '1' >= '1'
Running test failing_test
FAILED: <file>, 24: expected '0' >= '1'
Passed: 1 | Failed: 1 | Total: 2
```
