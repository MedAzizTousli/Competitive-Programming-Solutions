class Solution(object):
    def strStr(self, h, n):
        i = 0
        j = 0
        res = -1
        save = 0
        while i < len(h):
            if h[i] == n[j]:
                sub = True
                for k in range(len(n)):
                    if k+i >= len(h) or h[k+i] != n[k]:
                        sub = False
                        break
                if sub:
                    res = i
                    break
                else:
                    i += 1
                    j = 0
            else:
                i += 1
                j = 0
        return res
