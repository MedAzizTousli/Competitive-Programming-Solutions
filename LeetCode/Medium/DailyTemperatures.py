class Solution:
    def dailyTemperatures(self, T: List[int]) -> List[int]:
        res = [0] * len(T)
        stack = []
        for i in range(len(T)):
            while stack != [] and T[i] > stack[-1][1]:
                x = stack.pop()
                x[2] += 1
                res[x[0]] = x[2]
                if stack != []:
                    stack[-1][2] += x[2]
            stack.append([i, T[i], 0])  
        return res
