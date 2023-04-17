import numpy as np
from math import floor

def create_matrix():
    matrix = []
    for i in range(2):
        matrix.append([])
        for j in range(2):
            matrix[i].append(int(input()))
    return matrix

def multiply_matrix(matrixA, matrixB):
    matrixC = np.zeros((2, 2))
    for i in range(2):
        for j in range(2):
            suma = 0
            for k in range(2):
                suma += matrixA[i][k] * matrixB[k][j]
            matrixC[i][j] = suma
    return matrixC

def power_matrix(matrix, n):
    if n == 1:
        return matrix
    else:
        resMatrix = np.zeros((2, 2))
        resMatrix = power_matrix(matrix, floor(n / 2))
        multipliedMatrix = multiply_matrix(resMatrix, resMatrix)
        if n % 2 == 0:
            return multipliedMatrix
        else:
            return multiply_matrix(matrix, multipliedMatrix)

print("Ingrese los valores de la matriz: ")
matriz = create_matrix()
print("Su matriz es:\n", matriz)
N = int(input("Ingrese el valor de N: "))
potenciaMatriz = power_matrix(matriz, N)
print("Su matriz potenciada es:\n", potenciaMatriz)
