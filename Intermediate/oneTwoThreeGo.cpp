//Compile time polymorphism using function overloading
#include <iostream>
using namespace std;
class numbers{
  private:
  int one=1,two=2;
  public:
  virtual void display(){
    cout<<one<<" "<<two;
  }
};
class numsDerived{
  private:
  int three=3;
  numbers n;
  public:
  void display(){
    n.display();
    cout<<" "<<three<<"...Go"<<endl;
  }
};
int main() {
    numsDerived num;
    num.display();
    return 0;
}