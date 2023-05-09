#include "unimodal.h"
int main(void)
{
    int A[] = {3, 5, 6, 11, 45, 63, 41, 30, 25};
    int n = sizeof(A) / sizeof(A[0]);
    int p = find_unimodal_point(A, 0, n-1);
    printf("%d\n", p);
    return 0;
}