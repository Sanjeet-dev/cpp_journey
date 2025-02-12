#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v(5);
    for(int i=0; i<v.size(); i++){
        cin>>v[i];
    }



    // printing all elements
    for(int ele:v){
        cout<<ele<<" ";
    }

    //adding element
    v.push_back(45);
    v.insert(v.end()-2,23);

    //deleting element
    v.pop_back();
    v.erase(v.begin()+1);

    v.resize(10);

    // final array
    for(int ele:v){
        cout<<ele<<" ";
    }
    // reversing the vector array
    reverse(v.begin(),v.end());
    return 0;
}