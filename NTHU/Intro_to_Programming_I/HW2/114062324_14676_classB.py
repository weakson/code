N = input()

i = 0
while N[i] == '0':
    i += 1

# remove prefix zero
if N[i] == '.':
    N = N[i - 1:]
else:
    N = N[i:]

# N is float
if N.find('.') != -1:
    if len (N) >= 6:
        print (N)
    else:
        print (f'{N:06s}')
# N is integer
else:
    if len (N) >= 5:
        print (N)
    else:
        print (f'{int(N):05d}')
