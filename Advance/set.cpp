#include <iostream>
#include <set>
using namespace std;
// includes all other method from vector
// sorted && unique
void iterate(set<int> s){
    for(auto element: s){
        cout<<element<<" ";
    }
    cout<<endl;
}
int main() {
    set<int> s;
    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    iterate(s);
    s.erase(4);
    iterate(s);
    if(s.count(2)) cout<<"2: it is in the set!"<<endl;
    if(!s.count(6)) cout<<"6: it is not the set!"<<endl;
    return 0;
}