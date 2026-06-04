#include<iostream>
using namespace std;

bool isPalindrome(string s) {
        int left =0;
        int right = s.size()-1;
        
        while(left<right){
            if(!isalnum(s[left])){
                left++; 
            }
            else if(!isalnum(s[right])){
                right--;
            }
           
            else{
                if(tolower(s[left])!=tolower(s[right])){
                return false;
                }
                left++;
                right--;

            }
            
        }
        return true;
    }
  int main(){
     string s = "A man, a plan, a canal: Panama";

    if (isPalindrome(s)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
  }  