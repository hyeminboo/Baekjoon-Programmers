h, m, s = map(int, input().split())
d = int(input())
h += d // 3600
m += (d % 3600) // 60
s += d % 3600 % 60

if s >= 60:
    s %= 60
    m += 1
if m >= 60:
    m %= 60
    h += 1
if h >= 24:
    h %= 24

print('{} {} {}'.format(h,m,s))