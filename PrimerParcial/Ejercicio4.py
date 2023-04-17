from math import floor

def multiply(x, y):
    if x == 0:
        return 0
    if x % 2 == 0:
        return 2 * multiply(floor(x / 2), y)
    else:
        return y + 2 * multiply(floor((x - 1) / 2), y)

x = int(input("x = "))
y = int(input("y = "))
print(f"{x} * {y} = {multiply(x, y)}")