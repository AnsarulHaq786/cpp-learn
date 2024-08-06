#include <iostream>
using namespace std;
class secondClass;
class firstClass{
    private:
        int n1;
    public:
        firstClass(int num1=0): n1(num1){}
        friend void swapValues(firstClass a1, secondClass a2);
        void display(){
            cout<<n1;
        }
};
class secondClass{
    private:
        int n2;
    public:
        secondClass(int num2=0): n2(num2){}
        friend void swapValues(firstClass a1, secondClass a2);
        void display(){
            cout<<n2;
        }
};

void swapValues(firstClass a1, secondClass a2){
    int temp;
    temp = a1.n1;
    a1.n1 = a2.n2;
    a2.n2 = temp;
}

int main() {
    firstClass o1(3);
    secondClass o2(5);
    
    cout<<"Before swapping!"<<endl;
    o1.display();
    o2.display();
    
    swapValues(o1, o2);
    
    cout<<"After swapping!"<<endl;
    o1.display();
    o2.display();
    
    return 0;
}