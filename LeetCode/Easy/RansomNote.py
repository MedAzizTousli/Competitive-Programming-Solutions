class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        result = True
        for i in ransomNote:
            if i not in magazine:
                result = False
                break
            magazine = magazine.replace(i, "", 1)
        return result
