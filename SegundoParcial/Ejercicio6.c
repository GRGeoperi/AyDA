/*  Propósito del programa:
    Dado un arreglo ordenado A de n enteros distintos, diseña un algoritmo
    recursivo que determine si existe un índice i, de tal manera que A[i] = i. 
    Tu algoritmo debe tener una complejidad O(logn).
*/
#include "Ejercicio6.h"
#include "randomDynamicArray.h"
#include "mergeSortAscendente.h"

int main(void)
{
    // Semilla para números aleatorios
    srand(time(NULL));

    int size;
    int randomnessRange;
    int *array;

    printf("Cantidad de valores de los arreglos: ");
    scanf("%d", &size);
    printf("Rango de llenado: ");
    scanf("%d", &randomnessRange);
    
    array = (int*)malloc(sizeof(int)*size);

    array = CreateDynamicArray(size, randomnessRange);
    MergeSortA(array, 0, size - 1);
    DisplayArray(array, size);

    int resultado = index_search(array, 0, size - 1);
    index_exist(resultado);

    free(array);
    return 0;
}
