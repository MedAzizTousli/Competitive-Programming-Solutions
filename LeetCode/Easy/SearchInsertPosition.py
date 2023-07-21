class Solution:
    def searchInsert(self, nums, target):
        low = 0
        high = len(nums)-1
        # if target > nums[high]:
        #     return high+1 
        # if target < nums[low]:
        #     return 0
        result = -1
        while low <= high:
            mid = (high+low)//2
            if target > nums[mid]:
                low = mid+1
            elif target < nums[mid]:
                high = mid-1
            else:
                result = mid
                break
        if result == -1:
            if target > nums[mid]:
                result = mid + 1
            else:
                result = mid
        return result
