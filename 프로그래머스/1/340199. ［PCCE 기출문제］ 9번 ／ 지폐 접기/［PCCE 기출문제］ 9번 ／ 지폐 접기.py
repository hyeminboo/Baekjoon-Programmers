def solution(wallet, bill):
    cnt = 0
    while True:
        b_min = min(bill[0], bill[1])
        w_min = min(wallet[0], wallet[1])
        b_max = max(bill[0], bill[1])
        w_max = max(wallet[0], wallet[1])
        
        if b_min > w_min or b_max > w_max:
            if bill[0] > bill[1]:
                bill[0] //= 2
            else:
                bill[1] //= 2
            cnt += 1
        else:
            return cnt

            
