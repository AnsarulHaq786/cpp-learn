// write a program that stores object of a student class (assume data members are roll, name and university_name) into a file and read value from file and display data in console
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Student{
    public:
    string name, university_name;
    int roll;
    void getData(){
        cout<<"Enter name, roll and university-name of a student"<<endl;
        cin>>name>>roll>>university_name;
    }
    void displayData(){
        cout<<name<<" "<<roll<<" "<<university_name;
    }
};
int main() {
    Student s;
    s.getData();
    fstream writeFile("student.txt", ios::out);
    writeFile<<s.name<<" "<<s.roll<<" "<<s.university_name;
    writeFile.close();
    
    Student st;
    fstream readFile("student.txt", ios::in);
    readFile>>st.name>>ws>>st.roll>>ws>>st.university_name;
    readFile.close();
    st.displayData();
    return 0;
}