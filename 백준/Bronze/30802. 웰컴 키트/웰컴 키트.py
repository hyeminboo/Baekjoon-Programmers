n = int(input())
size = list(map(int, input().split()))
t, p = map(int, input().split())
t_num = 0

for i in size:
    if i % t == 0:
        t_num += i // t
    else:
        t_num += i // t + 1

print(t_num)
print(n // p, n % p)