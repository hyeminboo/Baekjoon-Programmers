t = int(input())
for i in range(t):
    h, w, n = map(int, input().split())
    if n % h == 0:
        floor = h
        order = n//h
    else:
        floor = n % h
        order = n//h + 1
    if order < 10 :
        order = '0' + str(order)
    print('{}{}'.format(floor, order))