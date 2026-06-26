#include <iostream>
#include<vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};
class Solution {
public:
    int find(vector<int>&in,int target,int start,int end){
        for(int i=start;i<=end;i++){
            if(in[i]==target){
                return i;
            }  
        }
        return -1;
    }
    TreeNode* Tree(vector<int>&in, vector<int>&pre, int Instart, int Inend, int index){
        if(Instart>Inend){
            return NULL;
        }
        TreeNode * root = new TreeNode(pre[index]);
        int pos = find(in,pre[index],Instart,Inend);
        //left
        root->left = Tree(in,pre,Instart,pos-1,index+1);
        //right
        root->right=Tree(in,pre,pos+1,Inend,index+(pos-Instart)+1);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        int index =0;

        return Tree(inorder,preorder,0,inorder.size()-1,index);
        
    }
};