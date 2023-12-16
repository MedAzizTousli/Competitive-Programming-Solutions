class Solution:
    def numDistinct(self, s: str, t: str) -> int:
        if len(t) > len(s):
            return 0
        ls = len(s)
        lt = len(t)
        dp = [[0 for j in range(ls)] for i in range(lt)]
        dp[0][0] = 1 if s[0] == t[0] else 0
        for j in range(1, ls):
            dp[0][j] = dp[0][j-1]
            if s[j] == t[0]:
                dp[0][j] += 1

        for i in range(1, lt):
            for j in range(i, ls):
                if s[j] == t[i]:
                    dp[i][j] = dp[i-1][j-1] + dp[i][j-1]
                else:
                    dp[i][j] = dp[i][j-1]

        return dp[-1][-1]
