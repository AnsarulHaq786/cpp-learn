// binary operator overload as a member function

#include<iostream>
using namespace std;
class Heights{
    private:
    int feet, inch;
    public:
    Heights(int fee=0, int inc=0): feet(fee), inch(inc){}
    //member function
    Heights operator +(Heights h){
        Heights temp;
        temp.feet = (feet + h.feet) + (inch + h.inch)/12;
        temp.inch = (inch + h.inch)%12;
        return temp;
    }
    void display(){
        cout<<feet<<" feet "<<inch<<" inch"<<endl;
    }
};
int main(){
    Heights h1(2,6), h2(3,7);
    Heights h3 = h1 + h2;
    h3.display();
    return 0;
}