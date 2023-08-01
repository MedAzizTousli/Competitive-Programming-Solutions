class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        l = []
        def generate(m, k, st, ch):
            if m == 1:
                l.append(ch+")")
                return None
            if st == []:
                st.append("(")
                generate(m-1, k+1, st, ch + "(")
            else:
                if k == n:
                    st.pop()
                    generate(m-1, k, st, ch + ")")
                else:
                    generate(m-1, k+1, st + ["("], ch + "(")
                    st.pop()
                    generate(m-1, k, st, ch + ")")
        generate(n*2-1, 1, ["("], "(")
        return l
