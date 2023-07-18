class Solution(object):
    def twoSum(self, nums, target):
        for i in range(0, len(nums)):
            try:
                j = nums.index(target - nums[i])
            except ValueError:
                continue
            if i != j:
                return [i, j]
