
/*
Problem: Remove Duplicates from a Sorted Array
Topic: Arrays
Difficulty: Easy
*/

#include <iostream>
#include <vector>
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

    int index = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[index]) {
            index++;
            arr[index] = arr[i];
        }
    }

    int uniqueCount = index + 1;

    cout << uniqueCount << endl;

    for (int i = 0; i < uniqueCount; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
