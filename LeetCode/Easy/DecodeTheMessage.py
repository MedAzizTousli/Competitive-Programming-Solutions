class Solution(object):
    def decodeMessage(self, key, message):
        mp = {' ': ' '}
        alph = 'a'
        for i in key:
            if i not in mp:
                mp[i] = alph
                alph = chr(ord(alph) + 1)
        res = ""
        for i in message:
            res += mp[i]
        return res
