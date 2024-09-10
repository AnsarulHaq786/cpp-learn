//WAP to add data of private member of two classes using friend function
#include <iostream>
using namespace std;
class Num2;
class Num1{
    private:
    int num1;
    public:
    Num1(int n1=0): num1(n1){}
    friend int addNumbers(Num1 &n1, Num2 &n2);
};
class Num2{
    private:
    int num2;
    public:
    Num2(int n2=0): num2(n2){}
    friend int addNumbers(Num1 &n1, Num2 &n2);
};
int addNumbers(Num1 &n1, Num2 &n2){
    int sum = n1.num1 + n2.num2;
    return sum;
}
int main() {
    Num1 n1(3);
    Num2 n2(4);
    cout<<"Sum is "<<addNumbers(n1, n2)<<endl;
    return 0;
}