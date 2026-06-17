#include<iostream>
#include<vector>
using namespace std;
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        bool found;
        vector<int>ans;
        int i=0;
        while(i<nums1.size()){
            found = false;
            for(int j=0; j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    j= j+1;
                    while(j<nums2.size()){
                        if(nums2[j]>nums1[i]){
                            ans.push_back(nums2[j]);
                            found = true;
                            break;
                        }
                        j++;
                    }
                }
                if(found==true){
                    break;
                }
               
            }
            if(found == false){
                ans.push_back(-1);

            }
            
            i++;
        }
        return ans;
        
    }
 
    int main() {
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};

    vector<int> ans = nextGreaterElement(nums1, nums2);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}
  