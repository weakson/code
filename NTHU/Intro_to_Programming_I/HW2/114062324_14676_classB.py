N = input()
l = len (N)

# N is float
if N.find('.') != -1 and l < 6:
    N += '0' * (6 - l)
elif l < 5:
    N = '0' * (5 - l) + N

print (N)
