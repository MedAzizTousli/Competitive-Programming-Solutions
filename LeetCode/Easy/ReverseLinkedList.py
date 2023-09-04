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
