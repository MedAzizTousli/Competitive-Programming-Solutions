class Solution:

    nums = tuple()
    st = set()

    def dfs(self, i, l):
        if i >= len(self.nums):
            return
        l = tuple(sorted(l+(self.nums[i],)))
        self.st.add(l)
        for j in range(i+1, len(self.nums)):
            self.dfs(j, l)
    
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        self.st = set()
        self.st.add(())
        self.nums = nums
        for i in range(len(nums)):
            self.dfs(i, ())
        return self.st
