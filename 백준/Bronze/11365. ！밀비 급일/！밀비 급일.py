password = []
while True:
    sentence = input()
    if sentence == 'END':
        break
    else:
        password.append(sentence)

for i in range(len(password)):
    a = len(password[i])
    for j in range(a):
        if j+1 != a:
            print(password[i][a-(j+1)],end='')
        else:
            print(password[i][a-(j+1)],end='\n')