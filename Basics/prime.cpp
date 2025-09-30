#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 2;
    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;
    } else {
        while (i <= n - 1) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
            i++;
        }
    }
    if (isPrime) {
        cout << n << " is a prime number";
    } else {
        cout << n << " is not a prime number";
    }

   
    return 0;
}