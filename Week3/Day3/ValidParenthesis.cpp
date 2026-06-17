#include<iostream>
#include<stack>
using namespace std;
bool isValid(string s) {
       stack<char>st;
        char ch;
        int i;
      for( i=0; i<s.size(); i++){
         ch = s[i];
        if(ch=='('|| ch=='['||ch=='{'){
            st.push(ch);
        }
        else{ // if right parenthesis occurs
            if(st.empty()){
                return false;
            }
            char top = st.top();
            st.pop(); //because we are going to check with right parenthesis
            if(ch==')'&&top!='('||
               ch==']'&&top!='['||
               ch=='}'&&top!='{'){
                return false;
            }
        }

      }
      return st.empty();
       
  }
  int main(){
    string s = "()[]{}";

    if (isValid(s)) {
        cout << "true";
    }
    else {
        cout << "false";
    }

    return 0;

  }
 