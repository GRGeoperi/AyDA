#include "mergeSortDescendente.h"
#include "mergeSortAscendente.h"
#include "randomDynamicArray.h"

int main(void)
{
    // Semilla para números aleatorios
    srand(time(NULL));

    // Variables
    int size;
    int randomnessRange;
    int* test;

    // Tamaño del arreglo
    printf("Cantidad de valores del arreglo: ");
    scanf("%d", &size);

    // Rango de llenado
    printf("Rango de llenado: ");
    scanf("%d", &randomnessRange);

    // Reservación de memoria para el arreglo
    test = (int*)malloc(sizeof(int)*size);

    // Creación del arreglo dinámico
    test = CreateDynamicArray(size, randomnessRange);

    // Muestra de arreglo desordenado
    printf("Arreglo desordenado: ");
    DisplayArray(test, size);

    // Ordenamiento descendente
    printf("Arreglo ordenado (mayor a menor): ");
    MergeSortD(test, 0, size-1);
    DisplayArray(test, size);

    // Ordenamiento ascendente
    printf("Arreglo ordenado (menor a mayor): ");
    MergeSortA(test, 0, size-1);
    DisplayArray(test, size);

    return 0;
}
