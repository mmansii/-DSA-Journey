
/*
Problem: Fruit Into Baskets
Topic: Arrays / Sliding Window / Two Pointers
Difficulty: Medium
*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> fruits(n);

    for (int i = 0; i < n; i++) {
        cin >> fruits[i];
    }

    unordered_map<int, int> fruitCount;

    int left = 0;
    int maxFruits = 0;

    for (int right = 0; right < n; right++) {

        // Add the current fruit to the basket
        fruitCount[fruits[right]]++;

        // Shrink window if there are more than 2 fruit types
        while (fruitCount.size() > 2) {

            fruitCount[fruits[left]]--;

            if (fruitCount[fruits[left]] == 0) {
                fruitCount.erase(fruits[left]);
            }

            left++;
        }

        // Calculate maximum fruits collected
        int length = right - left + 1;

        maxFruits = max(maxFruits, length);
    }

    cout << maxFruits << endl;

    return 0;
}
