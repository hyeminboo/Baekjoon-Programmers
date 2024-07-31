import string

s = input()
lower = [i for i in string.ascii_lowercase]
for j in lower:
   print(s.count(j), end=' ')