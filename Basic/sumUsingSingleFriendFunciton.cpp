#include <iostream>
using namespace std;
class sum{
    private:
    int num1;
    int num2;
    public:
    void input(int x,int y){
        num1=x;
        num2=y;
    }
    friend float add(sum obj);
};
float add(sum obj){
    return (obj.num1+obj.num2);
}
int main() {
    sum s;
    s.input(10,20);
    cout<<add(s)<<endl;
    return 0;
}