M, N = map (int, input().split())

if M > N:
    print (0)
    quit()

vis_col = [False] * N
vis_plus = [False] * (2 * N - 1)
vis_minus = [False] * (2 * N - 1)
ans = 0

def dfs (row: int, cnt: int):
    if row == N:
        if cnt == M:
            global ans
            ans += 1
        return
    for i in range (N):
        if cnt == M:
            break
        if (not vis_col[i]) and (not vis_plus[row + i]) and (not vis_minus[row - i]):
            vis_col[i] = True
            vis_plus[row + i] = True
            vis_minus[row - i] = True
            dfs (row + 1, cnt + 1)
            vis_minus[row - i] = False
            vis_plus[row + i] = False
            vis_col[i] = False
    if M < N and M - cnt <= N - row - 1:
        dfs (row + 1, cnt)
    return

dfs (0, 0)
print (ans)
