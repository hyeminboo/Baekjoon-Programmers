i = 1
while i <= 10000:
    if i < 36:
        start = 1
    else:
        start = i - 36

    result = 0
    for j in range(start, i+1):
        num = list(str(j))
        sum_num = j + sum(map(int, num))
        if sum_num == i:
            result = j
            break
    if result == 0:
        print(i)

    i += 1