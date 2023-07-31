class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        rows = ["qwertyuiop", "asdfghjkl", "zxcvbnm"]
        mp = {}
        for i in range(3):
            for j in rows[i]:
                mp[j] = i
        res = []
        for i in words:
            cnt = {0:0, 1:0, 2:0}
            for j in i.lower():
                cnt[mp[j]] += 1
            if cnt[0] == len(i) or cnt[1] == len(i) or cnt[2] == len(i):
                res.append(i)
        return res
