# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if (head == None or head.next == None):
            return head
        
        dummyNode = ListNode()
        prev = dummyNode
        curr = head
        
        while curr != None and curr.next != None:
            prev.next = curr.next
            curr.next = prev.next.next
            prev.next.next = curr
            
            prev = curr
            curr = curr.next
            
        return dummyNode.next
        
        
