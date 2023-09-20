# Definition for singly-linked list.
class ListNode:
    def __init__(self, keyy, val, prev = None, next = None):
        self.prev = prev
        self.keyy = keyy
        self.val = val
        self.next = next


class LRUCache:

    def __init__(self, capacity: int):
        self.capacity = capacity
        self.mp = {}
        self.head = ListNode(-1, -1)
        self.tail = ListNode(-1, -1)
        self.head.next = self.tail
        self.tail.prev = self.head


    def update(self, key):
        # Removal of element in the middle
        after = self.mp[key].next
        before = self.mp[key].prev
        before.next = after
        after.prev = before
        
        # Integration of element in the end
        before_tail = self.tail.prev
        before_tail.next = self.mp[key] 
        self.tail.prev = self.mp[key]
        
        # Update of Our Node
        self.mp[key].prev = before_tail
        self.mp[key].next = self.tail


    def get(self, key: int) -> int:
        if key in self.mp:
            self.update(key)
            return self.mp[key].val
        else:
            return -1


    def put(self, key: int, value: int) -> None:
        if key in self.mp:
            self.mp[key].val = value
            self.update(key)
        else:
            # Creation of element
            new = ListNode(
                keyy = key,
                val = value,
                prev = self.tail.prev,
                next = self.tail
            )
            self.mp[key] = new

            # Integration of element in the end
            self.tail.prev.next = new
            self.tail.prev = new

            if len(self.mp) > self.capacity:
                after_head = self.head.next
                self.head.next = after_head.next
                after_head.next.prev = self.head
                del self.mp[after_head.keyy]


# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)
