#include <iostream>
using namespace std;
class shape{
    protected:
    float base, height;
    public:
    void get_data(float b, float h){
        base=b;
        height=h;
    }
    virtual  void area()=0;
};
class triangle: public shape{
    public:
    void area(){
        float area=0.5*base*height;
        cout<<"Area of triangle="<<area<<endl;
    }
};
class rectangle: public shape{
    public:
    void area(){
        float area=base*height;
        cout<<"Area of rectangle="<<area<<endl;
    }
};
int main() {
    shape* bptr;
    triangle t;
    bptr=&t;
    bptr->get_data(3,2);
    bptr->area();
    rectangle r;
    bptr=&r;
    bptr->get_data(3,2);
    bptr->area();
    return 0;
}