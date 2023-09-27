# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    final_res = False

    def isSameTree(self, p: TreeNode, q: TreeNode) -> bool:
        if not p and not q:
            return True
        if p and q and p.val == q.val:
            return self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)
        else:
            return False

    def dfs(self, node, sub):
        if (node == None):
            return
        new_res = self.isSameTree(node, sub)
        if new_res == True:
            self.final_res = True
        self.dfs(node.left, sub)
        self.dfs(node.right, sub)

    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        self.dfs(root, subRoot)
        return self.final_res
