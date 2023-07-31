class Solution(object):
    def numJewelsInStones(self, jewels, stones):
        mp = {}
        res = 0
        for i in jewels:
            mp[i] = True
        for i in stones:
            try:
                if mp[i] == True :
                    res += 1
            except KeyError:
                continue
        return res
