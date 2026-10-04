// // Problem: Find the second largest element in an array
// // Topic: Arrays
// // Difficulty: Easy


#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest;
    int secondLargest;

    // Initialize using the first two elements
    if (arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    }
    else {
        largest = arr[1];
        secondLargest = arr[0];
    }

    // Check remaining elements
    for (int i = 2; i < n; i++) {

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << secondLargest;

    return 0;
}

//or this is another approach to find the second largest element in an array using C++17 standard. It uses the `<climits>` library to initialize the largest and second largest values to the minimum integer value. This ensures that any number in the array will be larger than these initial values.

// #include <iostream>
// #include <climits>
// using namespace std;

// int main() {

//     int n;
//     cin >> n;

//     int arr[100];

//     // Input array
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int largest = INT_MIN;
//     int secondLargest = INT_MIN;

//     // Find largest and second largest
//     for (int i = 0; i < n; i++) {

//         if (arr[i] > largest) {
//             secondLargest = largest;
//             largest = arr[i];
//         }
//         else if (arr[i] > secondLargest && arr[i] != largest) {
//             secondLargest = arr[i];
//         }
//     }

//     cout << secondLargest;

//     return 0;
// }