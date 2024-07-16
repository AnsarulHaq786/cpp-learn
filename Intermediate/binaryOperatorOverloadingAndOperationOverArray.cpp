/*
Design a soccer player class that includes three integer fields:a player's jersey number, number of goals, number of assists and necessary constructors to initialize the data members. Overload the operator (Greater than) One player is considered greater. than another if the sum of goals plus assists is greater than that of others Create an array of 11 soccer players, then use the overloaded operator to find the greater total of goal plus assists.
*/
#include <iostream>
using namespace std;
class SoccerPlayer{
    private:
    int jerseyNumber, noOfGoals, noOfAssists;
    public:
    SoccerPlayer(int jerseyNo=0, int goalNo=0, int assistNo=0): jerseyNumber(jerseyNo), noOfGoals(goalNo), noOfAssists(assistNo){};
    SoccerPlayer operator >(SoccerPlayer obj2){
        SoccerPlayer temp;
        if((noOfAssists+noOfGoals)>(obj2.noOfAssists+obj2.noOfGoals)){
            temp.jerseyNumber= jerseyNumber;
            temp.noOfAssists= noOfAssists;
            temp.noOfGoals= noOfGoals;
        }
        else{
            temp.jerseyNumber= obj2.jerseyNumber;
            temp.noOfAssists= obj2.noOfAssists;
            temp.noOfGoals= obj2.noOfGoals;
        }
        return temp;
    }
    void displayInfo(){
        cout<<jerseyNumber;
    }
};
int main() {
    SoccerPlayer p[11]= {
        SoccerPlayer(1, 5, 3), SoccerPlayer(2, 2, 1), SoccerPlayer(3, 0, 0),
        SoccerPlayer(4, 1, 2), SoccerPlayer(5, 6, 5), SoccerPlayer(6, 4, 4),
        SoccerPlayer(7, 3, 3), SoccerPlayer(8, 2, 2), SoccerPlayer(9, 1, 1),
        SoccerPlayer(10, 0, 0), SoccerPlayer(11, 7, 6)
    };
    SoccerPlayer topPlayer=p[0];
    for(int i=1; i<11; i++){
        topPlayer=topPlayer>p[i];
    }
    topPlayer.displayInfo();
    return 0;
}
