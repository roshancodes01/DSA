#include<iostream>
using namespace std;

//sum of 2 number
int sum(int a,int b){
   int s = a+b;
   return s;
}

int minOfTwo(int a,int b){
    if(a<b){
        return a; 
    }else{
        return b;
    }
}

int sumOfOneToN(int n){
    int sum = 0;
    for(int i = 1; i<=n;i++){
        sum +=i;
    }
    return sum;
}
int factorialN(int n){
    int fact = 1;
    for(int i =1; i<=n;i++){
        fact*=i;
    }
    return fact;
}

int main(){
 
//  cout<<sumOfOneToN(5);
// cout<<factorialN(3);

   return 0;
}