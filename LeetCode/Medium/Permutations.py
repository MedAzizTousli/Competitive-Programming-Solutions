class Solution:
    nums = list()
    st = set()

    def dfs(self, i, l, t):
        if l == []:
            self.st.add(t)
            return
        for j in range(0, len(l)):
            self.dfs(j, l[:j] + l[j+1:], t+(l[j],))

    def permute(self, nums: List[int]) -> List[List[int]]:

        self.st = set()
        self.nums = nums
        for i in range(len(nums)):
            self.dfs(i, nums, ())

        return self.st
