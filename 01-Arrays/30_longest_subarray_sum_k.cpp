// Problem: Find the longest subarray with sum K
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

    int k;
    cin >> k;

    int maxLength = 0;

    // Check every possible starting position
    for (int i = 0; i < n; i++) {
        int sum = 0;

        // Extend the subarray from position i
        for (int j = i; j < n; j++) {
            sum += arr[j];

            // Check if the subarray sum equals k
            if (sum == k) {
                int length = j - i + 1;

                if (length > maxLength) {
                    maxLength = length;
                }
            }
        }
    }

    // Print the longest length
    cout << maxLength << endl;

    return 0;
}
