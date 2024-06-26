#include <iostream>
using namespace std;
template <class T>
void swap(T a, T b){
    cout<<"Before Swapping:"<<a<<" "<<b<<endl;
    T temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"After Swapping:"<<a<<" "<<b<<endl;
}
int main() {
    swap(2,3);
    swap(3.5,8.7);
    return 0;
}