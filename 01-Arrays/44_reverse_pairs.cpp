
/*
Problem: Reverse Pairs in an Array
Topic: Arrays
Difficulty: Hard
*/

#include <iostream>
#include <vector>
using namespace std;

// Count reverse pairs between two sorted halves
long long countPairs(vector<int>& arr, int low, int mid, int high) {
    long long count = 0;
    int right = mid + 1;

    for (int left = low; left <= mid; left++) {
        while (right <= high &&
               (long long)arr[left] > 2LL * arr[right]) {
            right++;
        }

        count += (right - (mid + 1));
    }

    return count;
}

// Merge two sorted halves
void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;

    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

// Merge Sort and count reverse pairs
long long mergeSort(vector<int>& arr, int low, int high) {
    if (low >= high) {
        return 0;
    }

    int mid = low + (high - low) / 2;

    long long count = 0;

    count += mergeSort(arr, low, mid);
    count += mergeSort(arr, mid + 1, high);

    count += countPairs(arr, low, mid, high);

    merge(arr, low, mid, high);

    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << mergeSort(arr, 0, n - 1) << endl;

    return 0;
}
