class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> index(2);
        for (int i = 0; i < nums.size(); i++) {
            bool found = false;
            for (int j = i+1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    
                    found = true;
                    index[0] = i;
                    index[1] = j;
                    break;
                }
                
            }
            if (found) break;
            
        }
        return index; 
    }
    
};
