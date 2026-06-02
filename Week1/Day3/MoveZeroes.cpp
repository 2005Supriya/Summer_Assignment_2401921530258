#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
        int i;
        int j=-1;
        
        for(i=0; i<nums.size();i++){
            if(nums[i]==0){
                j = i;
                break;
            }

        }
        if(j==-1){
            return;
        }
        for(i=j+1; i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
 
        }
    }
 int main(){
    vector<int> nums = {0, 1, 0, 3, 12};

    moveZeroes(nums);

    cout << "Array after moving zeroes: ";
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    return 0;
 }   