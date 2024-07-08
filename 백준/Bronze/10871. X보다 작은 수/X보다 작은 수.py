a,b = map(int, input().split())
num_list = []
for i in map(int, input().split()):
    if i < b :
        num_list.append(i)
for j in num_list:
    print(j,end=" ")