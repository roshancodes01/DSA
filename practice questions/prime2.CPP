#include<iostream>
using namespace std;

int main(){
    int n;
    cout <<"enter a number: ";
    cin >> n;
    bool isPrime = true;

    for( int i = 2; i*i <= n; i++){
        if(n % i == 0){
            bool isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout<< n <<" is a prime number\n";
    }else{
        cout<< n <<"is non prime number\n";
    }

}