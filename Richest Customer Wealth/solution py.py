"""
You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. 
Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.

From leetcode : https://leetcode.com/problems/richest-customer-wealth/
"""

class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        max_ = 0
        for i in range(len(accounts)):
            sum_ = 0
            for j in range(len(accounts[i])):
                sum_ += accounts[i][j]
                
            max_ = max(sum_, max_)
            
        
        return max_
            
        
