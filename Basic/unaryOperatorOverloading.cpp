// qsn.7: WAP to demonstrate (-) unary operator overloading using the function as friend function.
#include <iostream>
using namespace std;
class Number{
    private:
    int number;
    public:
    Number(int number=0): number(number){}
    void display(){
        cout<<number;
    }
    friend Number operator -(const Number &num);
};
Number operator -(const Number &num){
    return -num.number;
}
int main() {
    Number n1(5);
    cout<<"Before operator call!"<<endl;
    n1.display();
    cout<<endl<<"After operator call!"<<endl;
    Number n2=-n1;
    n2.display();
    return 0;
}