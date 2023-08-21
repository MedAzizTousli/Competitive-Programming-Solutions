class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        i = 0
        j = 0
        res = False
        if len(s) == 0:
            return True
        while i < len(t):
            if t[i] == s[j]:
                i += 1
                j += 1
            else:
                i += 1
            if j == len(s):
                res = True
                break
        return res
