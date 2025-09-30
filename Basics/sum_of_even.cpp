//sum of all even numbers upto nth term

#include<iostream>
using namespace std;

int main(){
    int term , evenSum = 0;
    cout<<"Enter the nth term: ";
    cin>>term;
    for(int i = 1; i <= term; i++){
        if(i%2==0){
            evenSum = evenSum+ i;
        }
    }
    cout<<"Sum of the "<<term<<"th term is " << evenSum<<endl;
}