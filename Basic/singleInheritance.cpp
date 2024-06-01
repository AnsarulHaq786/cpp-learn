#include <iostream>
using namespace std;
class number{
    protected:
    int num;
    public:
    number(int x){
        num=x;
    }
};
class prime: public number{
    private:
    int i,count=0;
    public:
    prime(int a) : number(a){
    }
    void display(){
        for(i=2;i<num;i++){
            if(num%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        cout<<num<<" is prime"<<endl;
        else
        cout<<num<<" is not prime"<<endl;
    }
};
int main() {
    prime p(68);
    p.display();
    return 0;
}