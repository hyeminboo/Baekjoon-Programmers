n = int(input())
num = []

for i in range(n):
    a = int(input())
    if a != 0:
        num.append(a)
    else:
        del num[-1]

print(sum(num))