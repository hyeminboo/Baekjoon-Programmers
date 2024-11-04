def solution(nums):
    unique = []
    for i in nums:
        if i not in unique:
            unique.append(i)
            
    if len(unique) > (len(nums)/2):
        return len(nums)/2
    else:
        return len(unique)