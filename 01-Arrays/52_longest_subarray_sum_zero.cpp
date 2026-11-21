/*
Problem: Longest Subarray with Sum 0
Topic: Arrays / Hashing / Prefix Sum
Difficulty: Medium
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> prefixSumIndex;

    int sum = 0;
    int maxLength = 0;

    for (int i = 0; i < n; i++) {

        sum += arr[i];

        // If sum is zero, subarray starts from index 0
        if (sum == 0) {
            maxLength = i + 1;
        }

        // If sum has appeared before
        if (prefixSumIndex.find(sum) != prefixSumIndex.end()) {

            int length = i - prefixSumIndex[sum];

            maxLength = max(maxLength, length);
        }
        else {
            // Store only the first occurrence
            prefixSumIndex[sum] = i;
        }
    }

    cout << maxLength << endl;

    return 0;
}