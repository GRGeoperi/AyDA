#include <stdio.h>
#include <stdlib.h>

int find_unimodal_point(int A[], int inicio, int fin)
{
    if (inicio == fin)
    {
        return inicio;
    }
    else
    {
        int mitad = (inicio + fin) / 2;
        if (A[mitad] < A[mitad + 1])
        {
            return find_unimodal_point(A, mitad + 1, fin);
        }
        else
        {
            return find_unimodal_point(A, inicio, mitad);
        }
    }
}
