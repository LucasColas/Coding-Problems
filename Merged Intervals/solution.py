"""
Given an array of intervals where intervals[i] = [starti, endi], 
merge all overlapping intervals, and return an array of the non-overlapping 
intervals that cover all the intervals in the input.

From Leetcode : https://leetcode.com/problems/merge-intervals/
"""

from operator import itemgetter
class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        merged_intervals = []
        sorted_intervals = sorted(intervals, key=itemgetter(0))
        for i in range(len(sorted_intervals)):
            if len(merged_intervals) == 0 or merged_intervals[-1][1] < sorted_intervals[i][0]:
                merged_intervals.append(sorted_intervals[i])
                
            else:
                merged_intervals[-1][1] = max(merged_intervals[-1][1], sorted_intervals[i][1])
                
        return merged_intervals
        
