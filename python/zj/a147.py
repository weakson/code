while True:
    n = int(input())
    if n == 0:
        break
    for i in range(1, n, 1):
        if(i % 7 == 0):
            continue
        print(i, end = ' ')
    print()
