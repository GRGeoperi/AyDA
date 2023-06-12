def find_intervals(Coords):
    intervals = []
    start = Coords[0]
    for i in range(1, len(Coords)):
        x_i = Coords[i]
        if x_i > start + 1:
            interval = [start, start + 1]
            intervals.append(interval)
            start = x_i
    lastInterval = [start, start + 1]
    intervals.append(lastInterval)
    return intervals

coordenadas = [-3.5, -2.8, -1.5, -1.6, -1, 0.8, 1, 1.5]
intervalos = find_intervals(coordenadas)
print(intervalos)
