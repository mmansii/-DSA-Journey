
/*
Problem: Longest Consecutive Sequence
Topic: Arrays
Difficulty: Medium
*/

#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    unordered_set<int> st;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        st.insert(arr[i]);
    }

    int longest = 0;

    for (int num : st) {

        // Start counting only from the beginning
        // of a consecutive sequence.
        if (st.find(num - 1) == st.end()) {

            int current = num;
            int count = 1;

            while (st.find(current + 1) != st.end()) {
                current++;
                count++;
            }

            longest = max(longest, count);
        }
    }

    cout << longest << endl;

    return 0;
}
