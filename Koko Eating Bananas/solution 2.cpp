/*
Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return the minimum integer k such that she can eat all the bananas within h hours.

Solution : https://leetcode.com/problems/koko-eating-bananas/
*/



class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {    
        
        int speed = 1;
        
        while (true) {
           
            int hours = 0;

            // Iterate over the piles and calculate hourSpent.
            // We increase the hourSpent by ceil(pile / speed)
            for (int i = 0; i < piles.size(); i++) {
                hours += piles[i] / speed + (piles[i] % speed != 0);
                
                if (hours > h) {
                    break;
                }
            }


            if (hours <= h) {
                return speed;
            } else {
                speed += 1;
            }            
        }
    }
};
