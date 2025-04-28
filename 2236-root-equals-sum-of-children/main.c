// Leetcode Problem #2236 Root Equals Sum of Children
// https://leetcode.com/problems/root-equals-sum-of-children/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


  struct TreeNode {
        int val;
        struct TreeNode *left;
        struct TreeNode *right;
    };
 
bool checkTree(struct TreeNode* root) {
    if( ( root->left->val + root->right->val ) == root->val ){
        return true;
    } 
    return false;

}