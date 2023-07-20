class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        result = 0
        for i in accounts:
            result = max(result, sum(i))
        return result
