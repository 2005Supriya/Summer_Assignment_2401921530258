#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int solve(int x, int y, string tokens){
        for(int i=0; i<tokens.size(); i++){
            if(tokens[i]=='+'){
                return x+y;
            }
            else if(tokens[i]=='-'){
                return x-y;
            }
            else if(tokens[i]=='*'){
                return x*y;
            }
            
            return x/y;
        }
        return 0;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int ans;
        
        for(int i=0; i<tokens.size(); i++){
            if(tokens[i]=="+"||tokens[i]=="*"||tokens[i]=="-"||tokens[i]=="/"){
                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                st.pop();
                ans =solve(num2,num1,tokens[i]);
                st.push(ans);
                
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
    int main() {
    vector<string> tokens = {"2", "1", "+", "3", "*"};

    cout << evalRPN(tokens) << endl;

    return 0;
}