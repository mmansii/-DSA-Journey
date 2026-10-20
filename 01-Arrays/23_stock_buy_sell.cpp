// Problem: Best time to buy and sell stock
// Topic: Arrays
// Difficulty: Easy

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    // Input stock prices
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minPrice = arr[0];
    int maxProfit = 0;

    // Find the maximum possible profit
    for (int i = 1; i < n; i++) {

        // Calculate profit if we sell today
        int profit = arr[i] - minPrice;

        // Update maximum profit
        if (profit > maxProfit) {
            maxProfit = profit;
        }

        // Update minimum price
        if (arr[i] < minPrice) {
            minPrice = arr[i];
        }
    }

    cout << maxProfit;

    return 0;
}
