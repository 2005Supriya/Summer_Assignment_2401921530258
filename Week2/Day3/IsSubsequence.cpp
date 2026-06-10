#include<iostream>
#include<vector>
using namespace std;
bool isSubsequence(string s, string t) {
        int j=0;
        for(int i=0; i<t.size(); i++){
            if(s[j]==t[i]){
                j++;
            }
        }
        if(j==s.size()){
            return true;
        }
        return false;
    }
int main() {
    string s, t;

    cout << "Enter s: ";
    cin >> s;

    cout << "Enter t: ";
    cin >> t;

    if(isSubsequence(s, t)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}