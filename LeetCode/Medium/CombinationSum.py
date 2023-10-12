class Solution:
    target = 0
    nums = []
    st = set()

    def dfs(self, i, som, t):
        if som > self.target:
            return
        t = t+(self.nums[i],)
        som += self.nums[i]
        if som == self.target:
            t = tuple(sorted(t))
            self.st.add(t)
        for j in range(i, len(self.nums)):
            self.dfs(j, som, t)

    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        self.st = set()
        candidates.sort(reverse=True)
        self.nums = candidates
        self.target = target
        for i in range(len(candidates)):
            if candidates[i] <= target:
                self.dfs(i, 0, ())
        return self.st
