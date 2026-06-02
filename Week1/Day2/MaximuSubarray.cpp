#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        long long sum = 0;
        
        for(int i=0; i<nums.size(); i++){
            sum = sum + nums[i];
            if(sum>maxi){
                maxi = sum;
            }
            if(sum<0){
                sum=0;
            }
           
        }
        if(nums.size()==0){
            maxi=0;
        }
        return maxi;
        
    }
int main(){
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "Maximum Subarray Sum = " << maxSubArray(nums);

    return 0;
}