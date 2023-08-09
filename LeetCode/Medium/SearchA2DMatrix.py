class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        nb_lines = len(matrix)
        nb_columns = len(matrix[0])
        idx = -1
        for i in range(nb_lines):
            if matrix[i][nb_columns-1] >= target:
                idx = i
                break
        low = 0
        high = nb_columns-1
        while low <= high:
            mid = (low+high)//2
            if matrix[idx][mid] == target:
                return True
                break
            elif matrix[idx][mid] > target:
                high = mid - 1
            else:
                low = mid + 1
        return False
