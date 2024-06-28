#include <iostream>
using namespace std;
template <class T>
class Swap{
  private:
  T a,b;
  public:
  Swap(T x, T y) : a(x), b(y){}
  void swap(){
    cout<<"Before Swapping:"<<a<<" "<<b<<endl;
    T temp=a;
    a=b;
    b=temp;
    cout<<"After Swapping:"<<a<<" "<<b<<endl;
  }
};
int main() {
    Swap<int> s(3,4);
    s.swap();
    return 0;
}