class Solution:
    def findOrder(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        # dfs
        preMap = {i: [] for i in range(numCourses)}

        # map each course to : prereq list
        for crs, pre in prerequisites:
            preMap[crs].append(pre)

        visiting = set()
        st = set()
        res = []
        def dfs(crs):
            if crs in visiting:
                return False
            if crs in st:
                return True
            visiting.add(crs)
            for pre in preMap[crs]:
                if not dfs(pre):
                    return False
            visiting.remove(crs)
            st.add(crs)
            res.append(crs)
            return True

        for c in range(numCourses):
            if not dfs(c):
                return []
        return res
