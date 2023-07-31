class Solution(object):
    def sumOfUnique(self, nums):
        mp = {}
        for i in nums:
            mp[i] = mp.get(i,0) + 1
        res = 0
        for i in mp:
            if mp[i] == 1:
                res += i
        return res
