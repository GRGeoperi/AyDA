#include <stdio.h>
#include <stdlib.h>

int index_search(int *Arreglo, int Principio, int Fin)
{
    if (Fin >= Principio)
    {
        int mitad = Principio + (Fin - Principio) / 2;
        if (mitad == Arreglo[mitad])
        {
            return mitad;
        }
        int existencia = -1;
        if (mitad + 1 <= Arreglo[Fin])
        {
            existencia = index_search(Arreglo, mitad + 1, Fin);
        }
        if (existencia != -1)
        {
            return existencia;
        }
        if (mitad - 1 >= Arreglo[Principio])
        {
            return index_search(Arreglo, Principio, mitad - 1);
        }
    }
    return -1;
}

void index_exist(int resultado)
{
    if (resultado == -1)
    {
        printf("No existe el índice en el arreglo");
    }
    else
    {
        printf("El índice i, tal que A[i] = i es: %d", resultado);
    }
}
