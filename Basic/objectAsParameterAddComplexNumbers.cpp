#include <iostream>
using namespace std;
class complex{
private:
    int real, img;
public:
    void inputComplex(){
        cout<<"Enter Real and Imaginary part"<<endl;
        cin>>real>>img;
    }
    void addComplex(complex c1, complex c2){
        real=c1.real+c2.real;
        img=c1.img+c2.img;       
    }
    void displayComplex(){
        cout<<real<<"+i"<<img<<endl;
    }
};
int main(){
    complex c1,c2,c3;
    c1.inputComplex();
    c2.inputComplex();
    c3.addComplex(c1,c2);
    c3.displayComplex();
    return 0;
}