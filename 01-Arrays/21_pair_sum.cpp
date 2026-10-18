// Problem: Find a pair with a given sum
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

    int target;
    cin >> target;

    bool found = false;

    // Check every possible pair
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                found = true;
                break;
            }
        }

        if (found) {
            break;
        }
    }

    // Print the result
    if (found) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
