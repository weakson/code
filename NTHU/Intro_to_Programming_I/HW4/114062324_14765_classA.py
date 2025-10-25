dr = (2, 2, -2, -2, 1, 1, -1, -1)
dc = (1, -1, 1, -1, 2, -2, 2, -2)

m, n = map (int, input().split())

T = m * n
is_valid = False
g = [[0 for _ in range (n)] for _ in range (m)]
vis = [[False for _ in range (n)] for _ in range (m)]
vis[0][0] = True

def check (tr: int, tc: int) -> bool:
    return (tr >= 0 and tr < m and tc >= 0 and tc < n and not vis[tr][tc])

def dfs (r: int, c: int, idx: int) -> None:
    global is_valid, T
    if idx == T - 1:
        g[r][c] = idx
        is_valid = True
        return
    g[r][c] = idx
    vis[r][c] = True
    for i in range (8):
        if check (r + dr[i], c + dc[i]):
            dfs (r + dr[i], c + dc[i], idx + 1)
            if is_valid:
                return
    vis[r][c] = False

dfs (0, 0, 0)
print (g)
