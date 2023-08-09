class Solution(object):
    def replaceElements(self, arr):
        mx = arr[len(arr)-1]
        for i in range(len(arr)-2, -1, -1):
            inter = arr[i]
            arr[i] = mx
            mx = max(mx, inter)
        arr[len(arr)-1] = -1
        return arr
