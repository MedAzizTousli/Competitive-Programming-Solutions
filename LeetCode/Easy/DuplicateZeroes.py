class Solution:
    def duplicateZeros(self, arr: List[int]) -> None:
        l = []
        for i in arr:
            if i == 0:
                l.append(0)
            l.append(i)
        for i in range(len(arr)):
            arr[i] = l[i]
