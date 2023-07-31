class Solution:
    def removeDuplicates(self, s: str) -> str:
        stack = []
        stack.append(s[0])
        for i in range(1, len(s)):
            if len(stack) == 0 or stack[-1] != s[i]:
                stack.append(s[i])
            else:
                stack.pop()
        return "".join(stack)
