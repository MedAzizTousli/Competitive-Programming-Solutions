# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:

    res = True

    def dfs(self, node):
        if node == None:
            return 0
        x = self.dfs(node.left)
        y = self.dfs(node.right)
        if abs(x-y) > 1:
            self.res = False
        return 1 + max(x, y)

    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        self.dfs(root)
        return self.res
