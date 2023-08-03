class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        s = set()
        nums.sort()
        for i in range(0, len(nums)-1):
            l = i + 1
            r = len(nums) - 1
            while (l < r):
                test = nums[l] + nums[r]
                if test < - nums[i]:
                    l += 1
                elif test > - nums[i]:
                    r -= 1
                else:
                    s.add((nums[i], nums[l], nums[r]))
                    l += 1
                    r -= 1
        return s
