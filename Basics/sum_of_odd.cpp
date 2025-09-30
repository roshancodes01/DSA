// sum of all odd numbers from 1 to Nth term using for loop
#include<iostream>
using namespace std;
int main(){
    int term , oddSum = 0;
    cout<<"Enter the nth term: ";
    cin>>term;
   
    for(int i=1; i<=term; i++){
        if(i%2 != 0){
            oddSum = oddSum + i;
        }
    }
    cout<<"odd sum = "<< oddSum<< endl;
}

// using while loop
#include <iostream>
using namespace std;
int main() {
    int term, i=1,oddSum=0;
    cout<<"enter the nth term: ";
    cin>> term;
    while(i<=term){
        if(i%2!=0){
            oddSum = oddSum+i;
           
        }
         i++;
    }
cout<<"odd sum = "<<oddSum;
    return 0;
}