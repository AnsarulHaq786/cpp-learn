#include<iostream>
using namespace std;
class complex{
    private:
    int real;
    int img;
    public:
    complex(){
    }
    complex(int x, int y){
        real=x;
        img=y;
    }
    void display(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    friend complex operator + (complex p, complex q);
};

complex operator + (complex p, complex q){
    complex temp;
    temp.real=p.real+q.real;
    temp.img=p.img+q.img;
    return temp;
}
int main(){
    complex c1(10,20);
    complex c2(5,10);
    complex c3=c1 + c2;
    c3.display();
    return 0;
}