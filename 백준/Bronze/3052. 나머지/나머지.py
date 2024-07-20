remainder = []
for i in range(10):
    r = int(input()) % 42
    if r not in remainder:
        remainder.append(r)
print(len(remainder))