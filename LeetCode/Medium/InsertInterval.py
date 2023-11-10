class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
        i, j = newInterval
        if intervals == []:
            return [newInterval]
        if j < intervals[0][0]:
            intervals.insert(0, newInterval)
            return intervals
        elif j == intervals[0][0]:
            intervals[0] = [i, intervals[0][1]]
            return intervals
        res = []
        flag = False
        to_add = [-1, -1]
        rem = len(intervals)+1
        for k, interval in enumerate(intervals):
            p, q = interval
            # left side
            if i > q:
                flag = True
                res.append(interval)
                to_add[0] = i
            if i >= p and i <= q:
                flag = True
                to_add[0] = p
            if flag == False and i < p:
                flag = True
                to_add[0] = i
            # right side
            if flag:
                if j < p:
                    to_add[1] = j
                    rem = k
                    break
                if j >= p and j <= q:
                    to_add[1] = q
                    rem = k+1
                    break
            if flag == False:
                res.append(interval)
        if to_add[1] == -1:
            to_add[1] = j
        res.append(to_add)
        for k in range(rem, len(intervals)):
            res.append(intervals[k])
        return res
