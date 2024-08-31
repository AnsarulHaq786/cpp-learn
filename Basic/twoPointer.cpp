// 1. Two Pointer Algorithm DSA
/* 
Consider an array 'arr' of number of N elements,
If 'x' be any integer value then,
from an array 'arr' search for pair of number that sum to the value of 'x',
if not found display "pair of such number does not exist.
*/

#include <iostream>
using namespace std;

int isSumXPair(int Arr[], int X, int ArrSize){
	int i = 0, j = ArrSize--;
	while (i<j)
	{
		if (Arr[i] + Arr[j] == X)
            return 1;
		else if(Arr[i] + Arr[j] < X)
			i++;
		else
			j--;	
	}
	return 0;
}

int main() {
	int arr[] = {2, 3 ,4 , 5, 6, 7, 8 ,9};
	int x = 15;
	int arrSize = sizeof(arr)/sizeof(arr[0]);
	cout<<(isSumXPair(arr, x, arrSize)?"Found":"Not Found!");
	return 0;
}