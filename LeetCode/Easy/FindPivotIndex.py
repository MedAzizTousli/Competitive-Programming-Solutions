class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        left = [0] * len(nums)
        right = [0] * len(nums)
        for i in range(1, len(nums)):
            left[i] = left[i-1] + nums[i-1]
        for i in range(len(nums)-2, -1, -1):
            right[i] = right[i+1] + nums[i+1]
        res = -1
        for i in range(len(nums)):
            if left[i] == right[i]:
                res = i
                break
        return res
