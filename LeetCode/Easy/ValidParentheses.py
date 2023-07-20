class Solution:
    def isValid(self, s: str) -> bool:
        valid = True
        stack = []
        for char in s:
            if (char == '[' or char == '(' or char == '{'):
                stack.append(char)
            else:
                if (len(stack) == 0):
                    valid = False
                else:  
                    top = stack.pop()
                    if top == '(' and char != ')':
                        valid = False
                    elif top == '[' and char != ']':
                        valid = False
                    elif top == '{' and char != '}':
                        valid = False
        if len(stack) != 0:
            valid = False
        return valid
