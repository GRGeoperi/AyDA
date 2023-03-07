/*
    Implementación del algoritmo recursivo para hallar el enésimo término 
    de la serie de Fibonacci. Tomando en cuenta que la recursividad, en este caso, 
    es muy costosa en términos de tiempo de ejecución.
*/

#include <stdio.h>
#include <stdlib.h>

long RecursiveFibonacci(long n)
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
    // Rango prueba: 0 - 100
    RecursiveFibonacci(1);
    /*
        Tabla de pruebas:
        n = 1 -> 
    */
    return 0;
}
