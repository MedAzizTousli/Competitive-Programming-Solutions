class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort()
        res = []

        currInterval = intervals[0]
        for i in range(1, len(intervals)):
            if currInterval[1] < intervals[i][0]:
                res.append(currInterval)
                currInterval = intervals[i]
            else:
                currInterval = [
                    min(currInterval[0], intervals[i][0]),
                    max(currInterval[1], intervals[i][1])
                ]
        res.append(currInterval)
        return res
