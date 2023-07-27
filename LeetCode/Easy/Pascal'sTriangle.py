class Solution(object):
    def generate(self, numRows):
        l = [[1]]
        if numRows == 1:
            return l
        l.append([1,1])
        for i in range(2, numRows):
            temp = [1]
            for j in range(1,i):
                temp.append(l[i-1][j-1] + l[i-1][j])
            temp.append(1)
            l.append(temp)
        return l
