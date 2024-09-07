// vector type
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    int size, input;
    cout<<"Enter number of inputs:"<<endl;
    cin>>size;
    for(int i=0; i<size; i++){
        cout<<"Enter number "<<i+1<<":"<<endl;
        cin>>input;
        vec.push_back(input);
    }
    for(int i=0; i<size; i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}