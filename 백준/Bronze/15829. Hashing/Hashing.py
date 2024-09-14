R = 31
M = 1234567891

l = int(input())
s = input()
h = 0

for i in range(l):
    h += (ord(s[i]) - 96) * (R ** i)

print(h % M)