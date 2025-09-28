// calculate sum of numbers from 1 to n;
#include<iostream>
using namespace std;
int main(){
    int term,sum=0;
    cout<<"Enter the nth term: ";
    cin>>term;
    for(int i = 1; i<=term; i++){
        sum = sum + i;
    }
    cout<<"the sum of "<<term<<" term is "<<sum;
}