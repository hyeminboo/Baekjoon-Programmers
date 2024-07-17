num = []
while len(num) < 9:
    n = int(input())
    if n not in num:
        num.append(n)
print(max(num))
print(num.index(max(num))+1)