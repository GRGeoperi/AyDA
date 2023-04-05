import numpy as np
from random import randint

def create_matrix():
    matrix = []
    for i in range(2):
        matrix.append([])
        for j in range(2):
            matrix[i].append(randint(0, 10))
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
    if (n == 1):
        return matrix
    if (n % 2) == 0:
        b = multiply_matrix(matrix, matrix)
        return power_matrix(b, n / 2)
    else:
        c = multiply_matrix(matrix, matrix)
        a = power_matrix(c, (n - 1) / 2)
        return power_matrix(a, matrix)

test1 = create_matrix()
for i in test1:
    print('\t'.join(map(str, i)))
print('\n')
test = power_matrix(test1, 3)
for i in test:
    print('\t'.join(map(str, i)))
    