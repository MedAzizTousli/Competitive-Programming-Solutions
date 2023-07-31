class Solution:
    def minimizedStringLength(self, s: str) -> int:
        st = set()
        for i in s:
            st.add(i)
        return len(st)
