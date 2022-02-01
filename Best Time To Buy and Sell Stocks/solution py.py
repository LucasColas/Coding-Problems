"""

You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

From Leetcode : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

"""

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min_price = float("inf")
        max_profit = 0
        
        for price in prices:
            min_price = min(min_price, price)
            profit = price-min_price
            max_profit = max(profit, max_profit)
            
        return max_profit
        
