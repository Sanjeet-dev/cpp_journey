// problem: print 'yes' if there exist sum of pair equal to x else print 'no'
// i/p [-1,1,0,2,3] x=2
// o/p yes

#include<iostream>
#include <stdlib.h>
using namespace std;

bool isPair(int arr[],int n, int x){
    int i=0;
    int j=n-1;
    bool flag=false;
    while(i<j){
        int diff = abs(arr[i]-arr[j]);
        if(diff==x){
            flag=true;
            break;
        }else if(diff>x){
            j--;
        }else{
            i++;
        }

    }
    return flag;
}

int main(){
    
    int arr[]={-1,0,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=6;
    
    if(isPair(arr,n,x)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    
    return 0;
}