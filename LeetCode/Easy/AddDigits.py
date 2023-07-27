class Solution(object):
    def cal(self, num):
        s = str(num)
        res = 0
        for i in s:
            res += int(i)
        return res

    def addDigits(self, num):
        while len(str(num)) > 1:
            num = self.cal(num)
        return num
