class Solution:
    def largestRectangleArea(self, H: List[int]) -> int:
        H.append(0)
        stack = []
        res = 0
        for i in range(len(H)):
            start = i
            while stack != [] and H[i] < stack[-1][1]:
                x = stack.pop()
                start = x[0]
                area = (i - x[0]) * x[1]
                res = max(res, area)
            stack.append([start, H[i]])
        return res
