dial = ['ABC', 'DEF', 'GHI', 'JKL', 'MNO', 'PQRS', 'TUV', 'WXYZ']
num = input()
sec = 0
for i in num:
    for j in range(len(dial)):
        if i in dial[j]:
            sec += j+3
print(sec)