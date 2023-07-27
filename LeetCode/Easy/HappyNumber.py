class Solution(object):
    def cal(self, n):
        s = str(n)
        res = 0
        for i in s:
            res += int(i)**2
        return res

    def isHappy(self, n):
        mp = {}
        while n != 1 :
            n = self.cal(n)
            exist = mp.get(n, False)
            if exist == True:
                break
            mp[n] = True
        return n == 1
