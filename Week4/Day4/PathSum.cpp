#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
};
class Solution {
public:
bool hasPathSum(TreeNode* root, int targetSum) {
        int rem;
        if(root==NULL){
            return false;
        }
        //leaf node
        rem=targetSum-root->val;
        if(root->left==NULL && root->right==NULL && rem==0){
            return true;
        }
        //non leaf node
        return hasPathSum(root->left, rem) || hasPathSum(root->right, rem);
        
    }
};