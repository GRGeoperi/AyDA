#include "mergeSortAscendente.h"
#include "randomDynamicArray.h"

int** CreateArrays(int **ArrayOfArrays, int NumArrays, int Size, int RandomnessRange)
{
    for(int i = 0;i < NumArrays;i++)
    {
        int* dynamicArray = CreateDynamicArray(Size, RandomnessRange);
        ArrayOfArrays[i] = dynamicArray;
    }
    return ArrayOfArrays;
}

void DisplayArrays(int **ArrayOfArrays, int NumArrays, int Size)
{
    for(int i = 0; i < NumArrays; i++) 
    {
        printf("\n");

        // Muestra de arreglo desordenado
        printf("\tArray %d\n", i + 1);
        printf("desordenado: ");
        for(int j = 0; j < Size; j++) 
        {
            printf("%d ", ArrayOfArrays[i][j]);
        }
        printf("\n");

        // Muestra de arreglo ordenado
        MergeSortA(ArrayOfArrays[i], 0, Size - 1);
        printf("ordenado: ");
        for(int j = 0; j < Size; j++) 
        {
            printf("%d ", ArrayOfArrays[i][j]);
        }
        printf("\n");
    }
}
