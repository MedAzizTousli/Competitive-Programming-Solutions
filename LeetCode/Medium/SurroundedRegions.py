class Solution:
    def solve(self, board: List[List[str]]) -> None:
        ROWS = len(board)
        COLS = len(board[0])
        protected = set()
        def dfs(i, j):
            if i<0 or j<0 or i>=ROWS or j>=COLS or board[i][j] == "X" or (i,j) in protected:
                return
            protected.add((i,j))
            dfs(i+1, j)
            dfs(i-1, j)
            dfs(i, j+1)
            dfs(i, j-1)
        for i in range(ROWS):
            if board[i][0] == "O":
                dfs(i, 0)
            if board[i][COLS-1] == "O":
                dfs(i, COLS-1)
        for j in range(COLS):
            if board[0][j] == "O":
                dfs(0, j)
            if board[ROWS-1][j] == "O":
                dfs(ROWS-1, j)
        for i in range(ROWS):
            for j in range(COLS):
                if board[i][j] == "O" and (i,j) not in protected:
                    board[i][j] = "X"
