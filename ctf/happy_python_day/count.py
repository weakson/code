from pwn import *
r = remote('120.114.62.214', 2403)
r.recvlines(3)
for i in range(1,101,1):
    r.recvlines(2)
    r.sendline(str(i).encode())
print(r.recvline().decode())
r.close()
