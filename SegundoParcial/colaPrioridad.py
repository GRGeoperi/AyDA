from queue import PriorityQueue
cola = PriorityQueue()
cola.put((18.3, '_'))
cola.put((10.2, 'e'))
cola.put((7.7, 't'))
cola.put((6.8, 'a'))
cola.put((5.9, 'o'))
cola.put((5.8, 'i'))
cola.put((5.5, 'n'))
cola.put((5.1, 's'))
cola.put((4.9, 'h'))
cola.put((4.8, 'r'))
cola.put((3.5, 'd'))
cola.put((3.4, 'l'))
cola.put((2.6, 'c'))
cola.put((2.4, 'u'))
cola.put((2.1, 'm'))
cola.put((1.9, 'w'))
cola.put((1.8, 'f'))
cola.put((1.7, 'g'))
cola.put((1.6, 'y'))
cola.put((1.6, 'p'))
cola.put((1.3, 'b'))
cola.put((0.9, 'v'))
cola.put((0.6, 'k'))
cola.put((0.2, 'j'))
cola.put((0.2, 'x'))
cola.put((0.1, 'q'))
cola.put((0.1, 'z'))
while (cola.empty() == False):
    item = cola.get()
    simbolo = item[1]
    frecuencia = item[0]
    print(simbolo, "->", frecuencia)
