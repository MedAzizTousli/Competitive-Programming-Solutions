class Solution(object):
    def twoOutOfThree(self, nums1, nums2, nums3):
        mp = {}
        nums1 = set(nums1)
        nums2 = set(nums2)
        nums3 = set(nums3)
        for i in nums1:
            mp[i] = mp.get(i, 0) + 1
        for i in nums2:
            mp[i] = mp.get(i, 0) + 1
        for i in nums3:
            mp[i] = mp.get(i, 0) + 1
        l = []
        for i in mp:
            if mp[i] >= 2:
                l.append(i)
        return l
