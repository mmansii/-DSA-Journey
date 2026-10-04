// Problem: Find the second largest element in an array
// Topic: Arrays
// Difficulty: Easy

#include <iostream>
#include <climits>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[100];

    // Input array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    // Find largest and second largest
    for (int i = 0; i < n; i++) {

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << secondLargest;

    return 0;
}