#include<iostream>
#include<vector>
#include<string>
using namespace std;
void lpsFind(vector<int>&lps,string s){
        int pre=0; 
        int suf=1;
        while(suf<s.size()){
            if(s[pre]==s[suf]){
                lps[suf]=pre+1;
                pre++;
                suf++;
            }
            else{
                if(pre==0){
                    lps[suf]=0;
                    suf++;
                }
                else{
                    pre=lps[pre-1];
                }
            }
        }

    }
    int strStr(string haystack, string needle) {
        vector<int>lps(needle.size(),0);
        lpsFind(lps,needle);
        int first=0;
        int second=0;
        while(second<needle.size()&&first<haystack.size()){
            if(needle[second]==haystack[first]){
                second++;
                first++;
            }
            else{
                if(second==0){
                    first++;
                }
                else{
                    second=lps[second-1];
                }
            }
        }
        if(second==needle.size()){
            return first-second;
        }
        return -1;
        
    }
  int main() {
    string haystack, needle;

    cout << "Enter haystack: ";
    cin >> haystack;

    cout << "Enter needle: ";
    cin >> needle;

    int result = strStr(haystack, needle);

    cout << "Index = " << result << endl;

    return 0;
}  