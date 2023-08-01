class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        left = [1] + [0] * (n-1) 
        right = [0] * (n-1) + [1]
        for i in range(1, n):
            left[i] = left[i-1] * nums[i-1]
        for i in range(n-2, -1, -1):
            right[i] = right[i+1] * nums[i+1]
        res = []
        for i in range(n):
            res.append(right[i] * left[i])
        return res
