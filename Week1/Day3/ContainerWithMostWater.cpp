 #include<iostream>
 #include<vector>
 using namespace std;
 
 int maxArea(vector<int>& height) {
        
        int left = 0;
        int right = height.size()-1;
        int maxWater = 0;
        while(left<right){
            int width = right-left;
            int area = width * min(height[left], height[right]);
            maxWater= max(area,maxWater);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        
        }
        return maxWater;
    }
 int main(){
     vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << "Maximum Water: "
         << maxArea(height) << endl;

    return 0;
 }   