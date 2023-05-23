import itertools

def make_dictionary(N):
    duties = {}
    for i in range(N):
        homework = input("tarea: ")
        time = int(input("duracion: "))
        duties[homework] = time
    return duties

def print_dictionary(Dictionary):
    for homework, time in Dictionary.items():
        print(homework, '->', time)

def bruteForce_dictionary(N, Dictionary, Interval):
    bestCombination = None
    maxDuties = 0
    for i in range(1, N + 1):
        # Generar todas las combinaciones posibles
        ''' combinaciones es una tupla (lista inmutable)
            que se saca con la fórmula nCr, donde:
            - n es el número total de elementos dentro del diccionario
            - r es el número de elementos seleccionados que en este caso es i
            Así entonces, por ejemplo en el siguiente diccionario:
            Tarea   Duración (horas)
            A	        2
            B	        5
            C	        3
            D	        2
            E	        9
            F	        5
            G	        4
            H	        7
            I	        1
            Se tiene:
            9C1 = [A,B,C,D,E,F,G,H,I] = 9
            9C2 = [AB,AC,AD,AE,AF,AG,AH,AI,BC,...,HI] = 36
            ...
            9C9 = [ABCDEFGHI] = 1
            combinaciones = [9C1, 9C2, 9C3, ..., 9C9]
            combinaciones = [9, 36, 84, ..., 1]
        '''
        combinaciones = itertools.combinations(Dictionary.items(), i)
        # Probar cada combinación
        ''' combinacion es cada uno de los elementos en la tupla de combinaciones,
            es decir:
            9C1 = [A,B,C,D,E,F,G,H,I] = 9
            9C2 = [AB,AC,AD,AE,AF,AG,AH,AI,BC,...,HI] = 36
            ...
            9C9 = [ABCDEFGHI] = 1
        '''
        for combinacion in combinaciones:
            # Se suma la duración de cada combinación
            ''' es decir que suma_duracion, será la suma de todas las duraciones de aquellos
                pendientes dentro de la combinacion actual:
                9C1 = [A->2+B->5+C->3+...+I->1] = 38
                ...
                9C9 = [ABCDEFGHI->2+5+3+...+1] = 38
            '''
            suma_duracion = sum([duracion for _, duracion in combinacion])
            # Verificar si la combinación es válida y maximiza el número de pendientes
            ''' Esa combinacion elegida será válida únicamente cuando el Intervalo de tiempo
                recibido sea mayor o igual a la suma de las duraciones de aquella
                combinacion actual y además tal combinación maximice los pendientes hechos.
            '''
            if Interval >= suma_duracion and len(combinacion) > maxDuties:
                maxDuties = len(combinacion)
                bestCombination = combinacion
    # Devolver la mejor combinación encontrada
    return dict(bestCombination) if bestCombination else {}

n = int(input("número de pendientes: "))
periodo = int(input("intervalo de tiempo: "))
pendientes = make_dictionary(n)
print("Su lista de pendientes es:")
print_dictionary(pendientes)
pendientesPorHacer = bruteForce_dictionary(n, pendientes, periodo)
print("Su lista de pendientes por hacer es:")
print_dictionary(pendientesPorHacer)
