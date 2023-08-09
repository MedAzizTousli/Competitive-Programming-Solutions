class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        l = sorted(heights)
        res = 0
        for i in range(len(l)):
            if heights[i] != l[i]:
                res += 1
        return res
