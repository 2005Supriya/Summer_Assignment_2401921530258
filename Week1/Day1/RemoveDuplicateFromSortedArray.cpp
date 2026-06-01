#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j;
        for(j=1; j<nums.size();j++){
            if(nums[j]!=nums[i]){
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
}
int main(){
   
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4};

    int k = removeDuplicates(nums);

    cout << "Number of unique elements: " << k << endl;
    cout << "Array after removing duplicates: ";

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
