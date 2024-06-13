// changed class name to upper case
#include <iostream>
using namespace std;
class Distance{
private:
    int m, km;
public:
//naming comflict
//ambiguous name of attribute
    Distance(int meter = 0, int kilometer = 0){
        m = meter;
        km = kilometer;
    }
    void display(){
        cout << km << "km" << m << "m" << endl;
    }
    friend Distance operator +(Distance d1, Distance d2);
};
Distance operator +(Distance d1, Distance d2){
    Distance d;
    d.m = (d1.m + d2.m)%1000;
    d.km = ((d1.m + d2.m)/1000) + (d1.km + d2.km);
    return d;
}
int main(){
    //correct order of arguement passing
    Distance d1(300, 2);
    Distance d2(800, 3);
    Distance d3;
    d3 = d1+d2;
    d3.display();
    return 0;
}