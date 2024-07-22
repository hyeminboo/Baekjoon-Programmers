total, n = int(input()), int(input())
r_total = 0
for i in range(n):
    a, b = map(int, input().split())
    r_total += a*b
if total == r_total:
    print("Yes")
else:
    print("No")