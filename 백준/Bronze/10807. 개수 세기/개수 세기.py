n = int(input())
num_list = list(map(int, input().split()))
v = int((input()))
if n == len(num_list):
    cnt = 0
    for i in range(n):
        if num_list[i] == v:
            cnt += 1
print(cnt)