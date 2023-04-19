#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* CreateDynamicArray(int Size, int RandomnessRange)
{
    //Asignación de memoria
    int *dynamicArray = (int*)malloc(sizeof(int)*Size);
    //Llenado de datos
    for(int i = 0;i < Size;i++)
    {
        dynamicArray[i] = rand() % (RandomnessRange + 1);
    }
    return dynamicArray;
}

void DisplayArray(int *Array, int Size)
{
    for(int i = 0; i < Size; i++) 
    {
        printf("%d ", Array[i]);
    }
    printf("\n");
}
