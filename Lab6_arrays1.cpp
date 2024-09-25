
// encoding not working:((( writing in english:
// Task: Write a program which sorts 10 elements 
// of array from low to high element, and cout them
// Idea: use srand() to generate 10 random elements
// and use std::sort (include algorithm) to sort them.

#include <iostream>
#include <cstdlib> 
#include <algorithm>
#include <ctime>

using namespace std;

int main() {
	srand(time(0));
	int rand1 = rand() % 100001;
	int rand2 = rand() % 100001;
	int rand3 = rand() % 100001;
	int rand4 = rand() % 100001;
	int rand5 = rand() % 100001;
	int rand6 = rand() % 100001;
	int rand7 = rand() % 100001;
	int rand8 = rand() % 100001;
	int rand9 = rand() % 100001;
	int rand10 = rand() % 100001;

	cout << rand1 << " " << rand2 << " " << rand3 << " " << rand4 << " " << rand5 << " " << rand6 << " " << rand7 << " " << rand8 << " " << rand9 << " " << rand10 << " " << endl;
	cout << "Sorted array: " << endl;
	int myArray[]{ rand1, rand2, rand3, rand4, rand5, rand6, rand7, rand8, rand9, rand10 };
	sort(begin(myArray), end(myArray));
	cout << myArray[0] << " " << myArray[1] << " " << myArray[2] << " " << myArray[3] << " " << myArray[4] << " " << myArray[5] << " " << myArray[6] << " " << myArray[7] << " " << myArray[8] << " " << myArray[9] << " ";

}