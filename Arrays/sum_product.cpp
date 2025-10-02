#include<iostream>
using namespace std;

void sumOfAll(int arr[], int sz){
    int total = 0;
    for(int i = 0; i<sz;i++){
        total += arr[i];
    }
    cout<<"sum = "<<total<<endl;
}
void productOfAll(int arr[], int sz){
    int total = 1;
    for(int i = 0; i<sz; i++){
        total*= arr[i];
    }
    cout<<"product = "<<total<<endl;
}

int main(){
    int sz = 5; 
 int arr[] = {1,2,4,5,6};

    sumOfAll(arr,sz);
    productOfAll(arr,sz);
}