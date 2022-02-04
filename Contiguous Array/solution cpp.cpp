/*

Given a binary array nums, return the maximum length of a contiguous subarray with an equal number of 0 and 1.
From Leetcode : https://leetcode.com/problems/contiguous-array/

*/

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int count = 0;
        int max_len = 0;
        unordered_map<int,int> hashmap;
        
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                count--;
            }
            
            else {
                count++;
            }
            
            if (count == 0) {
                max_len = i+1;
            }
            
            if (hashmap.find(count) != hashmap.end()) {
                max_len = max(max_len, i-hashmap[count]);
            }
            
            else {
                hashmap[count] = i;
            }
            
            
        }
        
        return max_len;
    }
};
