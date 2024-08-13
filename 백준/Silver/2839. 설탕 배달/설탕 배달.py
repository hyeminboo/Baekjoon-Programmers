n = int(input())
cnt_5, cnt_3 = 0, 0
n_copy = n

if n % 5 == 0:
    print(n // 5)
else:
    for i in range(1, (n//5)+1):
        n_copy = n - 5 * i
        if n_copy % 3 == 0:
            cnt_5 = i
            cnt_3 = n_copy // 3

    if cnt_3 != 0:
        print(cnt_5 + cnt_3)
    else:
        if n % 3 == 0:
            cnt_3 = n // 3
            print(cnt_3)
        else:
            print(-1)