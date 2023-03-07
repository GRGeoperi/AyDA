#include <stdio.h>
#include <stdlib.h>

long RecursiveFibonacci(long n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return RecursiveFibonacci(n - 1) + RecursiveFibonacci(n - 2);
}

int main(void)
{
    // Rango prueba: 0 - 50
    RecursiveFibonacci(50);
    return 0;
}
