/*
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, 
representing the number of elements in nums1 and nums2 respectively.

From Leetcode : https://leetcode.com/problems/merge-sorted-array/
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = m; i < nums1.size(); i++) {
            //cout << i;
            nums1[i] = nums2[i-m];
        }
        
        sort(nums1.begin(), nums1.end());
        
        
    }
};
