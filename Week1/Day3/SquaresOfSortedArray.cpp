#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        int square;
        for(int i=0; i<nums.size(); i++){
            square = nums[i]*nums[i];
            ans.push_back(square);
        }
        sort(ans.begin(), ans.end());
        return ans;
        
    }
 int main(){
    vector<int>nums = {-4,-1,0,3,10};
    vector<int> ans = sortedSquares(nums);
    for(int i= 0;i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
 }   