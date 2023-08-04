class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        mp = {"2": "abc", "3": "def", "4": "ghi", "5": "jkl", "6": "mno", "7": "pqrs", "8": "tuv", "9": "wxyz"}
        l = []

        def dfs(ch, n):
            if n == len(digits):
                l.append(ch)
                return None
            for i in mp[digits[n]]:
                dfs(ch + i, n+1)
        
        if len(digits) >= 1:
            for i in mp[digits[0]]:
                dfs(i, 1)

        return l
