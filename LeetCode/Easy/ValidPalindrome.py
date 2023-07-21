class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        new = ""
        for c in s:
            if c.isalpha() or c.isdigit():
                new += c
        return new == new[::-1]
