// Problem: Find the maximum number of consecutive 1s
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

    int count = 0;
    int maxCount = 0;

    // Find maximum consecutive 1s
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count++;

            if (count > maxCount) {
                maxCount = count;
            }
        } else {
            count = 0;
        }
    }

    // Print the maximum count
    cout << maxCount << endl;

    return 0;
}
