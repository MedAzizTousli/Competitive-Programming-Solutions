class Solution:
    def change(self, amount: int, coins: List[int]) -> int:
        n = len(coins)+1
        m = amount+1
        coins.sort()
        grid = [[0 for _ in range(m)] for _ in range(n)]
        coins.insert(0, 0)
        for i in range(n):
            grid[i][0] = 1
        for i in range(1,n):
            for j in range(1,m):
                grid[i][j] = grid[i-1][j]
                if j >= coins[i]:
                    grid[i][j] += grid[i][j-coins[i]]
        return grid[-1][-1]
