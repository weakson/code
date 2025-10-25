n, d = map (int, input().split())

arr = []

for _ in range (n):
    arr.append (list (map (int, input().split())))

dx = [1, -1]
dy = [-1, 1]

for i in range (2 * n - 1):
    if i < n:
        x = i if d else 0
        y = 0 if d else i
    else:
        x = n - 1 if d else i - n + 1
        y = i - n + 1 if d else n - 1
    while x >= 0 and x < n and y >= 0 and y < n:
        print (arr[x][y], end='')
        x += dx[d]
        y += dy[d]
    d ^= 1
print ()
