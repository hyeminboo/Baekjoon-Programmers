def solution(arr):
    answer = ['0']
    for i in arr:
        cmp = answer[-1]
        if i != cmp:
            answer.append(i)
    
    del answer[0]
    
    return answer