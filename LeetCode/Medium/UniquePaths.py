class Solution:
    def uniquePaths(self, n: int, m: int) -> int:
        grid = [[0 for _ in range(m)] for _ in range(n)]
        for i in range(n):
            grid[i][0] = 1
        for j in range(m):
            grid[0][j] = 1
        for i in range(1,n):
            for j in range(1,m):
                grid[i][j] = grid[i-1][j] + grid[i][j-1]
        return grid[-1][-1]
