#include<iostream>
using namespace std;
class checkOddEven{
    private:
    int num;
    public:
    checkOddEven(int n){
        num=n;
    }
    void display(){
        if(num%2==0){
            cout<<num<<" is even"<<endl;
        }
        else{
            cout<<num<<" is odd"<<endl;
        }
    }
};
int main(){
    checkOddEven obj(3);
    obj.display();
    return 0;
}