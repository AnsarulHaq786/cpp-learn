#include<iostream>
using namespace std;
class compareTwoNumbers{
    private:
    int num1,num2;
    public:
    void getTwoNumbers(){
        cout<<"Enter two numbers: ";
        cin>>num1>>num2;
    }
    void compare(){
        if(num1>num2){
            cout<<num1<<" is greater than "<<num2<<endl;
        }
        else if(num1<num2){
            cout<<num2<<" is greater than "<<num1<<endl;
        }
        else{
            cout<<num1<<" is equal to "<<num2<<endl;
        }
    }
};
int main(){
    compareTwoNumbers obj;
    obj.getTwoNumbers();
    obj.compare();
    return 0;
}