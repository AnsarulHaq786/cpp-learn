
#include <iostream>
using namespace std;
int main() {
    int a, b;
    char opr;
    cout<<"Enter first number, operator, second number"<<endl;
    cin>>a>>opr>>b;
    try{
        if(opr!='+' && opr!='-' && opr!='*' && opr!='/')
        throw opr;
        if(opr=='/' && b==0)
        throw b;
        if(opr=='-' && a<b)
        throw opr;
        switch (opr)
        {
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
        case '/':
            cout<<a/b;
        default:
            cout<<"This block of statement will never run!";
            break;
        }
    }
    catch(char opr){
        cout<<opr<<"is not valid operator"<<endl;
    }
    catch(int b){
        cout<<"Denominator is"<<b<<endl;
    }
    catch(char opr){
        cout<<opr<<"operation cannot be done when first number is less than second number. Sorry!";
    }
    return 0;
}