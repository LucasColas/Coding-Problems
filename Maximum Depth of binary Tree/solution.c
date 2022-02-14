/*

Given the root of a binary tree, return its maximum depth.

A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
From Leetcode : https://leetcode.com/problems/maximum-depth-of-binary-tree/

/*

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int maxDepth(struct TreeNode* root){
    if (root == NULL) {
        return 0;
    }
    
    int depth_left = maxDepth(root->left);
    int depth_right = maxDepth(root->right);
    
    return depth_left > depth_right ? depth_left+1 : depth_right+1;
    
    
    
    

}
