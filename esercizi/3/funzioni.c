#include "funzioni.h"

int a(int x)
{
    int j = x;
    for (int i = 0; i < x; ++i)
        j += x;

    return j;
}

int b(int x, int y)
{
    int j = 0;
    for (int i = x; i > 0; i--)
        j += y;

    return j;
}

long c(long x)
{
    long q = 1;
    for (long i = 1; i <= x; i++)
        q = b(q, i);

    return q;
}

double d(int s)
{
    long double w = 0.0;
    for (int n = 0; n < s; n++)
    {
        w += 1.0/c(n);
    }

    return w;
}
