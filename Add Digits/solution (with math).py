"""

Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
From Leetcode : https://leetcode.com/problems/add-digits/submissions/

"""


class Solution:
    def addDigits(self, num: int) -> int:
        if (num < 9):
            return num
        
        if num%9 == 0:
            return 9
        
        else:
            return num%9
        
