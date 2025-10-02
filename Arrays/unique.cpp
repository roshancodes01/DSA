#include<iostream>
using namespace std;

void uniqueValue(int arr[],int size){
     for (int i = 0; i < size; i++) {
        bool isUnique = true;
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false; // Found a duplicate
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
int main(){
    int arr[] = {1,2,3,1,2,3,4};
    int size = 7;
    uniqueValue(arr,size);
}