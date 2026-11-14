
/*
Problem: Leaders in an Array
Topic: Arrays
Difficulty: Easy
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

    vector<int> leaders;

    int maxRight = arr[n - 1];

    leaders.push_back(maxRight);

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            leaders.push_back(arr[i]);
            maxRight = arr[i];
        }
    }

    reverse(leaders.begin(), leaders.end());

    for (int x : leaders) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}
