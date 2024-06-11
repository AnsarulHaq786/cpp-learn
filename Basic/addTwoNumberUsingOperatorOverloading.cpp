#include <iostream>
using namespace std;
class complex{
    private:
    int x,y;
    public:
    complex(int a=0,int b=0){
        x=a;
        y=b;
    }
    void display(){
        cout<<x<<"+"<<y<<"i"<<endl;
    }
    complex operator +(complex c){
        complex temp;
        temp.x=x+c.x;
        temp.y=y+c.y;
    }
};
int main() {
    complex c1(2,3), c2(4,4), c3;
    c3=c1+c2;
    c3.display();
    return 0;
}