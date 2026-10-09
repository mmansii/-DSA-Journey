// Problem: Remove duplicates from a sorted array
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

    int index = 0;

    // Keep only unique elements
    for (int i = 1; i < n; i++) {

        if (arr[i] != arr[index]) {
            index++;
            arr[index] = arr[i];
        }
    }

    // Print unique elements
    for (int i = 0; i <= index; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}