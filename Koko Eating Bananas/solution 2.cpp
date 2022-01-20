
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {    
        
        int speed = 1;
        bool not_found = true;
        
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
