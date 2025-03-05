#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> pascalTriangle(int rows){
    vector<vector<int>> pascal(rows);
    for(int i=0; i<rows; i++){
        pascal[i].resize(i+1);

        for(int j=0; j<i+1; j++){
            if(j==0 || j==i){
                pascal[i][j]=1;
            }else
            pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];
        }
    }
    return pascal;
    
}

int main(){
    int rows;
    cin>>rows;
    vector<vector<int>> ans;
    ans = pascalTriangle(rows);


    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}