n = int(input())
if n > 54:
    start = n-54
else :
    start = 1

result = 0
for i in range(start, n+1):
    sum_num = i
    for j in str(i):
        sum_num += int(j)
    if sum_num == n:
        result = i
        break
print(result)