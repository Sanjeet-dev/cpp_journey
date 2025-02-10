//Find the postion of the last occurance of element x
#include<iostream>
using namespace std;

int main(){
    int array[] = {1,2,3,4,1,3,4,5,1,5,17};
    int size = sizeof(array)/array[0];
    int x;
    cout<<"Enter the x"<<endl;
    cin>>x;
    int occur=-1;
    for(int i=0; i<size; i++){
        if(array[i]==x){
            occur=i;

        }
    }
    cout<<"The x is at position "<<occur<<endl;
    return 0;
}