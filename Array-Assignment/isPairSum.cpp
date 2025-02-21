// problem: print 'yes' if there exist sum of pair equal to x else print 'no'
// i/p [-1,1,0,2,3] x=2
// o/p yes

#include<iostream>
using namespace std;

bool isPair(int arr[],int n, int x){
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==x) return true;
        else if(arr[i]+arr[j]<x) i++;
        else if(arr[i]+arr[j]>x) j--;

    }
    return false;
}

int main(){
    
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=9;
    
    if(isPair(arr,n,x)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    
    return 0;
}