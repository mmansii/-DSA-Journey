/*
Problem: Maximum Consecutive Ones III
Topic: Arrays / Sliding Window / Two Pointers
Difficulty: Medium
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    int left = 0;
    int zeroCount = 0;
    int maxLength = 0;

    for (int right = 0; right < n; right++) {

        // Count zeroes in the current window
        if (arr[right] == 0) {
            zeroCount++;
        }

        // Shrink the window if zeroes exceed K
        while (zeroCount > k) {

            if (arr[left] == 0) {
                zeroCount--;
            }

            left++;
        }

        // Calculate the current window length
        int length = right - left + 1;

        maxLength = max(maxLength, length);
    }

    cout << maxLength << endl;

    return 0;
}