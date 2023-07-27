class Solution(object):
    def lengthOfLastWord(self, s):
        first = -1
        for i in range(len(s)-1, -1, -1):
            if first != -1 and s[i] == " ":
                break
            if first == -1 and s[i] != " ":
                first = i
        if i == 0:
            if s[i] == " ":
                return first-i
            else:
                return first-i+1
        return first-i
