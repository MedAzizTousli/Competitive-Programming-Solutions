class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        l = []
        for i in nums1:
            res = i
            idx = nums2.index(i)
            for j in range(idx, len(nums2)):
                if nums2[j] > res:
                    res = nums2[j]
                    break
            if res == i:
                res = -1
            l.append(res)
        return l
