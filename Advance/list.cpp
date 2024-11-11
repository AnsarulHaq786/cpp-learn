#include <iostream>
#include <list>
using namespace std;

void iterate(list<int> l){
    for(auto element: l){
        cout<<element<<" ";
    }
    cout<<endl;
}

// list uses all methods that are in vector
// extra: push_front(),  pop_front(), emplace_front()

int main() {
    list<int> l;
    l.push_back(5);
    iterate(l);
    l.push_front(8);
    iterate(l);
    return 0;
}