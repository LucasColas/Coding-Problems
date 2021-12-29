/*
Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.

from leetcode : https://leetcode.com/problems/middle-of-the-linked-list/

*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int len_head = 0;
        for(auto iter = head; iter; iter = iter -> next, len_head++);
        
        for(int i = 0; i < len_head/2; i++) {
            head = head -> next;
        }
        
        return head;
    }
};
