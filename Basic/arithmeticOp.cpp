#include <iostream>
using namespace std;
class number
{
protected: // allow variable access to derived class
  int num1, num2;
public:
  void input()
  {
    cout << "Enter two numbers" << endl;
    cin >> num1 >> num2;
  }
};

class calculate : public number // derive class declaration
{
public:
  void display()
  {
    cout << "Sum=" << num1 + num2 << endl;
    cout << "Difference=" << num1 - num2 << endl;
    cout << "Product= " << num1 * num2 << endl;
    cout << "Quotient=" << num1 / num2 << endl;
    cout << "Remainder=" << num1 % num2 << endl;
  }
};

int main()
{
  calculate c; // creating the instance
  c.input(); // object 'c' inherit the attributes of another class named number
  c.display();
  return 0;
}