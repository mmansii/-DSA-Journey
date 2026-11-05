
/*
Problem: Find the Missing Number
Topic: Arrays
Difficulty: Easy
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n - 1);

    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    int xor1 = 0;
    int xor2 = 0;

    for (int i = 1; i <= n; i++) {
        xor1 = xor1 ^ i;
    }

    for (int i = 0; i < n - 1; i++) {
        xor2 = xor2 ^ arr[i];
    }

    int missingNumber = xor1 ^ xor2;

    cout << missingNumber << endl;

    return 0;
}
