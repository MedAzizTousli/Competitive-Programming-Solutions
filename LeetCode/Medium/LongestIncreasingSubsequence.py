class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        n = len(nums)
        res = 0
        dp = {}
        for i in range(0, n):
            number = nums[i]
            dp[number] = 1
            tmp_max = -1e5
            for j in range(i-1, -1, -1):
                if nums[j] < nums[i]:
                    tmp_max = max(tmp_max, dp[nums[j]])
            if tmp_max != -1e5:
                dp[number] = tmp_max + 1
        return max(dp.values())
