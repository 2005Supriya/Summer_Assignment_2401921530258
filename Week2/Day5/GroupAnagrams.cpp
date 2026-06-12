#include<iostream>
 #include<vector>
 #include<string>
 #include<unordered_map>
 #include<algorithm>
 using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(int i=0; i<strs.size(); i++){
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto it: mp){
            ans.push_back(it.second);

        }
        return ans;
        
    }
 int main(){
     vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    vector<vector<string>> result = groupAnagrams(strs);

    cout << "Grouped Anagrams:" << endl;

    for (auto group : result) {
        cout << "[ ";
        for (auto word : group) {
            cout << word << " ";
        }
        cout << "]" << endl;
    }

    return 0;
 }   