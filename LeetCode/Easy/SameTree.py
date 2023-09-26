# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    res = True

    def dfs(self, p, q):
        if p == None and q == None:
            return
        if (p == None and q != None) or (q == None and p != None):
            self.res = False
            return
        if p.val != q.val:
            self.res = False
        self.dfs(p.right, q.right)
        self.dfs(p.left, q.left)
        

    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        self.dfs(p, q)
        return self.res
