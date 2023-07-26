class Solution(object):
    def averageValue(self, nums):
        som = 0
        com = 0
        for i in nums:
            if i % 6 == 0:
                som += i
                com += 1
        if com == 0:
            return 0
        return int(round(som / com))
