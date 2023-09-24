# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head == None:
            return None
        curr = head
        prev = ListNode(curr.val, None)
        curr = curr.next
        node = prev
        while curr:
            node = ListNode(curr.val, prev)
            prev = node
            curr = curr.next
        return node

    def returnLength(self, curr):
        leng = 0
        while curr:
            leng += 1
            curr = curr.next
        return leng

    def returnMapping(self, curr, k):
        mp = {}
        i = 0
        while curr:
            if i%k == 0:
                mp[i//k] = curr
                if i != 0:
                    prev.next = None
            i += 1
            prev = curr
            curr = curr.next
        return mp

    def returnList(self, curr, mp, leng, k):
        l = []
        available = sorted(mp.keys())
        for j in available:
            if j == len(available)-1 and leng % k != 0:
                l.append(mp[j])
                break
            dummy = self.reverseList(mp[j])
            l.append(dummy)
        return l

    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        leng = self.returnLength(head)
        mp = self.returnMapping(head, k)
        l = self.returnList(head, mp, leng, k)

        res = l[0]
        curr = res
        i = 1
        while i < len(l):
            if curr.next == None:
                curr.next = l[i]
                i += 1
            curr = curr.next

        return res
