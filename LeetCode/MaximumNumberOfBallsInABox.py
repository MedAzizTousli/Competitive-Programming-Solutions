class Solution:
    def fun(self, n):
        res = 0
        for i in str(n):
            res += int(i)
        return res

    def countBalls(self, lowLimit: int, highLimit: int) -> int:
        mp = {}
        for i in range(lowLimit, highLimit+1):
            x = self.fun(i)
            mp[x] = mp.get(x, 0) + 1
        res = 0
        for i in mp: 
            res = max(res, mp[i])
        return res
