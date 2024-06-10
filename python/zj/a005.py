n = int(input())
cstint = 4
while n>0:
    a = [int(cstint) for cstint in input().split()]
    for i in range(4):
        print(a[i], end = ' ')
    if a[2]-a[1] == a[1]-a[0]:
        print(a[3] + a[2] - a[1])
    else:
        print(int(a[3] * a[2] / a[1]))
    n -= 1
