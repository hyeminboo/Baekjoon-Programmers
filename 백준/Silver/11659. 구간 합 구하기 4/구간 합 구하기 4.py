import sys
input = sys.stdin.readline

n, m = map(int, input().split())
numbers = list(map(int, input().split()))

s = [0]
sum_num = 0
for i in range(n):
    sum_num += numbers[i]
    s.append(sum_num)

for i in range(m):
    a, b = map(int, input().split())
    print(s[b] - s[a-1])