
/*
Problem: Intersection of Two Sorted Arrays
Topic: Arrays
Difficulty: Easy
*/

#include <iostream>
#include <vector>
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

    vector<int> result;

    int i = 0, j = 0;

    while (i < n && j < m) {

        if (arr1[i] < arr2[j]) {
            i++;
        }
        else if (arr1[i] > arr2[j]) {
            j++;
        }
        else {
            if (result.empty() || result.back() != arr1[i]) {
                result.push_back(arr1[i]);
            }

            i++;
            j++;
        }
    }

    for (int x : result) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}
