/*
You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. 
Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.

From Leetcode : https://leetcode.com/problems/richest-customer-wealth/
*/



int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int max = 0;
    for (int i = 0; i < accountsSize; i++) {
        int sum = 0;
        for (int j = 0; j < *accountsColSize; j++) {
            sum += accounts[i][j];
        }
        
        if (sum > max) {
            max = sum;
        }
    }
    
    return max;

}
