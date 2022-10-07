"""

You are given two strings s and t.

String t is generated by random shuffling string s and then add one more letter at a random position.

Return the letter that was added to t.
From Leetcode : https://leetcode.com/problems/find-the-difference/

"""
class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        for c in t:
            #print(c)
            if s.count(c) != t.count(c): #if the frequence is different then that letter was added
                return c
            
            