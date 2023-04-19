""" Propósito del programa:
    Dado un arreglo ordenado A de n enteros distintos, diseña un algoritmo
    recursivo que determine si existe un índice i, de tal manera que A[i] = i. 
    Tu algoritmo debe tener una complejidad O(logn).
"""

def index_search(Arreglo, Principio, Fin):
    if Fin >= Principio:
        mitad = Principio + (Fin - Principio) // 2
        if mitad == Arreglo[mitad]:
            return mitad
        existencia = -1
        if mitad + 1 <= Arreglo[Fin]:
            existencia = index_search(Arreglo, mitad + 1, Fin)
        if existencia != -1:
            return existencia
        if mitad - 1 >= Arreglo[Principio]:
            return index_search(Arreglo, Principio, mitad - 1)
    return -1

def index_exist(resultado):
    if resultado == -1:
        print("No existe el índice en el arreglo")
    else:
        print("El índice i, tal que A[i] = i es: ", resultado)

test = [-3, 1, 7, 10, 20, 35, 36, 40]
n = len(test)
resultado = index_search(test, 0, n - 1)
index_exist(resultado)