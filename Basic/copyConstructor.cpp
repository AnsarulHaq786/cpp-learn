#include<iostream>
#include<string>
using namespace std;
class employee{
	private:
		int id;
		string name;
		float salary;
	public:
		employee(int eid,string ename,float esalary){
			id=eid;
			name=ename;
			salary=esalary;
		}
		employee(employee&obj){
			id=obj.id;
			name=obj.name;
			salary=obj.salary;
		}
		void display(){
        cout<<id<<" "<<name<<" "<<salary<<endl;
    	}
    	~employee(){
    		cout<<"object destroyed!"<<endl;
		}
};
int main()
{
	employee e(4,"MrWhooseTheBoss",99.99);
	employee e1(e);
	e1.display();
}
