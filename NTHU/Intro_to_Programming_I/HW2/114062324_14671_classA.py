s = input()
l, r = map (int, input().split())

s = s[:l] + s[r + 1:] + s[l:r + 1]
print (s)
