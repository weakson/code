while True:
    try:
        a = int(input())
        if(a % 3 == 0):
            print('YES')
        else:
            print('NO')
    except:
        break
