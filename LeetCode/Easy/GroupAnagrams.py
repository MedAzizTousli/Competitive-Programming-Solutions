class Solution(object):
    def groupAnagrams(self, strs):
        mp = defaultdict(list)
        for i in strs:
            s = ''.join(sorted(i))
            mp[s].append(i)
        res = []
        for i in mp:
            res.append(mp[i])
        return res
