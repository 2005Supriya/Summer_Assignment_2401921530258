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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>result;
        if(root==NULL){
            return result;
        }
        queue<TreeNode*>q;
        q.push(root);

        bool leftToRight=true;//flag

        while(!q.empty()){
            int size=q.size();
            vector<int>ans(size);

            for(int i=0; i<size; i++){
                TreeNode*temp = q.front();
                q.pop();
                
                //calculating index for array to place value of each level
                int index=leftToRight?i:size-i-1;

                ans[index]=temp->val;

                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            result.push_back(ans);
            leftToRight=!leftToRight; // flag ko 0 t o1 or 1 to 0
        }
        return result;
        
    }
};