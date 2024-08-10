n = int(input())
num = list(map(int, input().split()))
cnt = 0

for i in num:
    divisor = []
    for j in range(1, i+1):
        if i % j == 0:
            divisor.append(j)
    if len(divisor) == 2:
        cnt += 1

print(cnt)