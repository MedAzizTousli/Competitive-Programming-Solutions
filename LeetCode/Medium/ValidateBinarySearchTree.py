# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:

    l = []

    def dfs(self, node):
        if not node:
            return None
        self.dfs(node.left)
        self.l.append(node.val)
        return self.dfs(node.right)

    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        self.l = []
        self.dfs(root)
        return sorted(set(self.l)) == self.l
