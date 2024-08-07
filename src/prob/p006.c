#include "p006.h"

static const unsigned int N = 100;

unsigned int aop_006(void) { return (N - 1) * N * (N + 1) * (3 * N + 2) / 12; }