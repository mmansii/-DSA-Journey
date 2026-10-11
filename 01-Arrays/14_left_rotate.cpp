// Problem: Left rotate an array by one position
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

    // Store the first element
    int first = arr[0];

    // Shift elements one position to the left
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Place the first element at the end
    arr[n - 1] = first;

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}