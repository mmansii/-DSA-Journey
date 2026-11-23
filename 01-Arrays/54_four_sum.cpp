/*
Problem: 4Sum - Find Quadruplets with a Given Target
Topic: Arrays / Sorting / Two Pointers
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

    long long target;
    cin >> target;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 3; i++) {

        // Skip duplicate first elements
        if (i > 0 && arr[i] == arr[i - 1]) {
            continue;
        }

        for (int j = i + 1; j < n - 2; j++) {

            // Skip duplicate second elements
            if (j > i + 1 && arr[j] == arr[j - 1]) {
                continue;
            }

            int left = j + 1;
            int right = n - 1;

            while (left < right) {

                long long sum = (long long)arr[i] +
                                arr[j] +
                                arr[left] +
                                arr[right];

                if (sum == target) {

                    cout << arr[i] << " "
                         << arr[j] << " "
                         << arr[left] << " "
                         << arr[right] << endl;

                    left++;
                    right--;

                    // Skip duplicate third elements
                    while (left < right &&
                           arr[left] == arr[left - 1]) {
                        left++;
                    }

                    // Skip duplicate fourth elements
                    while (left < right &&
                           arr[right] == arr[right + 1]) {
                        right--;
                    }
                }
                else if (sum < target) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }
    }

    return 0;
}