// Problem: Count Even and Odd Numbers
// Topic: Arrays
// Difficulty: Easy

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[100];


    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int even = 0;
    int odd = 0;

    
    for (int i = 0; i < n; i++) {

        if (arr[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;

    return 0;
}