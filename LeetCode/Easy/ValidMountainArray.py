class Solution:
    def validMountainArray(self, arr: List[int]) -> bool:
        valid = True
        if len(arr) < 3:
            return False
        mx = arr.index(max(arr))
        if mx == len(arr)-1 or mx == 0:
            return False
        arr.append(-1)
        for i in range(len(arr)-1):
            if i == mx:
                if arr[i] == arr[i+1]:
                    valid = False
            if i < mx:
                if arr[i] >= arr[i+1]:
                    valid = False
            if i > mx:
                if arr[i] <= arr[i+1]:
                    valid = False
        return valid
