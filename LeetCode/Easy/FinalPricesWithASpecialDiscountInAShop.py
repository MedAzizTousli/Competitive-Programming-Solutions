class Solution:
    def finalPrices(self, prices: List[int]) -> List[int]:
        stack = []
        prices.append(0)
        res = [0] * len(prices)
        for i, price in enumerate(prices):
            while stack != [] and price <= prices[stack[-1]]:
                idx = stack.pop()
                res[idx] = prices[idx] - price
            stack.append(i)
        return res[:len(res)-1]
