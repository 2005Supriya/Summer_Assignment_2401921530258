#include<iostream>
#include<vector>
using namespace std;
 void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size()-1;
        while(start<end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
       
    }
  int main(){
    vector<char> s = {'h','e','l','l','o'};
    reverseString(s);
    for(int c=0; c<s.size(); c++){
        cout<<s[c]<<" ";

    }
    cout<<endl;
    return 0;
  }  