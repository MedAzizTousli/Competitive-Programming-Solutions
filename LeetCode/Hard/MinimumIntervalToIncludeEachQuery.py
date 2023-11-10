class Solution:
    def minInterval(self, intervals: List[List[int]], queries: List[int]) -> List[int]:
        intervals.sort()
        new_queries = sorted(queries)
        min_heap = []
        heapq.heapify(min_heap)
        i = 0
        curr_interval = intervals[i]
        mp = {}
        for q in new_queries:
            while q >= curr_interval[0] and i < len(intervals):
                size = curr_interval[1] - curr_interval[0] + 1
                heapq.heappush(min_heap, (size, curr_interval[1]))
                i += 1
                if i == len(intervals):
                    break
                curr_interval = intervals[i]
            while min_heap:
                head = min_heap[0]
                if head[1] < q:
                    heapq.heappop(min_heap)
                else:
                    mp[q] = head[0]
                    break
            if len(min_heap) == 0:
                mp[q] = -1
        return [mp[q] for q in queries]
