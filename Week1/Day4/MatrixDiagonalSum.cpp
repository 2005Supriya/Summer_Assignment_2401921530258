#include<iostream>
#include<vector>
using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
        int n= mat.size();
        int ans;
        int diag1 =0;
        int diag2=0;
        for(int i=0; i<n; i++){
            diag1+=mat[i][i];
            diag2+=mat[i][n-i-1];
        }
        
        if(n%2!=0){
            ans = diag1+diag2-mat[n/2][n/2];
        }
        else{
            ans = diag1+diag2;
        }
        return ans;
    }
 int main(){
    vector<vector<int>>mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int ans = diagonalSum(mat);

    cout << "Diagonal Sum = " << ans << endl;

    return 0;
 }   