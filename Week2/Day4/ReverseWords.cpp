#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;
 string reverseWords(string s) {
        stack<char>st;
        string rev = "";
        int i =0;

        while(i<s.size()){
            if(s[i]!=' '){
                st.push(s[i]);
            }
            else{
                while(!st.empty()){
                    rev+=st.top();
                    st.pop();
                }
                rev+=' ';
            } 
            i++;            
        }
        while(!st.empty()){
            rev+=st.top();
            st.pop();
        }
       
        
        return rev;

        
    }

int main(){
    string s = "Let's take LeetCode contest";

    cout << reverseWords(s);

    return 0;
}