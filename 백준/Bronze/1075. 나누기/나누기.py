n, f = input(), int(input())
r = int(n[:-2]+'00') % f
if r == 0:
    print('00')
elif f-r < 10:
    print('0'+str(f-r))
else:
    print(f-r)