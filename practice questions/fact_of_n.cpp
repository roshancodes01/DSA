#include<iostream>
using namespace std;
int main(){
    int num,fact=1;
    cout<<"enter a number to find its factorial: ";
    cin>>num;
    for(int i = 1; i<=num;i++){
        fact = fact * i;
    }
    printf("the factorial of %d number is %d",num,fact);
}