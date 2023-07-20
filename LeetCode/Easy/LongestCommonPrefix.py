class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        size = 200
        for ch in strs:
            size = min(size, len(ch))
        i = 0
        result = ""
        while i < size:
            same = True
            for ch in range(1, len(strs)):
                if (strs[ch][i] != strs[ch-1][i]):
                    same = False
                    break
            if same:
                result += strs[0][i]
                i += 1
            else:
                break
        return result
