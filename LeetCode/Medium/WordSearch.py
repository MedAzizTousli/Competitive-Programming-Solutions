class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        n = len(board)
        m = len(board[0])

        res = False

        def dfs(r, c, i, visited):
            nonlocal res
            if i >= len(word):
                res = True
                return
            if r > n-1 or r < 0 or c < 0 or c > m-1:
                return
            if board[r][c] == word[i] and visited.get((r, c), False) == False:
                visited[(r,c)] = True
                dfs(r + 1, c, i+1, visited)
                dfs(r - 1, c, i+1, visited)
                dfs(r, c + 1, i+1, visited)
                dfs(r, c - 1, i+1, visited)
                visited[(r,c)] = False
            else:
                return
        
        for r in range(n):
            for c in range(m):
                visited = {}
                dfs(r, c, 0, visited)
            
        return res
