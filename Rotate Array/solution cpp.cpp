
/*
Given an array, rotate the array to the right by k steps, where k is non-negative.
  
From Leetcode : https://leetcode.com/problems/rotate-array/
*/


class Solution {
public:
    void reverse(vector<int> &nums, int i, int j) {
    int le = i;
    int ri = j;
    
    while (le < ri) {
        int temp = nums[le];
        nums[le] = nums[ri];
        nums[ri] = temp;
        
        le++;
        ri--;
     }
    }

    void rotate(vector<int>& nums, int k){
        
        k = k % nums.size();
        reverse(nums, 0, nums.size() - k - 1);
        reverse(nums, nums.size() - k, nums.size()-1);
        reverse(nums, 0, nums.size() - 1);

    }
};
