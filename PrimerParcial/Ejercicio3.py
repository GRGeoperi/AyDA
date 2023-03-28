def power_r(x, n):
    if n == 0:
        return 1
    else:
        return x * power_r(x, n-1)

def power_l(x, n):
    if n < 0:
        return power_l(1 / x, -n)
    if n == 0:
        return 1
    if (n % 2) == 0:
        return power_l(x * x, n / 2)
    else:
        return power_l(x * x, (n - 1) / 2) * x
