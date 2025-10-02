#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);

    cout<<"after push back = "<<vec.size()<<endl;
  
    vec.pop_back();//pop 45 from vector

    cout<<vec.front()<<endl;//print front of the vector
    cout<<vec.back()<<endl;//print back of the vector
    cout<<vec.at(1)<<endl;// print index of the vector

    return 0;
}