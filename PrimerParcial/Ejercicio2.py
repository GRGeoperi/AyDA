"""
    Considera la siguiente forma de ordenar un arreglo A con n números. 
    Primero se busca el mínimo del arreglo y se intercambia con A[1], 
    luego se busca el siguiente número más pequeño y se intercambia con A[2]. 
    Se continúa de esta manera para los primeros n-1 elementos de A.
"""
from random import randint

def crear_arreglo(n):
    array = []
    for i in range(n):
        array.append(randint(0, 1000))
    return array

def ordenar_arreglo(array, n):
    for indice in range(n):
        indiceMinimo = indice
        for i in range(indice + 1, n):
            if array[i] < array[indiceMinimo]:
                indiceMinimo = i
        (array[indice], array[indiceMinimo]) = (array[indiceMinimo], array[indice])

test = crear_arreglo(20)
print(test)
ordenar_arreglo(test, 20)
print(test)