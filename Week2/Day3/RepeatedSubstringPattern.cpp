#include<iostream>
#include<vector>
using namespace std;
bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for(int l=n/2;l>=1; l--){
            if(n%l==0){
                int times = n/l;
                string substring = s.substr(0,l);
                string newstr = "";
                
                while(times--){
                    newstr += substring;
                }
                if(newstr==s){
                    return true;
                } 
            }   
        }
        return false;
         

    }
 int main() {
    string s;

    cout << "Enter string: ";
    cin >> s;

    if(repeatedSubstringPattern(s)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}   