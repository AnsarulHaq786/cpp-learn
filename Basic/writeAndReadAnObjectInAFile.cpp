#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Box{
    private:
    int length, breadth, height;
    public:
    Box(int l=0, int b=0, int h=0): length(l), breadth(b), height(h){}
    
    void checkArea(){
        if(length*breadth > 55)
            this->printData();
    }
    
    void printData(){
        cout<<length<<" "<<breadth<<" "<<height<<endl;
    }
    
    friend ostream& operator<<(ostream& os, const Box& box) {
    os << box.length << " " << box.breadth << " " << box.height;
    return os;
    }
    
    friend istream& operator>>(istream& is, Box& box) {
    is >> box.length >> box.breadth >> box.height;
    return is;
	}
};
int main() {
    Box box1(5, 5, 5), box2(10, 7, 3);
    fstream obj1;
    
    obj1.open("Box.txt", ios::out);
    if(!obj1){
        cout<<"Object was not created!";
    }
    else{
        obj1<<box1<<endl;
        obj1<<box2<<endl;
    }
    obj1.close();
    
    Box box3, box4;
    fstream obj2;
    obj2.open("Box.txt", ios::in);
    if(!obj2){
        cout<<"File not opened";
    }
    else{
        obj2>>box3;
        obj2>>box4;
    }
    obj2.close();
    box3.checkArea();
    box4.checkArea();
    return 0;
}