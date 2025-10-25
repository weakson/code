T = int (input())

for _ in range (T):
    N = int (input())
    arr = list (map (int, input().split()))
    sum = 0
    min = 0
    ans = int (-1e15)
    for i in range (N):
        sum += arr[i]
        if sum - min > ans:
            ans = sum - min
        if sum < min:
            min = sum
    print (ans)
