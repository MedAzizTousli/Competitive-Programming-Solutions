class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        res = []
        heapq.heapify(res)
        for pt in points:
            dis = - sqrt(pt[0]**2 + pt[1]**2)
            heapq.heappush(res, (dis, pt))
            if len(res) > k:
                heapq.heappop(res)
        return [i[1] for i in res]
