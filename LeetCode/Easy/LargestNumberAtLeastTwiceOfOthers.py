class Solution:
    def dominantIndex(self, nums: List[int]) -> int:
        mx = max(nums)
        res = nums.index(mx)
        for i in nums:
            if i == mx:
                continue
            if i*2 > mx:
                res = -1
                break
        return res
