#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter Your Age: ";
    cin>>age;
    if(age>=18){
        printf("you are %d years old you can get a driving license",age);
    }else{
        printf("you are %d years old you cant get a driving license",age);
    }
}