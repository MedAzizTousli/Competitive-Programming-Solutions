class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        l = []
        n = len(position)
        for i in range(n):
            l.append((position[i], speed[i]))
        l.sort(reverse=True)
        test = []
        for i in range(n):
            rem = (target-l[i][0])/l[i][1]
            test.append(rem)
        st = []
        res = 0
        print(test)
        for i in test:
            if st != []:
                if i > st[0]:
                    res += 1
                    st = [i]
                else:
                    st.append(i)
            else:
                st.append(i)
        if st != []:
            res += 1
        return res
