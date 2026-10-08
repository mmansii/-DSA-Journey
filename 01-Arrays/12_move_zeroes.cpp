//Problem: Move all zeroes to the end of an array
//Topic: Arrays
//Difficulty: Easy

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >>n;

    int arr[100];


//Input Array

for (int i = 0; i < n ; i++) {
    cin >> arr[i];
}

int index = 0;

//Move non-zero elements to the front

for (int i = 0; i < n; i++) {

    if (arr[i] != 0) {
        arr[index] = arr[i];
        index++;
    }
}

//Fill remaining positions with zeroes
while (index < n) {
    arr[index] = 0;
    index++;
}

//Print the array
for (int i = 0; i < n; i++){

    cout << arr[i] << " ";
}
return 0;
}