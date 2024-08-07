//qsn.9: WAP to demonstrate virtual function
#include <iostream>
using namespace std;
class Base{
    public:
    virtual void print(){
        cout<<"From Base class!";
    }
};
class Derived: public Base{
    public:
    void print() override{
        cout<<"from Derived class!";
    }
};
int main() {
    Derived d;
    Base* bptr=&d;
    bptr->print();
    return 0;
}