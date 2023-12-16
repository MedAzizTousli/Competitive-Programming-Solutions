class Solution:
    def findTargetSumWays(self, nums: List[int], target: int) -> int:
        maxi = sum(nums)
        ROWS = len(nums)
        COLS = maxi*2+1
        grid = [[0 for _ in range(COLS)] for _ in range(ROWS)]
        half = COLS // 2
        if target > maxi:
            return 0

        for j in range(COLS):
            if j-half == nums[0] or j-half == -nums[0]:
                if nums[0] == 0:
                    grid[0][j] = 2
                else:
                    grid[0][j] = 1

        for i in range(1, ROWS):
            for j in range(COLS):
                nb = nums[i]
                if j-nb >= 0: grid[i][j-nb] += grid[i-1][j]
                if j+nb < COLS: grid[i][j+nb] += grid[i-1][j]
        return grid[-1][half+target]
