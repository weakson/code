from calendar import *
from pwn import *
r = remote('120.114.62.214', 2402)
r.recvlines(9)
for i in range(100):
    r.recvline()
    a = r.recvline()
    a = int(a[7::].strip())
    if (a % 4 == 0 && a % 100 != 0) || a % 400 == 0:
        r.sendline(str('leap'))
    else:
        r.sendline(str('ordinary'))
print(r.recvline().decode())
