class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        n = len(cost)
        cost.append(0)
        l = [0] * (n+1)
        l[0], l[1] = cost[0], cost[1]
        for i in range(2, n+1):
            l[i] = min(l[i-1], l[i-2]) + cost[i]
        return l[n]
