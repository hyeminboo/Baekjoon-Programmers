a, b = int(input()), input()

num1 = a * int(b[-1])
num2 = a * int(b[1])
num3 = a * int(b[0])
ans = a * int(b)
print("{}\n{}\n{}\n{}".format(num1, num2, num3, ans))