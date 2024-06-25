#include <iostream>
using namespace std;
template <class T>
class sum{
    private:
    T a,b;
    public:
    void summation(T x,T y){
        a=x;
        b=y;
    }
    void dipslay(){
        cout<<"Sum="<<(a+b)<<endl;
    }
};
int main() {
    sum <int>s1;
    sum <float>s2;
    s1.summation(2,5);
    s1.dipslay();
    s2.summation(2.5,5.5);
    s2.dipslay();
    return 0;
}