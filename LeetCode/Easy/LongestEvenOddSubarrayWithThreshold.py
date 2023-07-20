class Solution(object):
    def longestAlternatingSubarray(self, nums, threshold):
        result = 0
        for i in range(len(nums)):
            temp = 0
            if nums[i]%2 == 0 and nums[i] <= threshold:
                temp = 1
                for j in range(i, len(nums)):
                    if j == len(nums) - 1:
                        if nums[j] > threshold:
                            break
                        else:
                            temp = max(temp, j-i+1)
                            break
                    temp = max(temp, j-i+1)
                    if nums[j]%2 == nums[j+1]%2 or nums[j] > threshold or nums[j+1] > threshold:
                        break
            result = max(result, temp)
        return result
