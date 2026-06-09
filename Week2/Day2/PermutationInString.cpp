#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>firstfreq;
        unordered_map<char,int>windfreq;
        if(s1.size()>s2.size()){
            return false;
        }
        for(int i=0; i<s1.size(); i++){
            firstfreq[s1[i]]++;
        }
        int start =0;
        int end = s1.size();
        while(start<end){
            windfreq[s2[start]]++;
            start++;
        }
        if(firstfreq==windfreq){
            return true;
        }
        //slide the window
        start=0;
        while(end<s2.size()){
            windfreq[s2[start]]--;
            if(windfreq[s2[start]]==0){
                windfreq.erase(s2[start]);
            }
            windfreq[s2[end]]++;
            start++;
            end++;
            if(windfreq==firstfreq){
                return true;
            }
        }
        return false;
        
    }
   int main(){
    string s1 = "ab";
    string s2 = "eidbaooo";

    if (checkInclusion(s1, s2)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;

   } 