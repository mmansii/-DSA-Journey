// Problem: Find two indices whose elements add up to the target
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

    // Find the pair
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }

    // Print -1 -1 if no pair exists
    cout << "-1 -1" << endl;

    return 0;
}
