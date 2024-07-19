#include<iostream>
using namespace std;
template <class T>
class stack{
    T faculty[30];
    int top;
    public:
    stack(){
        top=-1;
    }
    void push( T vari){
        faculty[++top]=vari;
    }
    T pop(){
        return faculty[top--];
    }
};
int main(){
stack <char>p1;
p1.push('O');
p1.push('L');
p1.push('L');
p1.push('E');
p1.push('H');
cout<<p1.pop();
cout<<p1.pop();
cout<<p1.pop();
cout<<p1.pop();
cout<<p1.pop();
cout<<endl;
stack <float>p2;
p2.push(12.1);
p2.push(13.6);
cout<<p2.pop()<<" ";
cout<<p2.pop()<<" ";
return 0;}