#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row;
        int col;
        vector<vector<int>>reshape(r,vector<int>(c));
        int oldrow=mat.size();
        int oldcol = mat[0].size();
        if(oldrow*oldcol!=r*c){
            reshape=mat;
        }
        else{
            row =0;
            col = 0;
            for(int i=0; i<oldrow;i++){
                for(int j=0; j<oldcol; j++){
                    reshape[row][col]=mat[i][j];
                    col++;
                    if(col==c){
                        col=0;
                        row++;
                    }
                }
            }
            
        }
        return reshape;
        
    }
 int main(){
     vector<vector<int>> mat = {
        {1, 2},
        {3, 4}
    };

    int r = 1;
    int c = 4;

    vector<vector<int>> ans = matrixReshape(mat, r, c);
    for(int i=0; i<ans.size(); i++){
        for(int j=0;  j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
            
        }
        cout<<endl;
    }
    return 0;

 }   