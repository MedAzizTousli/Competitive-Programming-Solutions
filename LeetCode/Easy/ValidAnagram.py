class Solution(object):
    def isAnagram(self, s, t):
        return ''.join(sorted(s)) == ''.join(sorted(t))
