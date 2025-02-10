// find out given array is sorted or not
#include <iostream>
#include <climits>
using namespace std;

bool isSorted(int arr[], int n){
    bool sorted = true;
    for(int i=1; i<n; i++){
        if(arr[i]<=arr[i-1]){
            sorted = false;
        }
    }
    return sorted;
        
}

int main(){
    int arr[] = {6,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    bool ans = isSorted(arr, size);
    cout<<"The provided array is "<<ans<<endl;
    return 0;


}