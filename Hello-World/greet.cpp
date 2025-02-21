#include <iostream>
using namespace std;

int main(){
    cout<<"nice to meet you there! enter the m and n";
    int m,n;
    cin>>m>>n;
    int res=1;
    for(int i=0; i<n; i++){
        res*=m;
    }
    cout<<res;
    return 0;
}