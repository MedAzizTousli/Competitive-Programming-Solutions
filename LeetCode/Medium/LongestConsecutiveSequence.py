class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        nums.sort()
        res = 1
        k = 1
        for i in range(len(nums)-1):
            if nums[i+1] == nums[i] + 1:
                k += 1
            elif nums[i+1] == nums[i]:
                k = k
            else:
                k = 1
            res = max(res, k)
        if nums == []:
            res = 0
        return res
