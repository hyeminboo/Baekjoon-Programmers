n, k = map(int, input().split())
ans, div = 1, 1

for i in range(k):
    ans *= n-i
    div *= i+1

print(ans//div)