#include<iostream>
using namespace std;
class Height{
    private:
    int feet, inches;
    public:
    Height(int fee=0, int inc=0): feet(fee), inches(inc) {}
    friend Height operator +(Height &H1, Height &H2);
    void display(){
        cout<<feet<<" feet "<<inches<<" inch"<<endl;
    }
};
Height operator +(Height &H1, Height &H2){
    Height temp;
    temp.feet = (H1.feet + H2.feet) + (H1.inches + H2.inches)/12;
    temp.inches = (H1.inches + H2.inches)%12;
    return temp;
}
using namespace std;
int main(){
    Height h1(5, 8), h2(2, 7);
    Height h;
    h = h1 + h2;
    h.display();
    return 0;
}