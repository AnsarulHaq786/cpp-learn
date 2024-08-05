/* WAP to create a class string that receive two string values with the help of two objects (say s1 and s2), concatenates (join) them using +operator overloading with the help of another object (say s3, as s3=s1+s2) and display all three string values
*/
#include <iostream>
#include <string.h>
#include <string>
using namespace std;
class String{
    private:
        string s;
    public:
        String(string str=""): s(str) {}
        String operator +(String obj2){
        	return s+obj2.s;
        }
        void printData(){
            cout<< s <<endl;
        }
        // string getString(){
        //     return s;
        // }
};
int main() {
    String s1("Hello "), s2("World!");
    String s3;
    s3=s1+s2;
    // cout don't directly print string?!: Nope, here s3 is actually an object
    // cout << s3.getString() <<endl;
    s3.printData();
    return 0;
}