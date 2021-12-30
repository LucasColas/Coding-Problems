/*
Given a positive integer k, you need to find the length of the smallest positive integer n such that n is divisible by k, and n only contains the digit 1.

Return the length of n. If there is no such n, return -1.

Note: n may not fit in a 64-bit signed integer.

From Leetcode : https://leetcode.com/problems/smallest-integer-divisible-by-k/
*/

class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if (k%2 == 0 || k%5==0) {
            return -1;
        }
        unsigned long n = 1;
        unsigned long len_n = 1;
        while (n%k != 0) {
            n = (n*10+1)%k;
            len_n += 1;
        }
        
        return len_n;
    }
};
