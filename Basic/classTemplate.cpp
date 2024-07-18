
#include <iostream>
using namespace std;
template <class T>
class Sum{
    private:
    T a,b,s;
    public:
    Sum(T n1=0, T n2=0): a(n1), b(n2) {};
    void calcSum(){
        s=a+b;
    }
    void dispSum(){
        cout<<s;
    }
};
int main() {
    Sum <int> o(2,3);
    o.calcSum();
    o.dispSum();
    return 0;
}