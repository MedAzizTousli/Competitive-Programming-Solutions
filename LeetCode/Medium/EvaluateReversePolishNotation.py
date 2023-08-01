class Solution:
    def oper(self, op, y, z):
        if op == '+':
            return int(y) + int(z)
        if op == '*':
            return int(y) * int(z)
        if op == '/':
            return trunc(int(y)/int(z))
        if op == '-':
            return int(y) - int(z)

    def evalRPN(self, tokens: List[str]) -> int:
        op = ['+', '*', '-', '/']
        res = 0
        st = []
        for i in tokens:
            st.append(i)
            x = st[-1]
            if x in op:
                x = st.pop()
                y = st.pop()
                z = st.pop()
                res = self.oper(x,z,y)
                st.append(str(res))
        return int(st[-1])
