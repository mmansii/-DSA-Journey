
/*
Problem: Merge Two Sorted Arrays Without Extra Space
Topic: Arrays
Difficulty: Medium
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;

    cin >> n;

    vector<int> arr1(n);

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cin >> m;

    vector<int> arr2(m);

    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    int i = n - 1;
    int j = 0;

    while (i >= 0 && j < m) {
        if (arr1[i] > arr2[j]) {
            swap(arr1[i], arr2[j]);
            i--;
            j++;
        }
        else {
            break;
        }
    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    for (int x : arr1) {
        cout << x << " ";
    }

    cout << endl;

    for (int x : arr2) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}
