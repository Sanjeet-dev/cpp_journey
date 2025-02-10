// rotate the array by position by k steps
#include <iostream>
using namespace std;

int main(){
    cout<<"nice to meet you there! Let's rotate the array by k steps"<<endl;
    int arr[] = {1,2,3,4,5};
    int k;
    cout<<"Enter the value of position k"<<endl;
    cin>>k;
    cout<<"Rotated array is like this ";
    int n = sizeof(arr)/sizeof(arr[0]);
    int rotated[n];

    k=k%n;
    for(int i=0; i<k; i++){
        rotated[i]=arr[n+i-k];
    }
    for(int i=k; i<n; i++){
        rotated[i]=arr[i-k];
    }

    // print the array
    for(int i=0; i<n; i++){
        cout<<rotated[i]<<" ";
    }

    return 0;
}