class Solution:
    def isInterleave(self, s1: str, s2: str, s3: str) -> bool:
        if len(s1)+len(s2) != len(s3):
            return False
        l1 = len(s1)
        l2 = len(s2)
        dp = [[False for j in range(l2+1)] for i in range(l1+1)]

        for j in range(l2):
            if s2[:j+1] == s3[:j+1]:
                dp[0][j+1] = True
        for i in range(l1):
            if s1[:i+1] == s3[:i+1]:
                dp[i+1][0] = True
        dp[0][0] = True
        for i in range(1, l1+1):
            for j in range(1, l2+1):
                if s1[i-1] == s3[i+j-1]:
                    dp[i][j] = dp[i][j] or dp[i-1][j]
                if s2[j-1] == s3[i+j-1]:
                    dp[i][j] = dp[i][j] or dp[i][j-1]

        return dp[-1][-1]
