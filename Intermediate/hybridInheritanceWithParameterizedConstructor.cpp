#include <iostream>
using namespace std;
class stu
{
protected:
    string name;
    
public:
    stu(string n)
    {
        name = n;
    }
};
class test : public virtual stu
{
protected:
    float mark;
    
public:
    test (float m,string n) : stu(n)
    {
        mark = m;
    }
};
class eca : public virtual stu
{
protected:
    char grade;

public:
    eca(char g,string n) : stu(n)
    {
        grade = g;
    }
};
class result : public test, public eca
{
private:
    string res;

public:
    result(float m, char g, string n) : stu(n),test(m,n), eca(g,n)
    {
        mark=m;
        res = (mark >= 45 ? "pass" : "fail");
    }
    void display()
    {
        cout<<name<<" "<<mark<<" "<<grade<<" "<<res<<" "<<endl;
    }
};
int main()
{
    result r( 45, 'A', "Raj");
    r.display();
    return 0;
}