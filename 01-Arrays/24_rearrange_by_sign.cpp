// Problem: Rearrange array elements by sign
// Topic: Arrays
// Difficulty: Medium

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    int result[100];

    // Input array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int positiveIndex = 0;
    int negativeIndex = 1;

    // Place positive and negative numbers alternately
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            result[positiveIndex] = arr[i];
            positiveIndex += 2;
        } else {
            result[negativeIndex] = arr[i];
            negativeIndex += 2;
        }
    }

    // Print rearranged array
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}
