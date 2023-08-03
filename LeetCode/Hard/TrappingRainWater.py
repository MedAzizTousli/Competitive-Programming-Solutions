class Solution:
    def trap(self, height: List[int]) -> int:
        if height == []:
            return 0
        l, r = 0, len(height) - 1
        maxL, maxR = height[l], height[r]
        res = 0
        while l < r:
            if maxL < maxR:
                res += max(0, maxL-height[l])
                l += 1
                maxL = max(maxL, height[l])
            else:
                res += max(0, maxR-height[r])
                r -= 1
                maxR = max(maxR, height[r])
        return res
