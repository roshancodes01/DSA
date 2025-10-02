#include<iostream>
using namespace std; 
  void swapMaxMin(int arr[], int size){
    int maxIndex = 0, minIndex = 0;
    //find max index
    for(int i = 0; i<size; i++){
       if(arr[i]>arr[maxIndex]){
        maxIndex = i;
       }
    }
    //find min index
    for(int i = 0; i<size; i++){
    if(arr[i]<arr[minIndex]){
        minIndex = i;
    }
  }
    swap(arr[maxIndex], arr[minIndex]);
  }
    
  int main(){
    int arr[] = {3,6,8,9,10};
    int size = 5;

    swapMaxMin(arr, size);

     for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
     } 
}