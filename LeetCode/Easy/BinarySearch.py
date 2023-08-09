class Solution:
    def search(self, nums: List[int], target: int) -> int:
        low = 0
        high = len(nums)-1
        res = -1
        while low <= high:
            mid = (low+high)//2
            if nums[mid] == target:
                res = mid
                break
            elif nums[mid] > target:
                high = mid - 1
            else:
                low = mid + 1
        return res
