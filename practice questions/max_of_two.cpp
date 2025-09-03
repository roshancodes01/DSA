#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;
    if(a>b){
        cout<<a<<" is bigger number";
    }else if(a==b){
        cout<<"both number are same";
    }else{
        cout<<b<<" is bigger number";
    }
}