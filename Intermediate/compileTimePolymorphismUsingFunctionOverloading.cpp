//compile time polymorphism using function overloading
#include <iostream>
using namespace std;
class numbers{
    private:
    int n1, n2, n3, sum;
    public:
    void add(int a, int b){
        n1=a;
        n2=b;
        sum=n1+n2;
    }
    void add(int a, int b, int c){
        n1=a;
        n2=b;
        n3=c;
        sum=n1+n2+n3;
    }
    void display(){
        cout<<"sum="<<sum<<endl;
    }
};
int main() {
    numbers n;
    n.add(2,3);
    n.display();
    n.add(2,3,4);
    n.display();
    return 0;
}