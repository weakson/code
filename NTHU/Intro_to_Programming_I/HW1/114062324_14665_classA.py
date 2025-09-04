h, v, a = map(int, input().split())
h -= 5500
print (int((-v + (v ** 2 - 4 * (1 / 2) * a * -h) ** (1 / 2)) / a))
