/*

Given two integer arrays pushed and popped each with distinct values, 
return true if this could have been the result of a sequence of push and pop operations on an initially empty stack, or false otherwise.
From leetcode : https://leetcode.com/problems/validate-stack-sequences/

*/

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i = 0;
        vector<int>stack;
        
        for (int num : pushed) {
            stack.push_back(num);
            
            while (stack.size() != 0 && stack.back() == popped[i]) {
                stack.pop_back();
                i++;
            }
        }
        
        return stack.size() == 0;
        
    }
        
       
};
