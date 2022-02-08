/*
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

From Leetcode : https://leetcode.com/problems/add-digits/submissions/

*/

class Solution {
public:
    int addDigits(int num) {
        if (num < 10) {
            return num; 
        }
        
        
        
        while (true) {
            vector<int> array;
            while (num > 9) {
                array.push_back(num%10);
                num = num/10;
            }
            
            array.push_back(num);
            int sum = 0;
            for (int i = 0; i < array.size(); i++) {
                sum += array[i];
            }
            
            if (sum < 10) {
                return sum;
            } 
            
            else {
                num = sum;
            }
        } 
        
        
        
    }
};
