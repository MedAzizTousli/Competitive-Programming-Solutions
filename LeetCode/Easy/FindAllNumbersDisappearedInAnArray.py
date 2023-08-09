class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        n = len(nums)
        nums.sort()
        l = list(OrderedDict.fromkeys(sorted(nums)))
        res = []
        if l[0] != 1:
            for i in range(1,l[0]):
                res.append(i)
        for i in range(len(l)-1):
            if l[i+1] != l[i] + 1:
                for j in range(l[i]+1, l[i+1]):
                    res.append(j)
        rest = n-len(l)-len(res)
        for i in range(rest):
            res.append(l[len(l)-1]+1+i)
        return res
