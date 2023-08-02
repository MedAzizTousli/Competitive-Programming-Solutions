class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        inter = ""
        res = ""
        stack = []
        for i in s:
            if i == "(":
                stack.append(i)
                inter += "("
            else:
                stack.pop()
                inter += ")"
            if stack == []:
                res += inter[1:len(inter)-1]
                inter = ""
        return res
