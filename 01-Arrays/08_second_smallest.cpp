// Problem: Find the second smallest element in an array
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

    int smallest;
    int secondSmallest;

    // Initialize using the first two elements
    if (arr[0] < arr[1]) {
        smallest = arr[0];
        secondSmallest = arr[1];
    }
    else {
        smallest = arr[1];
        secondSmallest = arr[0];
    }

    // Check remaining elements
    for (int i = 2; i < n; i++) {

        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    cout << secondSmallest;

    return 0;
}