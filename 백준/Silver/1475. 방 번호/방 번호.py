n = input()
max_num, cnt_2 = 0, 0

for i in range(10):
    if i == 6 or i == 9:
        cnt_2 += n.count(str(i))
    else:
        cnt = n.count(str(i))
        if cnt > max_num:
            max_num = cnt

if cnt_2 % 2 == 0:
    cnt_2 = cnt_2 // 2
else:
    cnt_2 = cnt_2 // 2 + 1

if cnt_2 > max_num:
    print(cnt_2)
else:
    print(max_num)