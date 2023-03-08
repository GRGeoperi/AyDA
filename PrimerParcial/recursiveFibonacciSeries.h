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

double TestingTimeFunction(int n)
{
    double timeSpent = 0;   // Tiempo de ejecución en segundos
    clock_t begin = clock();    // Inicio del conteo de tiempo
    RecursiveFibonacci(n);  // Llamada a la función recursiva
    clock_t end = clock();  // Fin del conteo de tiempo
    timeSpent = (double)(end - begin) / CLOCKS_PER_SEC;
    return timeSpent;   // Regresa el tiempo de ejecución
}

void ExportData(int n, double ArrayTime[])
{
    FILE* archivo;
    archivo = fopen("TiempoRequerido.txt", "w");    // Crea y abre en modo escritura un archivo de texto
    if (archivo == NULL)
    {
        printf("No se pudo crear el archivo\n");
        return;
    }
    fprintf(archivo, "Entrada (n) | Tiempo Requerido (s)\n");
    fprintf(archivo, "------------------------------------\n");
    for (int i = 0; i <= n; i++)    // Escribe el tiempo de ejecución por cada entrada
    {
        fprintf(archivo, "\t%d \t\t| \t\t%f\n", i, ArrayTime[i]);
    }
    fclose(archivo);    // Cierra el archivo
}

void TestAndExport(int n)
{
    double arrayTime[n];    // Arreglo para almacenar los tiempos de ejecución
    for (int i = 0; i <= n; i++)
    {
        arrayTime[i] = TestingTimeFunction(i);  // Llena el arreglo con lo que se obtuvo de la función
        printf("n = %d Completado\n", i);
    }
    ExportData(n , arrayTime);
}
