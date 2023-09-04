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

    def get_length(self, head):
        length = 0
        current = head
        while current is not None:
            length += 1
            current = current.next
        return length

    def reorderList(self, head: Optional[ListNode]) -> None:
        current1 = head
        current2 = self.reverseList(head)
        length = self.get_length(head)
        res = ListNode()
        final = res
        for i in range(length):
            if i%2 == 0:
                res.next = current1
                current1 = current1.next
            else:
                res.next = current2
                current2 = current2.next
            res = res.next
        res.next = None
