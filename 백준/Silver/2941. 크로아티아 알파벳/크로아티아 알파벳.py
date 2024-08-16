word = input()
cnt = 0
word_len = len(word)

alp = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']
for i in alp:
    if i in word:
        if i == 'z=':
            dz_cnt = word.count(i) - word.count('dz=')
            cnt += dz_cnt
            word_len -= len(i) * dz_cnt
        else:
            cnt += word.count(i)
            word_len -= len(i) * word.count(i)
print(cnt + word_len)