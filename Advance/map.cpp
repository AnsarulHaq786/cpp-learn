#include <iostream>
#include <map>
using namespace std;

void iterate(map<int, string> m){
    for(auto element: m){
        cout<<element.first<<" "<<element.second;
        cout<<endl;
    }
}

int main() {
    map<int, string> m;
    // sorted
    // unique
    m[1] = "ashok";
    m.insert({3, "ansarul"});
    //iterate(m);
    cout<<m[1]<<endl;
    m.erase(3); // erase key and value
    
    // multimap<int, string> m;
    // unique(x): may have duplicate keys
    
    // unordered_map<int, string> m;
    // sorting(x): is not sorted
    return 0;
}