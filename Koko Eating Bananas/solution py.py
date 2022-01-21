"""
Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return the minimum integer k such that she can eat all the bananas within h hours.

From leetcode : https://leetcode.com/problems/koko-eating-bananas/

"""

class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        low = 1
        high = max(piles)
        
        while low < high:
            middle = (low+high) // 2
            hours = 0
            
            for pile in piles:
                hours += math.ceil(pile/middle)
                
            if hours <= h:
                high = middle
                
            else:
                low = middle+1
                
        return high
                
        
        
