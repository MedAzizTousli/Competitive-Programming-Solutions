"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""

class Solution:
    def indexList(self, head):
        curr = head
        mp = {}
        i = 0
        while curr:
            mp[curr] = i
            i += 1
            curr = curr.next
        return mp

    def copyRandomList(self, head):
        if head == None:
            return None

        curr = head
        
        mp = self.indexList(curr)

        new_mp = {}

        # Treat val
        for i in range(len(mp)):
            new = Node(curr.val, None, None)
            curr = curr.next
            new_mp[i] = new

        # Treat next
        for key in new_mp:
            if key == len(mp)-1:
                new_mp[key].next = None
            else:
                new_mp[key].next = new_mp[key+1]
        
        # Treat random
        curr = head
        i = 0
        while curr:
            obj = curr.random
            if obj == None:
                new_mp[i].random = None
            else:
                idx = mp[obj]
                obj2 = new_mp[idx]
                new_mp[i].random = obj2

            # Advance both
            i += 1
            curr = curr.next
        return new_mp[0]
