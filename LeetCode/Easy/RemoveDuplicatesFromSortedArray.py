class Solution(object):
    def removeDuplicates(self, nums):
        s = set(nums)
        nums[:len(s)] = sorted(s)
        return len(s)
