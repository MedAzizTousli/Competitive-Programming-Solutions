class Solution:
    def __init__(self):
        self.res = []

    def findItinerary(self, tickets: List[List[str]]) -> List[str]:
        mp = defaultdict(list)
        for i in tickets:
            mp[i[0]].append(i[1])
        for i in mp:
            mp[i].sort(reverse=True)

        def dfs(curr):
            st = mp[curr]
            while st != []:
                visit = st.pop()
                dfs(visit)
            self.res.append(curr)

        dfs("JFK")
        return reversed(self.res)
