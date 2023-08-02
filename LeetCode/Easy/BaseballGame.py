class Solution:
    def calPoints(self, operations: List[str]) -> int:
        res = 0
        stack = []
        for op in operations:
            if op == 'C':
                stack.pop()
            elif op == 'D':
                new = int(stack[-1])*2
                stack.append(str(new))
            elif op == '+':
                x = int(stack[-1])
                y = int(stack[-2])
                stack.append(str(x+y))
            else:
                stack.append(op)
        for i in stack:
            res += int(i)
        return res
