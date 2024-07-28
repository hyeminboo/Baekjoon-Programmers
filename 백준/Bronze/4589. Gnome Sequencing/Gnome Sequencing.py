n = int(input())

order = []
for i in range(n):
    num = list(map(int, input().split()))
    if num == sorted(num) or num == sorted(num, reverse=True):
        order.append("Ordered")
    else:
        order.append("Unordered")

print("Gnomes:")
for i in order:
    print(i)