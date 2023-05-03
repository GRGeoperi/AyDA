#include "karatsuba.h"
int main(void)
{
    unsigned int x, y, res;
    printf("x =  ");
    scanf("%d", &x);
    printf("y =  ");
    scanf("%d", &y);
    res = karatsuba(x, y, 16);
    printf("%d * %d = %d\n", x, y, res);
    return 0;
}