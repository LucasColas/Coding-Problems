"""
Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.

From leetcode: https://leetcode.com/problems/middle-of-the-linked-list/

"""

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        iteration = head
        len_head = 0
        while iteration:
            iteration = iteration.next
            len_head += 1
            
        for i in range(len_head//2):
            #print(head.next)
            head = head.next
            
        return head
                
        
        
            
        
