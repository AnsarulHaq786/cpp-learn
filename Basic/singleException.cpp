#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a, b;
    float d;
    try
    {
        cout << "Enter first numerator:";
        cin >> a;
        cout << "Enter second de-numerator:";
        cin >> b;
        if (b == 0)
            throw b;
        d = a / b;
        cout <<"Result="<<d;
    }
    catch (int e)
    {
        cout <<"Exception occur!"<<endl;
        cout <<"Denominator is zero!";
    }
    return 0;
}