
// encoding not working:((( writing in english:
// Task: Write a program which sorts 10 elements 
// of array from low to high element, and cout them
// Idea: use srand() to generate 10 random elements
// and use cycle to sort them.

#include <iostream>
#include <cstdlib> // for rand
#include <algorithm>
#include <ctime>

using namespace std;

int main() {
	srand(time(0));
	int rand1 = rand() % 1001;
	int rand2 = rand() % 1001;
	int rand3 = rand() % 1001;
	int rand4 = rand() % 1001;
	int rand5 = rand() % 1001;
	int rand6 = rand() % 1001;
	int rand7 = rand() % 1001;
	int rand8 = rand() % 1001;
	int rand9 = rand() % 1001;
	int rand10 = rand() % 1001;

	cout << rand1 << endl << rand2 << endl << rand3 << endl << rand4 << endl << rand5 << endl << rand6 << endl << rand7 << endl << rand8 << endl << rand9 << endl << rand10 << endl;
	cout << "Sorted array: " << endl;
	int myArray[]{ rand1, rand2, rand3, rand4, rand5, rand6, rand7, rand8, rand9, rand10 };
	sort(begin(myArray), end(myArray));
	cout << myArray[0] << endl << myArray[1] << endl << myArray[2] << endl << myArray[3] << endl << myArray[4] << endl << myArray[5] << endl << myArray[6] << endl << myArray[7] << endl << myArray[8] << endl << myArray[9] << endl;

}