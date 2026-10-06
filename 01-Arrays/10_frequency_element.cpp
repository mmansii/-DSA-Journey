// Problem: Find the frequency of an element in an array
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

    int x;
    cin >> x;

    int count = 0;

    // Count occurrences of x
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }

    cout << count;

    return 0;
}