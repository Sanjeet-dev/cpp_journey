#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the decimal number: ";
    cin>>num;
    int bin=0;
    int exp = 1;
    while(num!=0){
        int digit = num%2;
        bin += digit*exp;
        exp*=10;
        num=num/2;
    }
    cout<<bin;

    return 0;
}