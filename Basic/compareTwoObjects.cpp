/*
 WAP to create a class River with data memebers name, length, a constructor that initializes
 the members to the values passed to it as parameters, a function called CmpLength() to 
 compare two objects and DisplayInf() to display the information of the longest river?
 */
#include<iostream>
using namespace std;
class River{
    private:
    string name;
    int length;
    public:
    River (string naam="", int len=0): name(naam), length(len) {};
    River CmpLength(River r1, River r2){
        if(r1.length>r2.length)
            return r1;
        else
            return r2;
    }
    void DisplayInf(){
        cout<<name<<" "<<length<<endl;
    }
};
int main(){
    River r1("Koshi", 33), r2("Karnali", 22);
    River r3,r;
    r=r3.CmpLength(r1,r2);
    r.DisplayInf(); 
    return 0; 
}