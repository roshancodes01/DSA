#include<iostream>
using namespace std;
int main(){
    int principle,time;
    float rate;
    cout<<"Enter principle amount: ";
    cin>>principle;
    cout<<"Enter rate: ";
    cin>>rate;
    cout<<"Enter time: ";
    cin>>time;
    float simpleInterest;
    simpleInterest = (principle*rate*time)/100;
    cout<<"the simple interest is "<<simpleInterest;

    return 0;
}