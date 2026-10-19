// Problem: Find the maximum subarray sum
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

    int currentSum = arr[0];
    int maxSum = arr[0];

    // Apply Kadane's Algorithm
    for (int i = 1; i < n; i++) {

        // Decide whether to extend the current subarray
        // or start a new one
        if (currentSum + arr[i] > arr[i]) {
            currentSum = currentSum + arr[i];
        } else {
            currentSum = arr[i];
        }

        // Update maximum sum
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    cout << maxSum;

    return 0;
}
