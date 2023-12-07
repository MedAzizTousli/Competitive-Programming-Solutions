"""
# Definition for a Node.
class Node:
    def __init__(self, val = 0, neighbors = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []
"""

from typing import Optional
class Solution:
    def cloneGraph(self, node: Optional['Node']) -> Optional['Node']:
        if node == None: return None
        visited = set()
        st = [node]
        head = True
        build2 = None
        visited.add(node)
        mp = {}
        while st:
            currNode = st.pop()
            if currNode == None:
                continue
            currCopy = mp.get(currNode, Node(currNode.val, []))
            if head:
                build2 = currCopy
                head = False
                mp[currNode] = currCopy
            for neighbor in currNode.neighbors:
                if neighbor in visited:
                    currCopy.neighbors.append(mp[neighbor])
                else:
                    neighborCopy = Node(neighbor.val, [])
                    mp[neighbor] = neighborCopy
                    st.append(neighbor)
                    visited.add(neighbor)
                    currCopy.neighbors.append(mp[neighbor])
        return build2
