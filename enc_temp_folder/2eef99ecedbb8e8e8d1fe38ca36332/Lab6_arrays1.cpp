// Write a program which sorts 10 elements from array
// in ascending order
// Idea: use cin to enter 10 array elements
// And use cycles to cout, sort.

// Use gap between numbers, to cin them;
// Example:
// cin 10 3 7 6 12 4 3 1 2 3 ;
// cout 1 2 3 3 3 4 6 7 10 12 ;
#include <iostream>

using namespace std;

int main() {
	int i;
	int arr[10];
	int currentNumber = arr[0];
	cout << "Enter 10 elements: " << endl;
	cin >> arr[10];
	for (i = 0; i < 10; i++) {
		if (arr[i] > arr[i + 1]) {
		arr[i] = arr[i + 1];
		arr[i + 1] = currentNumber;
	}
	cout << currentNumber << " ";
	}

}