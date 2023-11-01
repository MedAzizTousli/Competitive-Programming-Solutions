class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        neg = [-i for i in stones]
        heapq.heapify(neg)
        while len(neg) > 1:
            x = heapq.heappop(neg)
            y = heapq.heappop(neg)
            if x != y:
                heapq.heappush(neg, x-y)
        if len(neg) == 1:
            return -neg[0]
        else:
            return 0
