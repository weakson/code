def count (s: str) -> dict:
    inp = s.split()
    d = {}
    for i in inp:
        tmp = i.lower()
        if tmp in d:
            d[tmp] += 1;
        else:
            d[tmp] = 1
    return d

print (sorted(count(input()).items()))
