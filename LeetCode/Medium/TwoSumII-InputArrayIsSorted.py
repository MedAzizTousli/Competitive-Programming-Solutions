class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        i, j = 0, len(numbers)-1
        res = [0, 0]
        while i < j:
            test = target - numbers[i]
            if test < numbers[j]:
                j -= 1
            elif test > numbers[j]:
                i += 1
            else:
                res = [i+1, j+1]
                break
        return res
