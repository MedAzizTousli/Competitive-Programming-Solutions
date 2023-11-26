class Solution:
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        n = len(grid)
        m = len(grid[0])
        visited = {}
        area = {}
        def dfs(i, j, curr, x, y):
            nonlocal n
            nonlocal m
            if i < 0 or j < 0 or i >= n or j >= m or visited.get((i,j), False) == True or grid[i][j] == 0:
                return None
            area[(x,y)] = area.get((x,y), 0) + 1
            visited[(i,j)] = True
            if grid[i][j] == 1:
                curr += 1
                dfs(i+1, j, curr, x, y)
                dfs(i-1, j, curr, x, y)
                dfs(i, j+1, curr, x, y)
                dfs(i, j-1, curr, x, y)
            else:
                return None
        for i in range(n):
            for j in range(m):
                if grid[i][j] == 1 and visited.get((i,j), False) == False:
                    area[(i,j)] = 0
                    dfs(i, j, 1, i, j)
        return max(area.values()) if area != {} else 0
