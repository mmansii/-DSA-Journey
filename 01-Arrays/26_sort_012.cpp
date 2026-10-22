// Problem: Sort an array containing only 0s, 1s, and 2s
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

    // Count the number of 0s, 1s, and 2s
    int count0 = 0, count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            count0++;
        } else if (arr[i] == 1) {
            count1++;
        } else if (arr[i] == 2) {
            count2++;
        }
    }

    // Overwrite the array with 0s
    int index = 0;

    while (count0 > 0) {
        arr[index] = 0;
        index++;
        count0--;
    }

    // Add 1s
    while (count1 > 0) {
        arr[index] = 1;
        index++;
        count1--;
    }

    // Add 2s
    while (count2 > 0) {
        arr[index] = 2;
        index++;
        count2--;
    }

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
