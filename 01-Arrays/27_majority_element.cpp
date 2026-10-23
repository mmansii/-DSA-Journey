// Problem: Find the majority element in an array
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

    int majority = -1;

    // Check each element
    for (int i = 0; i < n; i++) {
        int count = 0;

        // Count occurrences of arr[i]
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // Check if it is the majority element
        if (count > n / 2) {
            majority = arr[i];
            break;
        }
    }

    // Print the result
    cout << majority << endl;

    return 0;
}
