
/*
Problem: Maximum Product Subarray
Topic: Arrays
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

    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    long long maxProduct = arr[0];
    long long minProduct = arr[0];
    long long answer = arr[0];

    for (int i = 1; i < n; i++) {

        if (arr[i] < 0) {
            swap(maxProduct, minProduct);
        }

        maxProduct = max((long long)arr[i],
                         maxProduct * arr[i]);

        minProduct = min((long long)arr[i],
                         minProduct * arr[i]);

        answer = max(answer, maxProduct);
    }

    cout << answer << endl;

    return 0;
}
