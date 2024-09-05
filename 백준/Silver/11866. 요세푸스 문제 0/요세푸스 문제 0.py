n, k = map(int, input().split())
num = []

for i in range(1, n+1):
    num.append(i)

idx = k-1

print("<", end="")

while (num != []):
    if idx >= len(num):
        idx %= len(num)
    if len(num) == 1:
        print(num[idx], end="")
        del num[idx]
    else:
        print("%d, "%(num[idx]), end="")
        del num[idx]

    idx += k-1

print(">")