#include <iostream>
#include <climits>
using namespace std;
int main(){

    int arr[] = {2,2,4,4,10,8,7,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    // solution for non repeating elements
    
    // int max = 0;
    // int second = 0;
    // for(int i=0; i<size; i++){
    //     if(arr[i]>max){
    //         second=max;
    //         max=arr[i];
    //     }

    // }
    // cout<<second<<endl;

    // solution for repeating elements
    int first = INT_MIN;
    int second = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>first){
            second=first;
            first = arr[i];

        }else if(arr[i]>second && arr[i] != first){
            second = arr[i];
        }

    }
    cout<<"the second largest element for duplicate array is "<<second<<endl;


    return 0;
}