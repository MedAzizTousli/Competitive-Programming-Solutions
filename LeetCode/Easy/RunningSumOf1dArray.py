class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        result = []
        result.append(nums[0])
        for i in range(1,len(nums)):
            result.append(nums[i] + result[i-1])
        return result
