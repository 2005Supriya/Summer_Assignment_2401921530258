#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int>st;
        vector<int>left(n);
        vector<int>right(n);
        for(int i=0; i<n; i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
                right[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            right[st.top()]=n;
            st.pop();
        }

        for(int i=n-1; i>=0; i--){
            while(!st.empty()&&heights[st.top()]>heights[i]){
                left[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            left[st.top()]=-1;
            st.pop();
        }
        long long ans =0;
        for(int i=0; i<n; i++){
            ans = max(ans, 1LL*heights[i]*(right[i]-left[i]-1));
        }
        return ans;
    }
    int main() {
    vector<int> heights = {2, 1, 5, 6, 2, 3};

    cout << largestRectangleArea(heights) << endl;

    return 0;
}