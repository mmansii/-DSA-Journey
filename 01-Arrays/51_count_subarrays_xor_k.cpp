/*
Problem: Count Subarrays with Given XOR K
Topic: Arrays / Hashing
Difficulty: Medium
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n, k;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> k;

    unordered_map<int, int> freq;

    int prefixXor = 0;
    int count = 0;

    // XOR of an empty prefix
    freq[0] = 1;

    for (int i = 0; i < n; i++) {

        prefixXor = prefixXor ^ arr[i];

        int required = prefixXor ^ k;

        count += freq[required];

        freq[prefixXor]++;
    }

    cout << count << endl;

    return 0;
}