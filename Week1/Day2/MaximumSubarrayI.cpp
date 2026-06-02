#include<iostream>
#include<vector>
using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
        int sum =0;
        int maxSum;
        for(int i=0; i<k; i++){
            sum = sum + nums[i];
        }
        maxSum = sum;
        int startIndex = 0;
        int endIndex = k;
        while(endIndex<nums.size()){
            sum = sum - nums[startIndex];
            startIndex++;
            sum = sum + nums[endIndex];
            endIndex++;

            maxSum = max(maxSum,sum);
        }
        return (double)maxSum/k;
        
    }
int main() {
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;

    cout << "Maximum Average = " << findMaxAverage(nums, k);

    return 0;
}    