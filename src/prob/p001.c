#include "p001.h"

static const unsigned int U = 999;
static const unsigned int X = 3;
static const unsigned int Y = 5;

static unsigned int son(unsigned int n) { return n * (n + 1) / 2; }

static unsigned int nom(unsigned int n) { return U / n; }

static unsigned int som(unsigned int n) { return n * son(nom(n)); }

unsigned int aop_001(void) { return som(X) + som(Y) - som(X * Y); }
