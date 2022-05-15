/*

Given the root of a binary tree, return the sum of values of its deepest leaves. 
From Leetcode : https://leetcode.com/problems/deepest-leaves-sum/

*/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int goDeepest(struct TreeNode* root, int h, int h_max) {
    if (h == h_max) {
        if (root != NULL) {
            //printf("root Null : \n");
            return root->val;
        }
        else {
            return 0;
            
        } 
    }
    
    if (root != NULL) {
        //printf("goDeepest \n");
        //printf("val : %d\n", root->val);
        return goDeepest(root->left, h+1, h_max) + goDeepest(root->right, h+1, h_max);
    }
    
    return 0;
    
    
}

int height(struct TreeNode* root) {
    if (root == NULL) {
        return -1;
    }
    
    int left = height(root->left);
    int right = height(root->right);
    return left > right ? left+1 : right+1;
}

int deepestLeavesSum(struct TreeNode* root){
    int h_max = height(root);
    //printf("%d", h_max);
    return goDeepest(root, 1, h_max);
    
}

