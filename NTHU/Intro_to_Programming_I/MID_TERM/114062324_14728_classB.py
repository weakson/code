S = input()
k = int (input())
T = input()

if k < len (T):
    print ('NO')
else:
    cnt = [0] * 30
    for i in S:
        cnt[ord(i) - ord('a')] += 1
    is_exist = True
    for i in T:
        cnt[ord(i) - ord('a')] -= 1
        if cnt[ord(i) - ord('a')] < 0:
            is_exist = False
            break
    if is_exist:
        print ('YES')
    else:
        print ('NO')

