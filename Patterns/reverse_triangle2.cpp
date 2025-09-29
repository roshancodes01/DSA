#include<iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i = 0; i < n; i++){
        char ch = 'A' + i;   // start character for the row
        for(int j = 0; j <= i; j++){
            cout << ch; 
            ch--;            // go backwards
        }
        cout << endl;
    }
    return 0;
}
//