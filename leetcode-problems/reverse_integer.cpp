//  leetcode problem no. 7 Reverse Integer
#include<iostream>
#include<climits>
using namespace std;

int reverse(int x) {
        int ans = 0;
        while(x != 0){
             int digits = x % 10;
            // Check overflow before multiplying
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digits > 7)) return 0;
            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && digits < -8)) return 0;

           
            ans = (ans * 10)+ digits;
            x = x/10;
        }
        cout<<ans;
    }

int main(){
 
    reverse(9567402148);
}