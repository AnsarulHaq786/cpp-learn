#include <iostream>
using namespace std;
class bTime{
    protected:
    int bHours;
    int bMinutes;
    int bSeconds;
    public:
    void getBTime(){
        cout<<"Enter the time in 24 hour format(Hour:Minute:Second)"<<endl;
        cin>>bHours>>bMinutes>>bSeconds;
    }
};
class dTime: public bTime{
    private:
    int dHours;
    int dMinutes;
    int dSeconds;
    public:
    void getDTime(int hrs, int mins, int sec){
        dHours=hrs;
        dMinutes=mins;
        dSeconds=sec;
    }
    void displayAddTime(){
        cout<<"Sum"<<endl<<(bHours+dHours)/24<<":"<<(bHours+dHours)%24+(bMinutes+dMinutes)/60<<":"<<(bMinutes+dMinutes)%60+(bSeconds+dSeconds)/60<<":"<<(bSeconds+dSeconds)%60<<endl;
    }
    friend class workingClass;
};
class workingClass{
    private:
    int hours;
    int minutes;
    int seconds;
    public:
    void displayDiffTime(dTime& o){
        if(o.bSeconds>=o.dSeconds)
            seconds=o.bSeconds-o.dSeconds;
        else{
            seconds=o.bSeconds+60-o.dSeconds;
            o.bMinutes--;
        }
        if(o.bMinutes>=o.dMinutes)
            minutes=o.bMinutes-o.dMinutes;
        else{
            minutes=o.bMinutes+60-o.dMinutes;
            o.bHours--;
        }
        hours=o.bHours-o.dHours;
        
        cout<<"Difference"<<endl<<hours<<":"<<minutes<<":"<<seconds<<":"<<endl;
    }
};
int main() {
    dTime obj;
    obj.getBTime();
    obj.getDTime(2,30,40);
    obj.displayAddTime();
    workingClass ob;
    ob.displayDiffTime(obj);
    return 0;
}