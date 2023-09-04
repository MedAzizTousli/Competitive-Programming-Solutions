# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, current1: Optional[ListNode], current2: Optional[ListNode]) -> Optional[ListNode]:
        res = ListNode()
        head = res #Important
        while current1 and current2:
            if current1.val < current2.val:
                res.next = current1
                current1 = current1.next
            else:
                res.next = current2
                current2 = current2.next
            res = res.next #Important
        if current1:
            res.next = current1
        if current2:
            res.next = current2
        return head.next
