class Solution(object):
    def mostCommonWord(self, paragraph, banned):
        useless = "!?',;."
        for i in useless:
            paragraph = paragraph.replace(i, " ")
        ban = set()
        for i in banned:
            ban.add(i)
        paragraph = paragraph.lower()
        l = paragraph.split()
        mp = {}
        for i in l:
            if i not in ban:
                mp[i] = mp.get(i, 0) + 1
        mx = 0
        res = ""
        for i in mp:
            if mp[i] > mx:
                mx = mp[i]
                res = i
        return res
