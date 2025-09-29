
#include<iostream>
using namespace std;

int main(){
    int n = 3;

   char ch =  'A';

   for(int i = 0; i <n; i++){//outer loop
    for(int j = 0; j<n; j++ ){//inner loop
        cout<<ch<<" ";
        ch++;
    }
    cout<<endl;
   }
    cout<<"after pattern: "<<ch<<endl;
    return 0;
}