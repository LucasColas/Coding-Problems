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
        maxL_ = self.findMax(root.left, root.val)
        print(maxL_)
        minL_ = self.findMin(root.left, root.val)
        print(minL_)
        
    def findMax(self, Tree,max_):
        
        
        if Tree.val >= max_:
            max_ = Tree.val
            
        if Tree.right == None:
            return max_
            
        if Tree.right:
            return self.findMax(Tree.right, max_)
        
    def findMin(self, Tree, min_):
        #print(Tree.val, Tree.left)
        if Tree.val <= min_:
            min_ = Tree.val
        
        #print(Tree.left == None)
        if Tree.left == None:
            return min_
            
        if Tree.left:
            #print("in Tree left")
            return self.findMin(Tree.left, min_)
        
        
        
        
