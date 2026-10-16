// Problem: Find the union of two sorted arrays
// Topic: Arrays
// Difficulty: Easy

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n;

    int arr1[100];

    // Input first sorted array
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cin >> m;

    int arr2[100];

    // Input second sorted array
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    int i = 0, j = 0;

    cout << "";

    // Find the union using two pointers
    while (i < n && j < m) {
        int value;

        if (arr1[i] < arr2[j]) {
            value = arr1[i];
            i++;
        }
        else if (arr1[i] > arr2[j]) {
            value = arr2[j];
            j++;
        }
        else {
            value = arr1[i];
            i++;
            j++;
        }

        cout << value << " ";

        // Skip duplicates in the first array
        while (i < n && arr1[i] == value) {
            i++;
        }

        // Skip duplicates in the second array
        while (j < m && arr2[j] == value) {
            j++;
        }
    }

    // Process remaining elements of the first array
    while (i < n) {
        if (i == 0 || arr1[i] != arr1[i - 1]) {
            cout << arr1[i] << " ";
        }
        i++;
    }

    // Process remaining elements of the second array
    while (j < m) {
        if (j == 0 || arr2[j] != arr2[j - 1]) {
            cout << arr2[j] << " ";
        }
        j++;
    }

    return 0;
}
