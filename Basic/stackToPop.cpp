//qn.11: Give an example to display the characters 'H E L L O' to 'O L L E H'
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
    string input="Hello";
    stack<char> charStack;
    for(char ch:input){
        charStack.push(ch);
    }
    while(!charStack.empty()){
        cout<<charStack.top()<<endl;
        charStack.pop();
    }
    return 0;
}