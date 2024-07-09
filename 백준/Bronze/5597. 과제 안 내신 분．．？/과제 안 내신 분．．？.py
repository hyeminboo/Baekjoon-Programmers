submit = []
for i in range(28):
    submit.append(int(input()))
for j in range(30):
    if j+1 not in submit:
        print(j+1)