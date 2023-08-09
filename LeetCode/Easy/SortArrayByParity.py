class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        oddL = 0
        evenR = len(nums) - 1
        while evenR > oddL:
            if nums[evenR]%2 == 0 and nums[oddL]%2 != 0:
                x = nums[evenR]
                nums[evenR] = nums[oddL]
                nums[oddL] = x 
            if nums[evenR]%2 != 0:
                evenR -= 1
            if nums[oddL]%2 == 0:
                oddL += 1
        return nums
