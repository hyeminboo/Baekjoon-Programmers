n = int(input())
score = list(map(int, input().split()))
new_score = []
for i in range(len(score)):
    new_score.append(score[i] / max(score) * 100)
print(sum(new_score)/n)