#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;
 string decodeString(string s) {
        stack<int>countst;
        stack<string>stringst;
        string currString ="";
        int currNum = 0;
        for(char ch : s){
            if(isdigit(ch)){
                currNum=currNum*10+(ch-'0');
            }
            else if (ch=='['){
                countst.push(currNum);
                stringst.push(currString);

                currNum =0;
                currString = "";
            }
            else if(ch==']'){
                int repeatcnt = countst.top();
                countst.pop();

                string prevString =  stringst.top();
                stringst.pop();

                string temp = "";
                for(int i=0; i<repeatcnt; i++){
                    temp+=currString;
                } 
                currString=prevString+temp;
            }
            else{
                 currString+=ch;

            }
           
        }
        return currString;
        
    }
    int main(){
        string s = "3[a2[c]]";

    cout << decodeString(s);

    return 0;
    }