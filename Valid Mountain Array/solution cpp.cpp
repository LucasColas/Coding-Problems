/*

Given an array of integers arr, return true if and only if it is a valid mountain array.

Recall that arr is a mountain array if and only if:

    arr.length >= 3
    There exists some i with 0 < i < arr.length - 1 such that:
        arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
        arr[i] > arr[i + 1] > ... > arr[arr.length - 1]

From Leetcode : https://leetcode.com/problems/valid-mountain-array/

*/

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if (arr.size() < 3) {
            return false;
        }
        
        int i = 0;
        bool increase = false;
        bool decrease = false;
        while (i < arr.size() && (arr[i] < arr[i+1])) {
            i++;
            increase = true;
            if (i == (arr.size()-1)) {
                break;
            }
        }
        
        
        while (i < arr.size() && (arr[i] > arr[i+1])) {
            i++;
            //cout << i << endl;
            decrease = true;
            
            if (i == (arr.size()-1)) {
                break;
            }
        }
    
        
        if ((i == (arr.size()-1))  && increase && decrease) {
            return true;
        }
        
        return false;
        
    }
};
