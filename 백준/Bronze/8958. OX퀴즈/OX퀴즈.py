t = int(input())
for i in range(t):
    quiz = list(input().split('X'))
    score = 0
    for i in range(len(quiz)):
        for j in range(len(quiz[i])):
            score += j+1
    print(score)