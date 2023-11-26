class Solution:
    def pacificAtlantic(self, heights: List[List[int]]) -> List[List[int]]:
        n = len(heights)
        m = len(heights[0])
        pacific_ocean = {}
        atlantic_ocean = {}
        visited = {}
        def dfs(i, j, prev, x, y):
            nonlocal n
            nonlocal m
            if visited.get((i,j), False) == True:
                return None
            if i>=0 and j>=0 and i<n and j<m and heights[i][j] > prev:
                return None
            if i < 0 or j < 0:
                pacific_ocean[(x,y)] = True
                return None
            if i >= n or j >= m:
                atlantic_ocean[(x,y)] = True
                return None
            visited[(i,j)] = True
            dfs(i+1, j, heights[i][j], x, y)
            dfs(i-1, j, heights[i][j], x, y)
            dfs(i, j+1, heights[i][j], x, y)
            dfs(i, j-1, heights[i][j], x, y)

        for i in range(n):
            for j in range(m):
                visited = {}
                dfs(i, j, heights[i][j], i, j)
        res = []
        for i in range(n):
            for j in range(m):
                if pacific_ocean.get((i,j), False) and atlantic_ocean.get((i,j), False):
                    res.append((i,j))
        return res
