#include <iostream>
using namespace std;
class matrix{
    private:
    int arr[3][3];
    public:
    matrix(){}
    matrix(int a[3][3]){
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                arr[i][j] = a[i][j];
            }
        }
    }
    matrix operator +(matrix obj2){
        matrix temp;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                temp.arr[i][j] = arr[i][j] + obj2.arr[i][j];
            }
        }
        return temp;
    }
    void printData(){
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout<<arr[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
};
int main() {
    int array1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int array2[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
    matrix obj1(array1), obj2(array2);
    matrix obj3;
    obj3 = obj1 + obj2;
    obj3.printData();
    return 0;
}