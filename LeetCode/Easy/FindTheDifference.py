class Solution(object):
    def findTheDifference(self, s, t):
        s = ''.join(sorted(s))
        t = ''.join(sorted(t))
        char = ''
        for i in range(len(s)):
            if s[i] != t[i]:
                char = t[i]
                break
        if char == '':
            char = t[-1]
        return char
