#include <iostream>
using namespace std;
template <class T>
void product(T a, T b){
    cout<<"Product="<<(a*b)<<endl;
}
int main() {
    product<float>(2,7.5); // use multigeneric function template to resolve this
    product<int>(3,2);
    return 0;
}