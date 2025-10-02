#include<iostream>
#include<climits>
using namespace std;

int main(){
    int nums[] = {5,66,-1,-15,24};
    int size = 5;

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallestIndex = -1;
    int largestIndex = -1;

    for(int i = 0; i<size; i++){
       smallest  = min(nums[i], smallest);
       if(nums[i] == smallest){
        smallestIndex = i;
       }
       largest = max(nums[i], largest);
       if(nums[i] == largest){
        largestIndex = i;
       }
    }

    // cout<<"smallest = " << smallest << endl;
    // cout<<"largest = " << largest <<endl;
    cout<<"smallest index = "<<smallestIndex<<endl;
    cout<<"largest index = "<<largestIndex<<endl; 

    return 0;
}