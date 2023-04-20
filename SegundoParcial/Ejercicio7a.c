#include "Ejercicio7a.h"

int main(void)
{
    // Semilla para números aleatorios
    srand(time(NULL));

    // Variables de entrada
    int size;
    int randomnessRange;
    int numArrays;

    // Número de arreglos
    printf("Número de arreglos: ");
    scanf("%d", &numArrays);

    // Tamaño de los arreglos
    printf("Cantidad de valores de los arreglos: ");
    scanf("%d", &size);

    // Rango de llenado
    printf("Rango de llenado: ");
    scanf("%d", &randomnessRange);

    // Reservación de memoria para los arreglos
    int** arrayOfArrays = (int**)malloc(sizeof(int*)*numArrays);

    // Creación de arreglos
    CreateArrays(arrayOfArrays, numArrays, size, randomnessRange);
    DisplayArrays(arrayOfArrays, numArrays, size);

    // Liberación de memoria 
    for(int i = 0; i < numArrays; i++)
    {
        free(arrayOfArrays[i]);
    }
    free(arrayOfArrays);

    return 0;
}
