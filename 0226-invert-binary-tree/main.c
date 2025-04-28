// Leetcode Problem #0226 Invert Binary Tree
// https://leetcode.com/problems/invert-binary-tree/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* invertTree(struct TreeNode* root) {
    if( root == NULL  ){
        return NULL;
    }
    struct TreeNode* var;
    var = root->left;
    root->left = root->right;
    root->right = var;
    root->left = invertTree( root->left );
    root->right = invertTree( root->right );
    return root;
}