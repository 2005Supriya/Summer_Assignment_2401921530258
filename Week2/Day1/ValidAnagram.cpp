#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
 bool isAnagram(string s, string t) {
        unordered_map<char, int>freq;
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0; i<s.size();i++){
            freq[s[i]]++;
        }
        for(int i=0; i<t.size();i++){
            freq[t[i]]--;
            if(freq[t[i]]<0){
                return false;
            }
        }
        return true;
       
        
    }
int main(){
    string s, t;

    cin >> s;
    cin >> t;

    if (isAnagram(s, t)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;

}