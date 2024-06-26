#include <iostream>
using namespace std;
template <class T1, class T2>
class sum{
    private:
    T1 a;
    T2 b;
    public:
    void input(T1 x, T2 y){
        a=x;
        b=y;
    }
    void displaySum(){
        cout<<"Sum="<<(a+b)<<endl;
    }
};
int main() {
    sum <float,float>s1;
    sum <int,float>s2;
    s1.input(3.5,3.5);
    s1.displaySum();
    s2.input(8.5,5);
    s2.displaySum();
    s2.input(5,8.5);
    s2.displaySum();
    return 0;
}