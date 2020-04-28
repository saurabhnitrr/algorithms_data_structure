// Given a matrix, if any element is 0 make corresponding row and column as 0
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ZeroMatrix(vector<vector<int>>& matrix){
int r[matrix.size()] = {0};
int c[matrix[0].size()] = {0};
for(int i=0;i<matrix.size();i++){
    for(int j=0;j<matrix[0].size();j++){
        if(matrix[i][j]==0){
            r[i] = 1;
            c[j] = 1;
        }
    }
}

for(int i=0;i< matrix.size();i++){
    if(r[i]==1){
        for(int j=0;j<matrix[0].size();j++){
            matrix[i][j]=0;
        }
    }
}

for(int i=0;i< matrix[0].size();i++){
    if(c[i]==1){
        for(int j=0;j<matrix.size();j++){
            matrix[j][i]=0;
        }
    }
}
return matrix;
}

int main(){
    int r,c;
    cin>>r>>c;
    vector<vector<int>> matrix(r, vector<int> (c,0));
    int x;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>x;
            matrix[i][j] = x;
        }
    }
    vector<vector<int>> res = ZeroMatrix(matrix);
    for (int i = 0; i < res.size(); i++)
    {
        for(int j = 0;j< res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

// test case
// 3 4
// 1 0 2 3
// 4 2 1 3
// 8 9 6 7

//result
// 0 0 0 0 
// 4 0 1 3 
// 8 0 6 7 