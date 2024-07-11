num = []
while len(num) < 5:
    a = int(input())
    if a >= 0 and a <= 10:
        num.append(a)
print(sum(num))