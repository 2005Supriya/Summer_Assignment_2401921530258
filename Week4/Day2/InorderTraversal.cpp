#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
};
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        //base case
        if(root==NULL){
            return ans;
        }
        
        vector<int>left=inorderTraversal(root->left);
        vector<int>right=inorderTraversal(root->right);

        //add answer of left in vector ans
        ans.insert(ans.end(),left.begin(),left.end());
        //adding root
        ans.push_back(root->val);
        //add answer of right in vector ans
        ans.insert(ans.end(),right.begin(),right.end());

        return ans;
    }
};