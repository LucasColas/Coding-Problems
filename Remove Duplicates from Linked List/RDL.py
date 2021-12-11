'''
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
From Leetcode : https://leetcode.com/problems/remove-duplicates-from-sorted-list/
'''

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        current_node = head
        while (current_node != None and current_node.next != None):
            if current_node.val == current_node.next.val:
                current_node.next = current_node.next.next
            else:
                current_node = current_node.next
        return head
