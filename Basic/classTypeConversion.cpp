#include <iostream>
#include <string>
using namespace std;
class invent2;
class invent1{
    private:
    string name;
    int value;
    int iterate;
    public:
    invent1(string naam=" ", int val=0, int i=0): name(naam), value(val), iterate(i){};
    string getName(){ return name;}
    operator int(){return (value*iterate);}
};
class invent2{
    private:
    string name;
    int total;
    public:
    invent2(invent1 o){
        name=o.getName();
        total=o.operator int();
    }
    string getName() { return name;}
    int getTotal() { return total;}
};
int main() {
    invent1 i1("User",12,5);
    invent2 i2=i1;
    cout<<i2.getName()<<" "<<i2.getTotal()<<endl;
    return 0;
}