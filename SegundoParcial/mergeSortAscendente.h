#include <stdio.h>
#include <stdlib.h>

void MergeA(int *Array, int Begin, int Middle, int Size)
{
    int i;
    int j;
    int k;
    int temporalLeft = Middle - Begin + 1;
    int temporalRight = Size - Middle;
    int arrayLeft[temporalLeft];
    int arrayRight[temporalRight];

    for (i = 0; i < temporalLeft; i++)
    {
        arrayLeft[i] = Array[Begin + i];
    }

    for (j = 0; j < temporalRight; j++)
    {
        arrayRight[j] = Array[Middle + j + 1];
    }

    i = 0;
    j = 0;
    k = Begin;

    while (i < temporalLeft && j < temporalRight)
    {
        // Ordenamiento ascendente
        if (arrayLeft[i] <= arrayRight[j])
        {
            Array[k] = arrayLeft[i];
            i++;
        }
        else 
        {
            Array[k] = arrayRight[j];
            j++;
        }
        k++;
    }

    while (i < temporalLeft) 
    {
        Array[k] = arrayLeft[i];
        i++;
        k++;
    }

    while (j < temporalRight) 
    {
        Array[k] = arrayRight[j];
        j++;
        k++;
    }
}

void MergeSortA(int *Array, int Begin, int Size)
{
    if (Begin < Size)
    {
        int middle = Begin + (Size - Begin) / 2;
        MergeSortA(Array, Begin, middle);
        MergeSortA(Array, middle + 1, Size);
        MergeA(Array, Begin, middle, Size);
    }
}
