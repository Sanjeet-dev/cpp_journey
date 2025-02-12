//[1,2,3,4,5]=[1,3,6,10,15];
#include<iostream>
#include<vector>
using namespace std;

void runningSum(vector<int> &v,int n){
    for(int i=1; i<n; i++){
        v[i]=v[i-1]+v[i];

    }


}

int main(){
    cout<<"Enter the vector size"<<endl;
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];

    }
    runningSum(v,n);
    for(int j: v){
        cout<<j<<" ";
    }
    return 0;
}