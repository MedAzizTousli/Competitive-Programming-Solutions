class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        l = text.split()
        res = 0
        for i in l:
            valid = True
            for j in i:
                if j in brokenLetters:
                    valid = False
                    res += 1
                    break
        return len(l) - res
