// Problem: Find the intersection of two sorted arrays
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

    // Find common elements using two pointers
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            i++;
        }
        else if (arr1[i] > arr2[j]) {
            j++;
        }
        else {
            // Print the common element only once
            cout << arr1[i] << " ";

            int common = arr1[i];

            // Skip duplicates in the first array
            while (i < n && arr1[i] == common) {
                i++;
            }

            // Skip duplicates in the second array
            while (j < m && arr2[j] == common) {
                j++;
            }
        }
    }

    return 0;
}
