//it's not working
//may be the implementation of polymorphism is wromg
//#issues
#include <iostream>
using namespace std;
class distance{
private:
    int m, km;
public:
    distance(int m = 0, int km = 0){
        m = m;
        km = km;
    }
    void display(){
        cout << km << "km" << m << "m" << endl;
    }
    friend distance operator +(distance d1, distance d2);
};
distance operator +(distance d1, distance d2){
    distance d;
    d.m = (d1.m + d2.m) % 1000;
    d.km = (d1.m + d2.m) / 1000 + (d1.km + d2.km);
    return d;
}
int main(){
    distance d1(2, 300);
    distance d2(3, 800);
    distance d3;
    d3 = d1+d2; //line of error *fix
    d3.display();
    return 0;
}