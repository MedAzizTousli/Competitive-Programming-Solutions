class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        nums.sort(reverse=True)
        s = OrderedDict.fromkeys(nums)
        sorted_unique = list(s)
        if len(sorted_unique) <= 2:
            return sorted_unique[0]
        else:
            return sorted_unique[2]
