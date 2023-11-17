class Solution:
    def rob(self, nums: List[int]) -> int:
        n = len(nums)
        if n < 3:
            return max(nums)
        res = [0] * n
        res[0], res[1] = 0, nums[1]
        for i in range(2, n):
            res[i] = max(res[i-1], res[i-2] + nums[i], res[i-3] + nums[i])
        x = max(res[-1], res[-2])

        res = [0] * (n-1)
        res[0], res[1] = nums[0], nums[1]
        for i in range(2, n-1):
            res[i] = max(res[i-1], res[i-2] + nums[i], res[i-3] + nums[i])
        y = max(res[-1], res[-2])
        return max(x, y)
