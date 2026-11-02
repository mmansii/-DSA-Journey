
/*
Problem: Left Rotate an Array by K Places
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

    int k;
    cin >> k;

    if (n > 0) {
        k = k % n;

        vector<int> temp(n);

        for (int i = 0; i < n; i++) {
            temp[i] = arr[(i + k) % n];
        }

        arr = temp;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
