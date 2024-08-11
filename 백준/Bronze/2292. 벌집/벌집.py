n = int(input())
i = 1
num = 1

while True:
    if n == 1:
        print(1)
        break
    else:
        num += 6 * i
        if num >= n:
            print(i+1)
            break
        i += 1