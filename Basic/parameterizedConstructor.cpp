#include <iostream>
#include <string>
using namespace std;
class employee{
    private:
    int id;
    string name;
    float salary;
    public:
    employee(int eid, string ename, float esalary){
        id=eid;
        name=ename;
        salary=esalary;
    }
    void display(){
        cout<<id<<" "<<name<<" "<<salary<<endl;
    }
};
int main() {
    employee e(3,"it's Me'",999.99);
    e.display();
    return 0;
}