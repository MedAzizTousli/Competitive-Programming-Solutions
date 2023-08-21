class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        res = 0
        mini = 1e5
        for i in range(len(prices)):
            mini = min(mini, prices[i])
            res = max(res, prices[i]-mini)
        return res
