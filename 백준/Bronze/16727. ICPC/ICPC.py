p1, s1 = map(int, input().split())
p2, s2 = map(int, input().split())
if p1 + s2 > s1 + p2:
    print("Persepolis")
elif p1 + s2 < s1 + p2:
    print("Esteghlal")
else:
    if s1 > s2:
        print("Esteghlal")
    elif s1 < s2:
        print("Persepolis")
    else:
        print("Penalty")