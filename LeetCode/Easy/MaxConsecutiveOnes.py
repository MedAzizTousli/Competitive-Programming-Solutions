class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        res = 0
        cur = 0
        for i in nums:
            if i == 1:
                cur += 1
            else:
                res = max(res, cur)
                cur = 0
        res = max(res, cur)
        return res
