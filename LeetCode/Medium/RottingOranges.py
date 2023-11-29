class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        rows = len(grid)
        cols = len(grid[0])
        visited = set()
        q = deque()
        for i in range(rows):
            for j in range(cols):
                if grid[i][j] == 2:
                    q.append((i,j))
                    visited.add((i,j))
        rotten = []
        res = -1
        while q:
            while q:
                row,col = q.popleft()
                directions= [[1,0],[-1,0],[0,1],[0,-1]]
                for dr,dc in directions:
                    r,c = row + dr, col + dc
                    if (r) in range(rows) and (c) in range(cols) and grid[r][c] == 1 and (r ,c) not in visited:                       
                        rotten.append((r , c))
                        visited.add((r, c))
                        grid[r][c] = 2
            for i in rotten:
                q.append(i)
            rotten = []
            res += 1
        for i in range(rows):
            for j in range(cols):
                if grid[i][j] == 1:
                    res = -1
                    break
            if res == -1:
                break
        count_zero = 0
        for i in range(rows):
            for j in range(cols):
                if grid[i][j] == 0:
                    count_zero += 1
        if count_zero == cols*rows: return 0
        return res
