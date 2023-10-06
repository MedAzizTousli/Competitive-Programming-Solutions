# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    res = float('-inf')

    def dfs(self, node, curr):
        if node == None:
            return 0

        x = self.dfs(node.left, curr+node.val)
        y = self.dfs(node.right, curr+node.val)

        z = max(node.val, x+node.val, y+node.val, x+y+node.val)
        self.res = max(self.res, z)
        return max(node.val, x+node.val, y+node.val)

    def maxPathSum(self, root: Optional[TreeNode]) -> int:
        self.dfs(root, root.val)
        return self.res
