#include <iostream>
using namespace std;

int max_of_two(int n1, int n2){
    return n1>n2?n1:n2;
}

int main(){

    int num1,num2;

    cout<<"Enter the numbers";
    cin>>num1>>num2;

    int result = max_of_two(num1,num2);
    cout<<"the maximum number is "<<result;


    return 0;
}