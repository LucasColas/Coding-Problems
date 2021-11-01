class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        else {
            vector<int>num;
            
            while (x > 9) {
                num.push_back(x%10);
                x = x//10;
            }
            
            num.push_back(x);
            
            for (int i = 0; i < num.size(); i++) {
                if (num[i] != num[num.size()-1-i]) {
                    return false;
                }
            }
            
            return true;
        }
        
    }
};
