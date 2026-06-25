#include <iostream>
#include<Climits>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
};

class Solution {
public:
    int solve(TreeNode* root, int &maxi){
        if(root==NULL){
            return 0;
        }
        
        int leftSum=solve(root->left,maxi);
        int rightSum=solve(root->right,maxi);

        // ignoring negative values
         leftSum = max(0,leftSum);
         rightSum=max(0,rightSum);

        //update max
        maxi=max(maxi,root->val+leftSum+rightSum);

        //returning one side
        return root->val + max(leftSum, rightSum);


    }
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        solve(root,maxi);
        return maxi;
        
    }
};