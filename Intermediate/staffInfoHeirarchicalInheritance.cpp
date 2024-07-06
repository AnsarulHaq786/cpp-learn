#include <iostream>
#include <string>
using namespace std;
class STAFF{
    protected:
    int staff_id;
    string name;
    public:
    void staff_info(int s_id, string s_name){
        staff_id=s_id;
        name=s_name;
    }
    void dispStaffInfo(){
        cout<<staff_id<<" "<<name<<endl;        
    }
};
class lecturer: public STAFF{
    private:
    string subject,department;
    public:
    void lecturer_info(int s_id, string s_name, string l_subject, string l_department){
        staff_info(s_id,s_name);
        subject=l_subject;
        department=l_department;
    }
    void dispLecturerInfo(){
        cout<<staff_id<<" "<<name<<" "<<subject<<" "<<department<<endl;
    }
};
class administrative: public STAFF{
    private:
    string post, department;
    public:
    void administrative_info(int s_id, string s_name, string a_post, string a_department){
        staff_info(s_id,s_name);
        post=a_post;
        department=a_department;
    }
    void dispAdministrativeInfo(){
        cout<<staff_id<<" "<<name<<" "<<post<<" "<<department<<endl;
    }
};
int main() {
    lecturer l;
    l.lecturer_info(2,"Malhotra","Mathematics","Science and Technology");
    l.dispLecturerInfo();
    
    administrative a;
    a.administrative_info(3,"Karthik","English","Management");
    a.dispAdministrativeInfo();

    return 0;
}