import numpy as np
def cero_one_knapsack(C, w, v, n):
    V = np.zeros((n + 1, C + 1), dtype=int)
    for i in range(n + 1):
        for j in range(C + 1):
            if i == 0 or j == 0:
                V[i][j] = 0
            elif w[i-1] > j:
                V[i][j] = V[i-1][j]
            else:
                V[i][j] = max(V[i - 1][j], v[i - 1] + V[i - 1][j - w[i - 1]])
    return V[n][C]

valores = [3, 2, 4, 4]
pesos = [4, 3, 2, 3]
capacidad = 6
n = len(valores)
print(cero_one_knapsack(capacidad, pesos, valores, n))

