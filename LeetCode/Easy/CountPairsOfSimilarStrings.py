class Solution:
    def similarPairs(self, words: List[str]) -> int:
        mp = {}
        for i in words:
            s = ""
            for j in i:
                if j not in s:
                    s += j
            s = ''.join(sorted(s))
            mp[s] = mp.get(s, 0) + 1
        res = 0
        for i in mp:
            n = mp[i]
            if n >= 2:
                res += n*(n-1)/2
        return int(res)
