a, b, c = int(input()), int(input()), int(input())
string = str(a*b*c)
for i in range(10):
    print(string.count(str(i)))