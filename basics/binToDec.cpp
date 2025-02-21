#include<iostream>
using namespace std;

int power(int m,int n){
    int res = 1;
    for(int i=0; i<n; i++){
        res*=m;
    }
    return res;
}

int main(){
    int num;
    cout<<"Enter the binary number: ";
    cin>>num;
    int dec=0;
    int exp = 0;
    while(num>0){
        int d= num%10;
        int ans = power(2,exp);
        dec += d*ans;
        exp++;
        num=num/10;

    }
    cout<<dec;

    return 0;
}