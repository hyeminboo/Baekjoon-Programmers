n = int(input())
num = list(map(int, input().split()))
cnt = 0
for i in num:
    if i%10 == n:
        cnt += 1
print(cnt)