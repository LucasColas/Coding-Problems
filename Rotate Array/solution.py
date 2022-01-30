"""
Given an array, rotate the array to the right by k steps, where k is non-negative.

From Leetcode : https://leetcode.com/problems/rotate-array/

"""

class Solution(object):
    def reverse(self, nums, i, j):
        le = i
        ri = j
        
        while le < ri:
            nums[le], nums[ri] = nums[ri], nums[le]
            le += 1
            ri -= 1
            
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        
        
        k = k % len(nums)
        
        self.reverse(nums, 0, len(nums)-k-1)
        self.reverse(nums, len(nums)-k, len(nums)-1)
        self.reverse(nums, 0, len(nums)-1)
        
