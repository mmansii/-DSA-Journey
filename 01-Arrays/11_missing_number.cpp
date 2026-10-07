// Problem: Find the missing number in an array
// Topic: Arrays
// Difficulty: Easy

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[100];

    // Input array
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    // Sum of numbers from 1 to n
    int expectedSum = n * (n + 1) / 2;

    // Sum of elements present in the array
    int actualSum = 0;

    for (int i = 0; i < n - 1; i++) {
        actualSum = actualSum + arr[i];
    }

    // Difference is the missing number
    int missing = expectedSum - actualSum;

    cout << missing;

    return 0;
}