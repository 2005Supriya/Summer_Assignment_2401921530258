#include <iostream>
#include <algorithm>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
};

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL){
            return NULL;
        }
        if(root!=NULL){
            swap(root->left,root->right);
            invertTree(root->left);
            invertTree(root->right);

        }
        
        return root;
    }
};