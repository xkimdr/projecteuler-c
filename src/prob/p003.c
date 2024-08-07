#include "p003.h"
#include <math.h>

static const unsigned long N = 600'851'475'143;

static unsigned long sf(unsigned long n)
{
    unsigned long sq = (unsigned long) sqrt((double) n);
    unsigned long i = 2;

    while (i <= sq)
    {
        if (n % i == 0)
        {
            return i;
        }

        ++i;
    }

    return n;
}

unsigned long aop_003(void)
{
    unsigned long n = N;
    unsigned long f = N;

    while (n != 1)
    {
        f = sf(n);
        n /= f;
    }

    return f;
}