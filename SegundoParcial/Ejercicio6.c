/*  Propósito del programa:
    Dado un arreglo ordenado A de n enteros distintos, diseña un algoritmo
    recursivo que determine si existe un índice i, de tal manera que A[i] = i.
    Tu algoritmo debe tener una complejidad O(log n).
*/
#include "Ejercicio6.h"
#include "randomDynamicArray.h"
#include "mergeSortAscendente.h"

int main(void)
{
    srand(time(NULL));  // Semilla para números aleatorios

    int size;
    int randomnessRange;
    int *randomArray;
    int resRandomArray;
    int A[] = {-3, 1, 7, 10, 20, 35, 36, 40};
    int resArrayA;

    printf("Para el arreglo A: ");
    DisplayArray(A, 8);
    resArrayA = index_search(A, 0, 7);
    index_exist(resArrayA);

    printf("\nCantidad de valores del arreglo: ");
    scanf("%d", &size);
    printf("Rango de llenado: ");
    scanf("%d", &randomnessRange);

    randomArray = (int*)malloc(sizeof(int)*size);

    randomArray = CreateDynamicArray(size, randomnessRange);
    MergeSortA(randomArray, 0, size - 1);
    printf("Su arreglo ordenado generado es: ");
    DisplayArray(randomArray, size);

    resRandomArray = index_search(randomArray, 0, size - 1);
    index_exist(resRandomArray);

    free(randomArray);
    return 0;
}
