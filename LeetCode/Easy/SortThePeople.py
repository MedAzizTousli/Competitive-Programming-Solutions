class Solution(object):
    def sortPeople(self, names, heights):
        mp = {}
        for i in range(len(names)):
            mp[heights[i]] = names[i]
        x = OrderedDict(sorted(mp.items(), reverse=True))
        l = []
        for i in x:
            l.append(x[i])
        return l
