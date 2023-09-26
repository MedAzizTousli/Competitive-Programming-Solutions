# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    res = 0

    def dfs(self, node):
        if node == None:
            return 0
        x = self.dfs(node.left)
        y = self.dfs(node.right)
        self.res = max(self.res, x+y)
        return 1 + max(x, y)

    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        self.dfs(root)
        return self.res
