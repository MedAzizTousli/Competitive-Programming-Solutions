class Solution(object):
    def isPalindrome(self, x):
        ch = str(x)
        return ch == ch[::-1]
