#include <iostream>
using namespace std;
class number2; // line number 11 user class name 'number2' which is defined later
class number1{
    private:
    int num1;
    public:
    void firstNumber(int n1){
        num1=n1;
    }
    friend int sum(number1 obj1,number2 obj2);
};
class number2{
    private:
    int num2;
    public:
    void secondNumber(int n2){
        num2=n2;
    }
    friend int sum(number1 obj1,number2 obj2);
};
int sum(number1 obj1,number2 obj2){
    return obj1.num1+obj2.num2;
}
int main() {
    number1 n1;
    n1.firstNumber(5);
    number2 n2;
    n2.secondNumber(4);
    cout<<"sum="<<sum(n1,n2);
    return 0;
}