class Solution:
    def missingNumber(self, nums):
        nums.sort()
        for i in range(len(nums)):
            if (i != nums[i]):
                return i
        return len(nums)
