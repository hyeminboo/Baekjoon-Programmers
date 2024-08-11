n = int(input())

def count_zero(num):
    result = 1
    for i in range(1, num+1):
        result *= i

    result = str(result)
    cnt = 0
    for j in result[::-1]:
        if j == '0':
            cnt += 1
        else:
            print(cnt)
            break

count_zero(n)