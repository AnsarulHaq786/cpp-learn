#include <iostream>
#include <vector>
using namespace std;

void i(vector<int> v){ // for each loop type element iterate through vec
    for(auto element: v){
        cout<<element<<" ";
    }
    cout<<endl;
}

int main() {
    
    //define and assign values
    vector<int> vec(2, 8);  //[8, 8]
    vec.push_back(1);  // [8, 8, 1]
    vec.push_back(3);  // [8, 8, 1, 3]
    vec.push_back(9);  // [8, 8, 1, 3, 9]
    vec.push_back(8);  // [8, 8, 1, 3, 9, 8]
    vec.push_back(11);  // [8, 8, 1, 3, 9, 8, 11]
    
    // Iterator
    // vector<int>::iterator it = v.begin(); // it = 0x1
    // auto it = v.begin(); // it = 0x1
    // while(it!=v.end()){ // v.end() holds address of element after last element
    //     cout<<*it<<" ";
    //     it++; // In the very first iteration: it = 0x1 + 4(sizeof(int)) => 0x5
    // }
    
    // Erase
    // vec.erase(vec.begin()+2, vec.end());
    // for(auto element: vec){  // auto: int, char, string, vector<int>, stack<char>
    //     cout<<element<<" ";
    // }
    
    // Insert
    // vec.insert(vec.begin()+1, 2, 11);
    
    // Size
    // cout<<endl<<vec.size();
    
    
    // Pop
    // cout<<endl;
    // vec.pop_back();
    // cout<<endl;
    
    // Clear
    // vec.clear();  // all element from vector
    
    // Check Empty
    cout<<vec.empty(); // return 1 if empty else 0

    return 0;
}