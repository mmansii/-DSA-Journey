// Problem: Move all negative numbers to one side
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

    int left = 0;
    int right = n - 1;

    // Move negative numbers to the left side
    while (left < right) {

        // If left element is negative, it is already in the correct side
        if (arr[left] < 0) {
            left++;
        }

        // If right element is non-negative, it is already in the correct side
        else if (arr[right] >= 0) {
            right--;
        }

        // Swap elements when they are on the wrong sides
        else {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            left++;
            right--;
        }
    }

    // Print the rearranged array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}