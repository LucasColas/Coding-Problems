"""
Given an array of points where points[i] = [xi, yi] represents a point on the 
X-Y plane and an integer k, return the k closest points to the origin (0, 0).

From Leetcode : https://leetcode.com/problems/k-closest-points-to-origin/

Runtime: 636 ms, faster than 89.31% of Python3 online submissions for K Closest Points to Origin.
Memory Usage: 19.6 MB, less than 96.12% of Python3 online submissions for K Closest Points to Origin.
"""

class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        points.sort(key=lambda x: x[0]**2 + x[1]**2)
        
        return points[:k]
