/*  Objetivo:
    Implementar el algoritmo recursivo para hallar el enésimo término
    de la serie de Fibonacci. Al ser un algoritmo costoso en tiempo,
    únicamente se probó con un rango de 0 a 56. Los resultados se 
    exportan a un archivo de texto.
*/

#include "Ejercicio1.h"

// ¡Peligro! Sobrepasar 56 puede causar más de una hora de ejecución.
#define N 56

int main(void)
{
    TestAndExport(N);
    return 0;
}
