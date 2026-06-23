#include <iostream>
#include <algorithm>
#include<vector>
#include<queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
};
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        //optimised solution
        queue<TreeNode*>q;
        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int>level;
            for(int i=0; i<size; i++){
                TreeNode*temp=q.front();
                q.pop();

                level.push_back(temp->val);

                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }

            }
            ans.push_back(level);

        }
        return ans;
        
        
    }
};