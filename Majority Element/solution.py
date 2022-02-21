"""
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
From Leetcode : https://leetcode.com/problems/majority-element/
"""

class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        freq = defaultdict(int)
        
        for num in nums:
            freq[num] += 1
            
        return max(freq.keys(), key=lambda x: freq[x])
        
