# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        current = head
        result = []
        count = 0
        length = self.countElements(head)
        even = (length%2==0) 
        while current != None:
            count += 1
            if count > length/2:
                return current
            #     result.append(current.val)
            current = current.next
        
    def countElements(self, head):
        current = head
        count = 0
        while current != None:
            current = current.next
            count += 1
        return count
