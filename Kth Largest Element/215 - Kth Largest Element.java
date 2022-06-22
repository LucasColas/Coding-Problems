/*

Given an integer array nums and an integer k, return the kth largest element in the array.

Note that it is the kth largest element in the sorted order, not the kth distinct element.
From Leetcode : https://leetcode.com/problems/kth-largest-element-in-an-array/

*/

class Solution {
    public int findKthLargest(int[] nums, int k) {
        Arrays.sort(nums);
        if (nums.length>=k) {
            return nums[nums.length-k];
        }
        
        return 0;
        
        
    }
}
