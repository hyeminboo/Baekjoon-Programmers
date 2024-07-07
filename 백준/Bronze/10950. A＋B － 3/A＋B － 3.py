t = int(input())
num = []
for i in range(t):
  a, b = map(int, input().split())
  num.append(a+b)

for i in range(t):
    print(num[i])