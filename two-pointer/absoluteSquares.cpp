// Given an integer array 'a' sorted in non-decreasing order, return an array of the squares of each number
// sorted in non-decreasing order
//[-10,-3,4,5,6]=[9,16,25.36,100]
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int>arr= {-10,-5,-2, 1, 6};
    
    
    int left = 0; 
    int right = arr.size()-1;

    vector<int> v;

    while(left<right){
        if(abs(arr[left])<abs(arr[right])){
            v.push_back(arr[right]*arr[right]);
            right--;

        }
        else{
            v.push_back(arr[left]*arr[left]);
            left++;
        }
    }
    reverse(v.begin(),v.end());

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }


}