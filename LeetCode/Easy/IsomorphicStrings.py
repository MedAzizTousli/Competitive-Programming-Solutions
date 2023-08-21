class Solution:
    def test(res: bool, s: str, t:str) -> bool:
        mp = {}
        for i in range(len(s)):
            key = s[i]
            value = t[i]
            if key in mp:
                if mp[key] != value:
                    res = False
                    break
            else:
                mp[key] = value
        return res
       
    def isIsomorphic(self, s: str, t: str) -> bool:
        res = True
        res = Solution.test(res, s, t) and Solution.test(res, t, s)
        return res
