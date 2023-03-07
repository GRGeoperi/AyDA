#include <stdio.h>
#include <stdlib.h>

int RecursiveFibonacci(int n)
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
    printf("%d\n", RecursiveFibonacci(10));
    return 0;
}
