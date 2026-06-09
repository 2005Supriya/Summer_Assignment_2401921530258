#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>Pfreq;
        unordered_map<char,int>Wfreq;
        vector<int>ans;
        if(p.size()>s.size()){
            return {};
        }
        for(int i=0; i<p.size(); i++){
            Pfreq[p[i]]++;
        }
        int start =0;
        int end = p.size();
        while(start<end){
            Wfreq[s[start]]++;
            start++;
        }
        if(Pfreq==Wfreq){
            ans.push_back(0);
        }
         start =0;
        while(end<s.size()){
            Wfreq[s[start]]--;
            if(Wfreq[s[start]]==0){
                Wfreq.erase(s[start]);
            }
            Wfreq[s[end]]++;
            start++;
            end++;
            if(Wfreq==Pfreq){
                ans.push_back(start);
            }
        }
        return ans;
        
    }
int main(){
    string s = "cbaebabacd";
    string p = "abc";

    vector<int> ans = findAnagrams(s, p);

    cout << "Indices: ";
    for(int i=0; i<ans.size(); i++){
        cout<<i<<" ";
       
    }
    return 0;
}