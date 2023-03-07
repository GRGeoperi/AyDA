/*  Objetivo:
    Implementar el algoritmo recursivo para hallar el enésimo término
    de la serie de Fibonacci. Al ser un algoritmo costoso en tiempo,
    únicamente se probó con un rango de 5 a 55. Siendo 60, el valor
    máximo que se intentó probar, alcanzando 2 horas de ejecución y,
    finalmente, abortando el proceso.
*/
/*  Tabla de pruebas:
    n = 5 -> 0.000003 s
    n = 10 -> 0.000004 s
    n = 15 -> 0.000009 s
    n = 20 -> 0.000094 s
    n = 25 -> 0.000960 s
    n = 30 -> 0.009884 s
    n = 35 -> 0.098389 s
    n = 40 -> 1.114837 s
    n = 45 -> 11.640281 s
    n = 50 -> 128.980501 s
    n = 55 -> -
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned long RecursiveFibonacci(int n)
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
    clock_t begin = clock();    // Inicio del conteo de tiempo
    RecursiveFibonacci(55);     // Llamada a la función recursiva
    clock_t end = clock();      // Fin del conteo de tiempo

    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC; // Tiempo de ejecución en segundos
    printf("Tiempo de ejecución: %f\n", time_spent);            // Impresión del tiempo de ejecución
    return 0;
}
