class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        mp = {}
        i = 0
        j = 0
        res = 0
        while j < len(s):
            char = s[j]
            if char in mp:
                i = max(i, mp[char] + 1)
            mp[char] = j
            res = max(res, j-i+1)
            j += 1
        return res
