#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    // using two pointer method
    int left = 0;
    int right = n-1;
    while(left<right){
        if(arr[left]%2==1 && arr[right]%2==0){
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
        if(arr[left]%2==0){
            left++;
        }
        if(arr[right]%2==1){
            right--;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}