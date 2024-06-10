from pwn import *
r = remote('120.114.62.214', 2400)
r.recvlines(7)
a = r.recvline()[11:].split(' ')
l =[int(i) for i in l]
r.sendline(max(l).encode())
r.close()

