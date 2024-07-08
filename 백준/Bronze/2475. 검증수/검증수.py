sum = 0
for i in map(int, input().split()):
    sum += i*i
print(sum % 10)