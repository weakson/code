# 4 / 8
# n = int (input())
# 
# ans = 0
# 
# for a in range (1, n):
#     # lim = n // a + 1 if n % a == 0 else n // a
#     lim = n // a + 1
#     for b in range (1, lim):
#         ans += n // (a * b) + (0 if n % (a * b) else -1)
# print (ans)
# input = 1e6, ans = 106029810

# 6 / 8
n = int (input())

ans = 0
for a in range (1, n):
    for b in range (1, (n - 1) // a + 1):
        ans += (n - 1) // (a * b)
print (ans)

####################

# n = int (input())
# 
# ans = 0
# a = 1
# while a * a * a <= n - 1:
#     b = a
#     while b * b * b <= n - 1:
#         c = ((n - 1) // (a * b)) - b
#         if a == b:
#             ans += c * 3 + 1
#         else:
#             ans += c * 6 + 3
#         b += 1
#     a += 1
# print (ans)
