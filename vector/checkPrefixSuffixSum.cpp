#include<iostream>
#include<vector>
using namespace std;

bool checkPrefixSuffixSum(vector<int> &v){
    int total_sum=0;
    for(int i=0; i<v.size(); i++){
        total_sum+=v[i];
    }

    int prefix_sum=0;
    for(int i=0; i<v.size(); i++){
        prefix_sum+=v[i];

        int suffix_sum = total_sum-prefix_sum;
        if(suffix_sum==prefix_sum){
            return true;
        }

    }
        return false;
}


int main(){
    vector<int>v = {6,2,4,3,1};

    
    cout<<"if 1 then prefix sum is equal to suffix sum else 0 "<<endl;
    cout<<checkPrefixSuffixSum(v);
    return 0;
}