class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        n = len(grid)
        m = len(grid[0])
        visited = {}
        def dfs(i, j):
            nonlocal n
            nonlocal m
            if i < 0 or j < 0 or i >= n or j >= m or visited.get((i,j), False) == True:
                return None
            visited[(i,j)] = True
            if grid[i][j] == "1":
                dfs(i+1, j)
                dfs(i-1, j)
                dfs(i, j+1)
                dfs(i, j-1)
            else:
                return None
        res = 0
        for i in range(n):
            for j in range(m):
                if grid[i][j] == "1" and visited.get((i,j), False) == False:
                    dfs(i, j)
                    res += 1
        return res
