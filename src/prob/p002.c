#include "p002.h"

static const unsigned int U = 4'000'000;

static unsigned int n(unsigned int x, unsigned int y) { return x + 4 * y; }

unsigned int aop_002(void)
{
    unsigned int x = 2;
    unsigned int y = 8;
    unsigned int z = n(x, y);
    unsigned int sum = x + y;

    while (z <= U)
    {
        sum += z;
        x = y;
        y = z;
        z = n(x, y);
    }

    return sum;
}