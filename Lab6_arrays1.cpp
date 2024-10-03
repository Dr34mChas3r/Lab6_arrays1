//example cin 10 9 8 7 6 5 4 3 2 1 
//example cout 1 2 3 4 5 6 7 8 9 10
// Example CIN 5 6 23 13 534 123 5304 23 32 2
// Example COUT 2 5 6 13 23 23 32 123 534 5304

#include <iostream>
using namespace std;

int main() {
    int i, n;
    int arr[10];
    int current;

    cout << "Enter 10 elements of an unsorted array: " << endl;
    for (i = 0; i < 10; i++) {
        cin >> arr[i];
    }
  
    for (i = 0; i < 10; i++) {
        for (n = i + 1; n < 10; n++) {
            if (arr[n] < arr[i]) {
                current = arr[i];
                arr[i] = arr[n];
                arr[n] = current;
            }
        }
    }

    cout << "Sorted elements: " << endl;
    for (i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
