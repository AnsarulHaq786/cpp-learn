#include <iostream>
#include <string>
using namespace std;
class employee{
    private:
    int id;
    string name;
    float salary;
    public:
    void input(){
        cout<<"Enter id"<<endl;
        cin>>id;
        cin.ignore();
		cout<<"Enter name"<<endl;
		getline(cin,name);
		cout<<"Enter salary"<<endl;
        cin>>salary;
    }
    void display(){
        cout<<id<<" "<<name<<" "<<salary<<endl;
    }
};
int main() {
    employee e;
    e.input();
    e.display();
    return 0;
}