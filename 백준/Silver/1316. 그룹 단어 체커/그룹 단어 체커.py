n = int(input())
cnt = 0
for i in range(n):
    word = input()
    gword = []
    for j in word:
        if j not in gword:
            gword.append(j)
        elif j == gword[-1]:
            gword.append(j)
    if gword == list(word):
        cnt += 1

print(cnt)