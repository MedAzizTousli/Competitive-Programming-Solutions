class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        intervals.sort()
        res = 0
        currInterval = intervals[0]
        urrInterval = intervals[0]
        for i in range(1, len(intervals)):
            if currInterval[1] <= intervals[i][0]:
                currInterval = intervals[i]
            else:
                print(currInterval, intervals[i])
                res += 1
                if currInterval[1] > intervals[i][1]:
                    currInterval = intervals[i]
        return res
