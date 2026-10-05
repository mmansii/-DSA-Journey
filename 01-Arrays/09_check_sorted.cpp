// Problem: Check if an array is sorted
// Topic: Arrays
// Difficulty: Easy

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

    bool sorted = true;

    // Check if array is sorted
    for (int i = 0; i < n - 1; i++) {

        if (arr[i] > arr[i + 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted) {
        cout << "Sorted";
    }
    else {
        cout << "Not Sorted";
    }

    return 0;
}