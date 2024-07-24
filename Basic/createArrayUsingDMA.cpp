#include <iostream>
using namespace std;
int main() {
    int size;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    int *arr= new int(size);
    for(int i=0; i<size; i++){
        arr[i]=i;
        cout<<arr[i];
    }
    delete[] arr;
    return 0;
}