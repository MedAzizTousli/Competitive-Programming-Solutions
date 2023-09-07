# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def get_length(self, head):
        length = 0
        current = head
        while current is not None:
            length += 1
            current = current.next
        return length

    def removeNthFromEnd(self, current: Optional[ListNode], n: int) -> Optional[ListNode]:
        length = self.get_length(current)
        reach = length - n
        i = 1
        res = ListNode() #Learn this technique
        head = res
        while i <= reach:
            res.next = current
            current = current.next
            res = res.next
            i += 1
        res.next = current.next
        return head.next
