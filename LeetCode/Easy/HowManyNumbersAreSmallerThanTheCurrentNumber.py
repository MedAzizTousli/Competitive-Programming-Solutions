class Solution(object):
    def smallerNumbersThanCurrent(self, nums):
        l = list()
        for i in range(len(nums)):
            res = 0
            for j in range(len(nums)):
                if i != j and nums[j] < nums[i]:
                    res += 1
            l.append(res)
        return l
