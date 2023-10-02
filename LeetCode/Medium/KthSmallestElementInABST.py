# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    
    res = 0
    count = 0

    def dfs(self, node, k):
        if not node:
            return None
        self.dfs(node.left, k)
        self.count += 1
        if self.count == k:
            self.res = node.val
        return self.dfs(node.right, k)

    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        self.dfs(root, k)
        return self.res
