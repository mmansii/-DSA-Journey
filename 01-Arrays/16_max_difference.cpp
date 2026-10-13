// Problem: Find the maximum difference between two elements
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

    int smallest = arr[0];
    int maxDifference = arr[1] - arr[0];

    // Find the maximum difference
    for (int i = 1; i < n; i++) {

        int difference = arr[i] - smallest;

        if (difference > maxDifference) {
            maxDifference = difference;
        }

        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << maxDifference;

    return 0;
}