
/*
Problem: Longest Substring Without Repeating Characters
Topic: Strings / Sliding Window / Hashing
Difficulty: Medium
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> lastSeen(256, -1);

    int left = 0;
    int maxLength = 0;

    for (int right = 0; right < s.length(); right++) {

        // Move left pointer if character is repeated
        if (lastSeen[s[right]] >= left) {
            left = lastSeen[s[right]] + 1;
        }

        // Update last seen position
        lastSeen[s[right]] = right;

        // Calculate current window length
        int length = right - left + 1;

        maxLength = max(maxLength, length);
    }

    cout << maxLength << endl;

    return 0;
}
