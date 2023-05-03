#include <stdio.h>
#include <stdlib.h>

unsigned int karatsuba(unsigned int x, unsigned int y, int n)
{
    int n2;
    unsigned int a, b, c, d, ac, bd, r, r2;
    if (n == 1)
        return x * y;
    else
    {
        n2 = n / 2;
        a = x >> n2;
        b = x & ((1 << n2) - 1);
        c = y >> n2;
        d = y & ((1 << n2) - 1);
        ac = karatsuba(a, c, n2);
        bd = karatsuba(b, d, n2);
        r = karatsuba(a + b, c + d, n2);
        printf("ac: %d, bd: %d, r: %d\n", ac, bd, r);
        r2 = r - ac - bd;
        return (ac << (2 * n2)) + (r2 << n2) + bd;
    }
}