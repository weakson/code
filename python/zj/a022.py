a = input()
n = len(a)
if(n&1):
    b = a[:n-1:]
    c = a[n::]
    if(b == c): print('yes')
    else: print('no')
else:
    b = a[:n//2:]
    c = a[len(a):n//2:-1]
    if(b == c): print('yes')
    else: print('no')
