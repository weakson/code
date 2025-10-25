s = input()
t = input()

cnt = [0] * 30
for i in s:
    cnt[ord(i) - ord('a')] += 1

ans = 0
for i in t:
    cnt[ord(i) - ord('a')] -= 1
    if cnt[ord(i) - ord('a')] < 0:
        ans += 1

print (ans)
