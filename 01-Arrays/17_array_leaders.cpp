
/*
Problem: Find the leaders in an array
Topic: Arrays
Difficulty: Medium
*/

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

    int leaders[100];
    int count = 0;
    int largest = arr[n - 1];

    // Last element is always a leader
    leaders[count] = largest;
    count++;

    // Find leaders from right to left
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= largest) {
            largest = arr[i];
            leaders[count] = arr[i];
            count++;
        }
    }

    // Print leaders in original left-to-right order
    for (int i = count - 1; i >= 0; i--) {
        cout << leaders[i] << " ";
    }

    return 0;
}
