"""
Given the root of a binary tree, find the maximum value v for which there exist different nodes a and b where v = |a.val - b.val| and a is an ancestor of b.

A node a is an ancestor of b if either: any child of a is equal to b or any child of a is an ancestor of b.
From Leetcode : https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/

"""
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxAncestorDiff(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0
        
        return self.findMinMax(root, root.val, root.val)
        
    def findMinMax(self, node, max_, min_):
        if not node:
            return max_ - min_
        
        max_ = max(max_, node.val)
        min_ = min(min_, node.val)
        
        left = self.findMinMax(node.left, max_, min_)
        right = self.findMinMax(node.right, max_, min_)
        return max(left, right)

        
        
        
