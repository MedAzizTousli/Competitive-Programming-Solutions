class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        mp = {}
        for i in words[0]:
            mp[i] = mp.get(i, 0) + 1
        for word in words:
            count = {}
            for char in mp:
                count[char] = 0
            for char in word:
                count[char] = count.get(char, 0) + 1
            for key in count:
                mp[key] = min(mp.get(key, 0), count[key])
        res = []
        for i in mp:
            for j in range(mp[i]):
                res.append(i)
        return res
