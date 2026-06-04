#include<iostream>
#include<vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int pre=0;
        int i;
        char ch;
        
        while(pre<strs[0].size()){
            ch = strs[0][pre];
           for( i=1; i<strs.size(); i++){
                if(pre>=strs[i].size()){
                    return ans;
                }
                if(strs[i][pre]!=ch){
                    return ans;
                    
                }
            }
            ans.push_back(ch);
            pre++;

          }
           
        
        return ans;  
        
    }
 int main(){
    vector<string>strs = {"flower","flow","flight"};
    string ans = longestCommonPrefix(strs);
    cout<<ans<<endl;
    return 0;

 }   