class Solution(object):
    def numIdenticalPairs(self, nums):
        res = 0
        for i in range(len(nums)-1):
            for j in range(i+1, len(nums)):
                if nums[i] == nums[j]:
                    res += 1
        return res
