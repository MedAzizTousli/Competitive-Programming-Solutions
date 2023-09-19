# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        def fill_missing(curr, carry):
            nonlocal curr3
            while curr:
                somme = curr.val + carry
                temp = somme % 10
                carry = somme // 10

                curr3.next = ListNode(temp)

                curr = curr.next
                curr3 = curr3.next
            return carry

        res = ListNode()
        curr1 = l1
        curr2 = l2
        curr3 = res
        carry = 0

        while curr1 and curr2:
            #Make calculations
            somme = curr1.val + curr2.val + carry
            temp = somme % 10
            carry = somme // 10
            
            #Update curr3
            curr3.next = ListNode(temp)

            #Advance all
            curr1 = curr1.next
            curr2 = curr2.next
            curr3 = curr3.next

        if curr1:
            carry = fill_missing(curr1, carry)
        if curr2:
            carry = fill_missing(curr2, carry)
        if carry != 0:
            curr3.next = ListNode(1, None)

        return res.next
