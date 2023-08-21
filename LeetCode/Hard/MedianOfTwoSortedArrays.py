class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        A, B = nums1, nums2
        if len(nums1) > len(nums2):
            nums1, nums2 = nums2, nums1
        total = len(nums1) + len(nums2)
        half = total // 2
        l, r = 0, len(nums1)-1
        while True:
            i = (l+r)//2 # nums1
            j = half-i-2 # nums2

            Aleft  = nums1[i]    if i >= 0           else float("-infinity")
            Aright = nums1[i+1]  if i+1 < len(nums1) else float("infinity")
            Bleft  = nums2[j]    if j >= 0           else float("-infinity")
            Bright = nums2[j+1]  if j+1 < len(nums2) else float("infinity")

            if Aleft <= Bright and Bleft <= Aright:
                if total%2 == 0:
                    return (max(Aleft, Bleft) + min(Aright, Bright))/2
                else:
                    return min(Aright, Bright)

            elif Aleft > Bright:
                r = i - 1
            else:
                l = i + 1
