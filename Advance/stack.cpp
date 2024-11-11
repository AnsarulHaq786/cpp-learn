#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(12);
    
    s.pop();
    
    cout<<s.size();
    
    if(!s.empty()){
        cout<<"Hello Hancy Ashok!";
    }
    
    return 0;
}