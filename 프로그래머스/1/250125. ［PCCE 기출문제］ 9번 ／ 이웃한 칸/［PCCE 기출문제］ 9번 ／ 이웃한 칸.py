def solution(board, h, w):
    n = len(board)
    
    cnt = 0
    dh = [1, -1, 0, 0]
    dw = [0, 0, 1, -1]
    
    color = board[h][w]
    
    for i in range(4):
        x = h + dh[i]
        y = w + dw[i]
        if 0 <= x < n and 0 <= y < n:
            if board[x][y] == color:
                cnt += 1

    return cnt