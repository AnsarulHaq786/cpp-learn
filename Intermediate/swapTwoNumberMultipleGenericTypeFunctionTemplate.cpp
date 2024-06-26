#include <iostream>
using namespace std;
template <class T1, class T2>
void swap(T1 a, T2 b){
    cout<<"Before Swapping:"<<a<<" "<<b<<endl;
    T1 temp = a;
    // T2 a=b;  //shadowing parameterized variable
    // T1 b=temp; // || creates ambiguity due to duplication of variable
    /*works for Class template because member function of class do not declare local variable with same name as of class data members*/
    T2 x=b;
    T1 y=temp;
    cout<<"After swapping:"<<x<<" "<<y<<endl;
}
int main() {
    swap<int, int>(2,3);
    swap<float, int>(9.5,3);
    return 0;
}
