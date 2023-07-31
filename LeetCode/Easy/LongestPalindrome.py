class Solution(object):
    def longestPalindrome(self, s):
        mp = {}
        for i in s:
            mp[i] = mp.get(i, 0) + 1
        res = 0
        mx = 0
        for i in mp:
            if mp[i] % 2 == 0:
                res += mp[i]
            else:
                mx = max(mx, mp[i])
        first = True
        for i in mp:
            if mp[i]%2 == 1:
                if mp[i] == mx:
                    if first == True:
                        first = False
                        continue
                    else:
                        res = res + (mp[i]-1)
                else:
                    res = res + (mp[i]-1)
        return res + mx
