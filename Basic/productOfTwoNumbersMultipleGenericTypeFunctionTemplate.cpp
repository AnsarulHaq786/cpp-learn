#include <iostream>
using namespace std;
template <class T1, class T2>
void product(T1 a, T2 b){
    cout<<"Product="<<(a*b)<<endl;
}
int main() {
    product(2,7.5);
    //product<int,float>(2,7.5);
    product(2,3);
    //product<int>(2,3);
    return 0;
}