// Problem: Find the next permutation
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

    // Step 1: Find the pivot
    int pivot = n - 2;

    while (pivot >= 0 && arr[pivot] >= arr[pivot + 1]) {
        pivot--;
    }

    // Step 2: Find the next greater element and swap
    if (pivot >= 0) {
        int successor = n - 1;

        while (arr[successor] <= arr[pivot]) {
            successor--;
        }

        int temp = arr[pivot];
        arr[pivot] = arr[successor];
        arr[successor] = temp;
    }

    // Step 3: Reverse the elements after the pivot
    int left = pivot + 1;
    int right = n - 1;

    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    // Print the next permutation
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
