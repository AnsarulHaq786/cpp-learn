#include <iostream>
using namespace std;
template<class T1, class T2>
class Swap
{
    private:
    T1 a;
    T2 b;
    public:
     Swap(T1 x , T2 y)
    {
        a=x;b=y;
        cout<<"Before swapping =  "<<a <<","<<b<<endl;
    }
void display() 
{ 
    T1 temp = a; 
    T2 a = b; 
    T1 b = temp; 
    cout<<"After swapping = "<<a<<","<<b<<endl;
} 
};
int main()
 {
    Swap <int ,float>s1(3,6.4);
    s1.display();
    Swap<int, float>s2(4,5.5);
    s2.display();
    Swap<float, float>s3(3.5,7.5);
    s3.display();
    Swap<int, int>s4(3,4);
    s4.display();
    Swap<float, int>s5(3.5,4);
    s5.display();
    return 0;
 }