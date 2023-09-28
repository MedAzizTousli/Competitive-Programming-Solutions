# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:

    def dfs(self, node, p, q):
        if not node:
            return None
        if p.val == node.val:
            return p
        if q.val == node.val:
            return q
        if p.val > node.val and q.val > node.val:
            return self.dfs(node.right, p, q)
        if p.val < node.val and q.val < node.val:
            return self.dfs(node.left, p, q)
        return node

    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        return self.dfs(root, p, q)
