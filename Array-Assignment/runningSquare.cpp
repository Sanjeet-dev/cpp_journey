// return square of every element present in the array
#include<iostream>
using namespace std;

int main(){
    int arr[] = {0,1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size; i++){
        arr[i]=arr[i]*arr[i];
        cout<<arr[i]<<" ";
    }
    return 0;
}