#include<iostream>
using namespace std;
int main(){

    int term,sum=0;
    cout<<"Enter the term: ";
    cin>>term;
    for (int i = 1; i <=term; i++)
    {
        sum=sum+i;
    }
    cout<<"sum of "<<term<<" term is "<<sum;

    return 0;
}