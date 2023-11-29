class Solution:
    def __init__(self):
        self.res = True

    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        mp = defaultdict(list)
        for couple in prerequisites:
            mp[couple[1]].append(couple[0])
        confirmed = set()
        def dfs(i, visited):
            if i in visited:
                self.res = False
                return
            if i in confirmed:
                return
            visited.add(i)
            for j in mp[i]:
                dfs(j, visited.copy())
                confirmed.add(j)
        for number in list(mp):
            visited = set()
            dfs(number, visited)
            if self.res == False:
                return False
        return self.res
