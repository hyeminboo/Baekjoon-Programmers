n = int(input())
k = [1]
while True:
    if k[-1]*(k[-1]+1) == (n-1):
        print(k[-1])
        break
    else:
        k.append(k[-1]+1)