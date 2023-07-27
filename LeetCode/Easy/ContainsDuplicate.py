class Solution(object):
    def containsDuplicate(self, nums):
        s = set(nums)
        return len(nums) != len(s)
