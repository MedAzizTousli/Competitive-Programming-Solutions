# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:

    res = 0

    def dfs(self, node, maxi):
        if not node:
            return
        if maxi <= node.val:
            self.res += 1
            self.dfs(node.left, node.val)
            self.dfs(node.right, node.val)
        else:
            self.dfs(node.left, maxi)
            self.dfs(node.right, maxi)

    def goodNodes(self, root: TreeNode) -> int:
        self.dfs(root, root.val)
        return self.res
