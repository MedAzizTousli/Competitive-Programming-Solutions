class Solution(object):
    def matrixReshape(self, mat, r, c):
        n = len(mat[0])
        m = len(mat)
        if n*m != r*c:
            return mat
        l = []
        for line in mat:
            for i in line:
                l.append(i)
        res = []
        sub = []
        for i in range(len(l)):
            sub.append(l[i])
            if (i+1) % c == 0:
                print(sub)
                res.append(sub)
                sub = []
        return res
