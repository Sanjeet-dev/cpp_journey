#include<iostream>
#include<string>
using namespace std;

int main(){
    cout<<"Hello cpp World!"<<endl;
    string response;
    while(true){
        cout<<"Here is your cup of tea(type 'stop' to end) ";
        cin>>response;
        if(response == "stop"){
            break;
        }
    }
    cout<<"You have already said stop I won't brew any more cup of tea."<<endl;
    return 0;
}