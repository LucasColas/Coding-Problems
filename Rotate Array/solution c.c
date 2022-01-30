/*

Given an array, rotate the array to the right by k steps, where k is non-negative.

From Leetcode : https://leetcode.com/problems/rotate-array/
*/

void reverse(int* nums, int i, int j) {
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

void rotate(int* nums, int numsSize, int k){
    
    k = k % numsSize;
    
    reverse(nums, 0, numsSize - k - 1);
    reverse(nums, numsSize - k, numsSize-1);
    reverse(nums, 0, numsSize - 1);

}
