// Problem: Find the element that appears only once
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

    int result = 0;

    // XOR all elements
    for (int i = 0; i < n; i++) {
        result = result ^ arr[i];
    }

    // Print the single number
    cout << result << endl;

    return 0;
}
