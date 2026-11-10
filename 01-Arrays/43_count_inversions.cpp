
/*
Problem: Count Inversions in an Array
Topic: Arrays
Difficulty: Medium
*/

#include <iostream>
#include <vector>
using namespace std;

long long merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;

    int left = low;
    int right = mid + 1;

    long long count = 0;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            count += (mid - left + 1);
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

    return count;
}

long long mergeSort(vector<int>& arr, int low, int high) {
    long long count = 0;

    if (low >= high) {
        return count;
    }

    int mid = low + (high - low) / 2;

    count += mergeSort(arr, low, mid);
    count += mergeSort(arr, mid + 1, high);
    count += merge(arr, low, mid, high);

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
