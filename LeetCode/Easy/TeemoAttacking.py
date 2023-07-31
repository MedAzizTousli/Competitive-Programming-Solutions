class Solution(object):
    def findPoisonedDuration(self, timeSeries, duration):
        res = duration
        for i in range(len(timeSeries)-1, 0, -1):
            res += min(duration, timeSeries[i] - timeSeries[i-1])
        return res
