 #include<iostream>
 #include<vector>
 #include<string>
 using namespace std;
 
 int compress(vector<char>& chars) {
        vector<char>ans;
        char curr = chars[0];
        int cnt = 0;
        int i=0;
        while(i<chars.size()){
            if(curr==chars[i]){
                cnt++;
            }
            else{
                ans.push_back(curr);
                if(cnt>1){
                    string num = to_string(cnt);
                    for(char ch:num){
                        ans.push_back(ch);

                    }
                }
                curr = chars[i];
                cnt=1;
            }
            i++; 
        }
        ans.push_back(curr);
        if(cnt>1){
            string num = to_string(cnt);
            for(char ch:num){
                ans.push_back(ch);

            }
             

        }
       //copy back to chars
        for(int i=0; i<ans.size(); i++){
            chars[i]=ans[i];

        } 
        return ans.size();
    }
 int main(){
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

    int len = compress(chars);

    cout << "Compressed Length: " << len << endl;
    cout << "Compressed Array: ";

    for (int i = 0; i < len; i++) {
        cout << chars[i] << " ";
    }

    return 0;
 }   