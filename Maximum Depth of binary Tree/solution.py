"""
Given the root of a binary tree, return its maximum depth.

A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
From Leetcode : https://leetcode.com/problems/maximum-depth-of-binary-tree/
"""

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if (not root):
            return 0
        
        depth_left = self.maxDepth(root.left)
        depth_right = self.maxDepth(root.right)
        
        return depth_left+1 if depth_left > depth_right else depth_right+1
        
