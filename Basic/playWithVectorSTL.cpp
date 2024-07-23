#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <char> v;
    v.push_back('H');
    v.push_back('E');
    v.push_back('L');
    v.push_back('L');
    v.push_back('O');
    for(int i=0; i<5; i++){
        cout<<v[i];
    }
    return 0;
}