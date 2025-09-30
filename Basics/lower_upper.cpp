// check if the character is lowercase or uppercase

#include<iostream>
using namespace std;
 
int main(){
     char ch;
     cout<<"enter char : ";
     cin>>ch;

     if(ch >= 65 && ch <= 90){
           cout<<"uppercase";
     }else{
        cout<<"lowercase";
     }

     return 0;
}