class Solution:
    def numDecodings(self, s: str) -> int:
        n = len(s)
        st = set()
        for i in range(1, 27):
            st.add(str(i))
        dp = [0] * n
        if s[0] == '0':
            return 0
        else:
            dp[0] = 1
        if len(s) == 1:
            return 1
        if s[1] == '0':
            if s[:2] in st:
                dp[1] = 1
            else:
                return 0
        if s[:2] in st and '0' not in s[:2]:
            dp[1] = 2
        else:
            dp[1] = 1
        banned = {'00','30','40','50','60','70','80','90'}
        for i in range(2, n):
            if s[i-1:i+1] in banned:
                return 0
            if s[i] == '0':
                dp[i] = dp[i-2]
            elif s[i-1:i+1] in st:
                dp[i] = dp[i-2]+dp[i-1]
            else:
                dp[i] = dp[i-1]
        return dp[n-1]
