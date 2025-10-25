T = int(input())

N = int(input())
arr = []
for _ in range (N):
    arr.append (list(map(int, input().split())))

row = [0] * N
col = [0] * N
ltr = [0] * (2 * N - 1)
rtl = [0] * (2 * N - 1)

for i in range (N):
    for j in range (N):
        row[i] += arr[i][j]
        col[j] += arr[i][j]

for i in range (2 * N - 1):
    x = 0 if i < N else i - N + 1
    y = i if i < N else N - 1
    while x >= 0 and x < N and y >= 0 and y < N:
        rtl[i] += arr[x][y]
        x += 1
        y -= 1

for i in range  (2 * N - 1):
    x = i if i < N else N - 1
    y = N - 1 if i < N else 2 * N - i - 2
    while x >= 0 and x < N and y >= 0 and y < N:
        ltr[i] += arr[x][y]
        x -= 1
        y -= 1

for _ in range (T):
    x, y = map (int, input().split())
    print (row[x] + col[y] + rtl[x + y] + ltr[x + N - 1 - y] - 3 * arr[x][y])
