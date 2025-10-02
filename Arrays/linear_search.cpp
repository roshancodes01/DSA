 #include<iostream>
 using namespace std;
 
    int linearSearch(int arr[], int sz, int target){
        for(int i = 0; i <sz; i++){
            if(arr[i] == target){//found
                return i;
            }
        }

        return -1; //not found

    }

 int main(){
    int arr[] = {4,3,2,5,8,9};
    int sz = 6;
    int target =11;


    cout<<linearSearch(arr, sz, target)<<endl;
    return 0;
 }