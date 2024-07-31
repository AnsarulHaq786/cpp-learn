/*
qsn.8: Make a class called memory with member data to represent Bytes, Kilobytes and Megabytes. Read the value of memory in bytes from user as basic data type and display the result in userdefined memory type (hint: use basic to user defined type conversion)
*/
#include <iostream>
using namespace std;
class Memory{
  private:
  long int bytes;
  long kilobytes;
  long megabytes;
  public:
  void getData(){
    cout<<"Enter memory in bytes:";
    cin>>bytes;
  }
  void convertData(){
    kilobytes=(bytes/1024);
    bytes=(bytes%1024);
    megabytes=(kilobytes/1024);
    kilobytes=(megabytes%1024);
  }
  void displayData(){
    cout<<megabytes<<"MB "<<kilobytes<<"KB "<<bytes<<"B";
  }
};
int main() {
    Memory m;
    m.getData();
    m.convertData();
    m.displayData();
    return 0;
}