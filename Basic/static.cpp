#include <iostream>
using namespace std;
class Student{
    private:
    static int status; //shared amoung all instances of class
    public:
    Student() {}
    static int getStatus(){
        return status;
    }
};
int Student::status = 202;
int main() {
    Student s1, s2, s3;
    cout<<Student::getStatus();
    return 0;
}