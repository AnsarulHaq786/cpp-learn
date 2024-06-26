#include<iostream>
using namespace std;
class student{
  protected:
    string name;
    float sub1,sub2;
  public:
    void input(string naam, float s1, float s2){
        name=naam;
        sub1=s1;
        sub2=s2;
    }
};
class result: public student{
  private:
    float average;
    string result;
  public:
    void displayResult(){
      average=(sub1+sub2)/2;
      result=(average<40)?"Fail":"Pass";
      cout<<name<<" "<<sub1<<" "<<sub2<<" "<<result<<endl;
    }
};
int main() {
  result r;
  r.input("Sandy",75.5,65);
  r.displayResult();
  return 0;
}