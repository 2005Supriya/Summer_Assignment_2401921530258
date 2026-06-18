#include <iostream>
#include <vector>
#include <stack>
using namespace std;
    
    vector<int> dailyTemperatures(vector<int>& temperatures) {
       
        int n = temperatures.size();
        vector<int>result(n);
        stack<int>st;
        for(int i=n-1; i>=0; i--){
            while(!st.empty()&& temperatures[i]>=temperatures[st.top()]){
                st.pop();
            }
            if(st.empty()){
                result[i] = 0;
            }
            else{
                result[i] = st.top()-i;
            }
            st.push(i);
        }
        return result;
        
    }
   int main() {
    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};

    vector<int> ans = dailyTemperatures(temperatures);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
} 