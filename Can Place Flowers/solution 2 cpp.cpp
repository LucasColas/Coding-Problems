class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        /*
        if (flowerbed.size() == n) {
            return false;
        }
        */
        
        if (n == 0) {
            return true;
        }
        
        int m = 0;
        for (int i = 0; i < flowerbed.size(); i++) {
            if (flowerbed[i] == 1) {
                m++;
            }
        }
        
        int result = m+n;
        cout << result;
        
        if (flowerbed.size() % 2 == 0) {
            if (result <= flowerbed.size()/2) {
                return true;
            }
            
            return false;
        }
        
        else {
            if (result < (flowerbed.size()/2 + 1)) {
                return true;
            }
            return false;
        }
        
    }
};
