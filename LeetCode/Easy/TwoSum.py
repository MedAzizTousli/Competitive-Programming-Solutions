class Solution(object):
    def twoSum(self, nums, target):
        for i in range(0, len(nums)):
            # if nums[i] > target:
            #     continue
            try:
                j = nums.index(target - nums[i])
            except ValueError:
                continue
            if i != j:
                return [i, j]
