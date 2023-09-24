# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    res = 0

    def dfs(self, node, curr):
        if node == None:
            self.res = max(self.res, curr)
            return
        self.dfs(node.left, curr+1)
        self.dfs(node.right, curr+1)

    def maxDepth(self, root: Optional[TreeNode]) -> int:
        self.dfs(root, 0)
        return self.res
