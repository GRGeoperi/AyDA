def make_dictionary(N):
    duties = {}
    for i in range(N):
        homework = input("tarea: ")
        time = int(input("duracion: "))
        duties[homework] = time
    return duties

def sort_dictionary(Dictionary):
    time = sorted(Dictionary, key = Dictionary.get)
    sortDuties = {}
    for homework in time:
        sortDuties[homework] = Dictionary[homework]
    return sortDuties

def print_dictionary(Dictionary):
    for homework, time in Dictionary.items():
        print(homework, '->', time)

def select_smallest_from_dictionary(Dictionary, Interval):
    dutiesToPerform = {}
    for homework, time in Dictionary.items():
        if Interval >= time:
            Interval = Interval - time
            dutiesToPerform[homework] = time
    return dutiesToPerform

n = int(input("número de pendientes: "))
periodo = int(input("intervalo de tiempo: "))
pendientes = make_dictionary(n)
print("Su lista de pendientes es:")
print_dictionary(pendientes)
pendientesOrdenados = sort_dictionary(pendientes)
print("Su lista de pendientes ordenados por su duración es:")
print_dictionary(pendientesOrdenados)
pendientesPorHacer = select_smallest_from_dictionary(pendientesOrdenados, periodo)
print("Su lista de pendientes por hacer es:")
print_dictionary(pendientesPorHacer)
del pendientes
del pendientesOrdenados
del pendientesPorHacer
