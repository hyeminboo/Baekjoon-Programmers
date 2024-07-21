s = input()
alist = list(map(chr, range(97, 123)))
for i in range(len(alist)):
    if alist[i] not in s:
        alist[i] = -1
    else:
        alist[i] = s.find(alist[i])
for i in alist:
    print(i, end=' ')