#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
class Box{
    private:
    int length, breadth, height;
    public:
    Box(int l=0, int b=0, int h=0): length(l), breadth(b), height(h){}
    
    void appendData(){
	    fstream obj1;
	    obj1.open("Box.txt", ios::app);
	    if(!obj1){
	        cout<<"Object was not created!";
	    }
	    else{
	    	obj1<<"Length\t"<<length<<"\tBreadth\t"<<breadth<<"\tHeight\t"<<height<<endl;
	    }
	    obj1.close();
    }
	
	void getData(){
		fstream obj2;
		string readStr,tempStr;
		obj2.open("Box.txt", ios::in);
		if(!obj2){
			cout<<"File doesn't exists!"<<endl;
		}
		else{
			while(getline(obj2,readStr)){
			stringstream tokenize(readStr);
			tokenize<<tempStr<<this->length;
			tokenize<<tempStr<<this->breadth;
			tokenize<<tempStr<<this->height;
			}
		}
		obj2.close();
	}
	
	void checkArea(){
        if(length*breadth > 55)
            this->printData();
    }
    
    void printData(){
        cout<<length<<" "<<breadth<<" "<<height<<endl;
    }
};
int main() {
	Box box1(8,8,8), box2(3,3,3);
	
	box1.appendData();
	box1.getData();
	box1.checkArea();
	
	box2.appendData();
	box2.getData();
	box2.checkArea();
	
    return 0;
}