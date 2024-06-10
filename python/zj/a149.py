n = int(input())
while(n > 0):
    temp = int(input())
    ans = temp % 10
    temp //= 10
    while(temp != 0):
        ans *= temp % 10
        temp //= 10
    print(ans)
    n -= 1
