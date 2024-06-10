n = int(input())
num1 = 0
num2 = 0
num3 = 0
while(n>0):
    temp = int(input())
    if temp%3 == 0:
        num1 += 1
    elif temp%3 == 1:
        num2 += 1
    else:
        num3 += 1
    n -= 1
print(num1, num2, num3)
    
