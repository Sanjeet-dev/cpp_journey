// problem: for given two sorted in increasing order array you have merge them and conclude the resulting array
// in sorted increasing order fashion 
// for ex arr1=[2,8,10]
// arr2 = [1,3,7]
// output [1,2,3,7,8,10]
#include<iostream>
using namespace std;

void mergeSortedArray(int arr1[],int arr2[],int result[],int m, int n){
    int i=0;
    int j=0; 
    int k=0;
    while(i<m && j<n){
        if(arr1[i]<=arr2[j]){
            result[k++]=arr1[i++];
        }else{
            result[k++]=arr2[j++];
        }
    }

    while(i<m){
        result[k++]=arr1[i++];
    }
    while(j<n){
        result[k++]=arr2[j++];
        
    }
    
    for(k=0; k<m+n; k++){
        cout<<result[k]<<" ";
    }
    
}

int main(){
    
    int m=3;
    int n=3;

    int arr1[]={10,11,12};
    int arr2[]={8,13,15};
    int result[m+n];
    mergeSortedArray(arr1,arr2,result,m,n);
    
    return 0;
}