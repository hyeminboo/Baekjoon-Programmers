n = int(input())

for i in range(n):
    stack = []
    c = True
    for j in input():
        if j == '(':
            stack.append(j)
        else:
            try:
                stack.pop()
            except:
                c = False
                print('NO')
                break

    if c == True and len(stack) == 0:
        print('YES')
    elif len(stack) != 0:
        print('NO')