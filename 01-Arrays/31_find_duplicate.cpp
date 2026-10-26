// Problem: Find the duplicate number in an array
// Topic: Arrays
// Difficulty: Medium

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    // Input array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Check each element
    for (int i = 0; i < n; i++) {
        int count = 0;

        // Count occurrences of arr[i]
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // If an element appears more than once, print it
        if (count > 1) {
            cout << arr[i] << endl;
            break;
        }
    }

    return 0;
}
