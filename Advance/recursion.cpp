#include <iostream>
using namespace std;

void counter(int n){
    if(n==0)
        return;
    cout<<n<<endl;
    counter(n-1);
}
void backTrack(int n){
    if(n==0)
        return;
    backTrack(n-1);
    cout<<n<<endl;
}

int sumOfN(int n){
    if(n==0)
        return 0;
    return n+sumOfN(n-1);
}
int factorial(int n){
    if(n==1)
        return 1;
    return n*factorial(n-1);
}
void reverseArr(int firstPointer,int secondPointer, int arr[]){
        if(firstPointer>=secondPointer){
            
            return;
        }     
        swap(arr[firstPointer], arr[secondPointer]);
        reverseArr(++firstPointer, --secondPointer, arr);
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("stream/input.txt", "r", stdin);
    freopen("stream/output.txt", "w", stdout);
    #endif
    
    int arr[33], n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    reverseArr(0, n-1, arr);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}