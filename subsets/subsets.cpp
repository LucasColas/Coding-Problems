//Given an integer array nums of unique elements, return all possible subsets (the power set).
//The solution set must not contain duplicate subsets. Return the solution in any order.
//from Leetcode : https://leetcode.com/problems/subsets/
//Note : this code was only ran on Leetcode.

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        int size = nums.size();
        int subsetNum = (1<<size);
        
        vector<vector<int> > allSubsets;
        
        for (int sub = 0; sub < subsetNum; sub++) {
            vector<int>subset;
            for (int i = 0; i < size; i++) {
                if ((sub & (1 <<i)) != 0) {
                    subset.push_back(nums[i]);
                }
            }
            allSubsets.push_back(subset);
        }
        
        return allSubsets;
    }
};
