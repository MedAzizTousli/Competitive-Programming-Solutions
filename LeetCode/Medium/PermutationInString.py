class Solution:
    def checkInclusion(self, sub_string: str, string: str) -> bool:
        n = len(string)
        k = len(sub_string)
        res = False
        for i in range(n-k+1):
            if Counter(string[i:i+k]) == Counter(sub_string):
                res = True
                break
        return res
