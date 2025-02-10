// find the unique number from array full of duplicates numbers
#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = {1,2,3,7,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int unique = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                arr[i]= -1;
                arr[j] = -1;
            }
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]>-1){
            unique = arr[i];
        }
        cout<<arr[i]<<" "<<endl;
    }
    cout<<"the unique number is "<<unique;
    return 0;
}