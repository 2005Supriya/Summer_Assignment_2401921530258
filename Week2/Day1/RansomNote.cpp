#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int>freq;
        for(int i=0; i<magazine.size(); i++){
            freq[magazine[i]]++;
        }
        for(int i=0; i<ransomNote.size(); i++){
            freq[ransomNote[i]]--;
            if(freq[ransomNote[i]]<0){
                return false;
            }
            
        }
        return true;
        
    }
 int main(){
     string ransomNote, magazine;

    cin >> ransomNote;
    cin >> magazine;

    if (canConstruct(ransomNote, magazine)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
 }   