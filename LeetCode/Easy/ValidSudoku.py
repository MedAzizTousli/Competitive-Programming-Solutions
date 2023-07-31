class Solution(object):
    def isValidSudoku(self, board):
        res = True
        # Verify Lines
        for i in range(9):
            mp = {}
            for j in range(9):
                c = board[i][j] 
                if c != ".":
                    mp[c] = mp.get(c, 0) + 1
            for i in mp:
                if mp[i] > 1:
                    res = False
        
        # Verify Columns
        for i in range(9):
            mp = {}
            for j in range(9):
                c = board[j][i] 
                if c != ".":
                    mp[c] = mp.get(c, 0) + 1
            for z in mp:
                if mp[z] > 1:
                    res = False

        # Verify 3x3 Squares
        ranges = [range(0,3), range(3, 6), range(6,9)]
        for i in ranges:
            for j in ranges:
                mp = {}
                for k in i:
                    for l in j:
                        c = board[k][l]
                        if c != ".":
                            mp[c] = mp.get(c, 0) + 1
                for z in mp:
                    if mp[z] > 1:
                        res = False
        return res       
