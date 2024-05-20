#include <iostream>
using namespace std;
class employee{
    private:
        int id;
        string name;
        float salary;
    public:
        void getData();
        void putData();
};
void employee::getData(){
    cout<<"Enter id: "<<endl;
    cin>>id;
    cin.ignore();
    cout<<"Enter name: "<<endl;
    getline(cin,name);
    cout<<"Enter salary: "<<endl;
    cin>>salary;
}
void employee::putData(){
    cout<<"Id: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Salary: "<<salary<<endl;
}
int main() {
    employee e;
    e.getData();
    e.putData();
    return 0;
}