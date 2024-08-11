n, m = map(int, input().split())

num = list(map(int, input().split()))
num.sort(reverse=True)
result = 0

for i in range(n):
    for j in range(i+1, n):
        for k in range(j+1, n):
            sum_num = num[i] + num[j] + num[k]
            if sum_num <= m and sum_num > result:
                result = sum_num
print(result)
