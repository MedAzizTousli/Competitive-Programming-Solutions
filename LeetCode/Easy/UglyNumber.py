class Solution(object):
    def isUgly(self, n):
        if n == 0:
            return False
        l = [2,3,5]
        for i in l:
            while n%i == 0:
                n /= i
        if n == 1:
            return True
        else:
            return False
