class Solution:
    def rob(self, nums: List[int]) -> int:
        n = len(nums)
        if n == 1:
            return nums[0]
        res = [0] * n
        res[0], res[1] = nums[0], nums[1]
        for i in range(2, n):
            res[i] = max(res[i-1], res[i-2] + nums[i], res[i-3] + nums[i])
        return max(res[n-1], res[n-2])
