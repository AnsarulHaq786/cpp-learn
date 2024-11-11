#include <iostream>
#include <queue>
using namespace std;

int main() {
    // FIFO princliple
    queue<string> q;
    q.push("ashok");
    q.push("ansarul");
    q.push("amamul");
    cout<<q.front()<<endl; // returns first value in queue
    q.pop(); // pops the first value in queue
    cout<<q.back(); // returns last value in queue
    q.front(); // prints ansarul
    return 0;
}