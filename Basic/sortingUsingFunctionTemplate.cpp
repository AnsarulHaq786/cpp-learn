#include <iostream>
using namespace std;

template <class T>
void sortArray(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] > arr[j]) {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

template <class T>
void displayArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int size = 5;

    // Integer array
    int intArray[size] = {5, 2, 9, 1, 6};
    cout << "Original integer array: ";
    displayArray(intArray, size);

    sortArray(intArray, size);
    cout << "Sorted integer array: ";
    displayArray(intArray, size);
    
    // Character 
    char charArray[size] = {'e', 'b', 'a', 'd', 'c'};
    cout << "Original character array: ";
    displayArray(charArray, size);

    sortArray(charArray, size);
    cout << "Sorted character array: ";
    displayArray(charArray, size);

    return 0;
}
