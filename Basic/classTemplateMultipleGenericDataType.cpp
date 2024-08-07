/* qsn.10: create class template with multiple parameters two generic data types in class defination */

#include <iostream>
using namespace std;
template <class T1, class T2>
class Number{
    private:
    T1 n1;
    T2 n2;
    public:
    Number(T1 num1=0, T2 num2=0):n1(num1), n2(num2){}
    void sum(){
        T2 sum=n1+n2;
        cout<<"Sum="<<sum<<endl;
    }
};
int main() {
    Number <int,int>n1(2,3);
    n1.sum();
    Number <int, float>n2(2, 3.8);
    n2.sum();
    return 0;
}