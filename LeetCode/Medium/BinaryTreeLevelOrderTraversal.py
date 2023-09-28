# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if not root: return []
        l = []
        q = deque([root])
        while q:
            sub = []
            for i in range(len(q)):
                node = q.popleft()
                sub.append(node.val)
                if node.left: q.append(node.left)
                if node.right: q.append(node.right)
            l.append(sub)
        return l
