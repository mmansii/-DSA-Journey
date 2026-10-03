// Problem: Reverse an array
// Topic: Arrays
// Difficulty: Easy

#include <iostream>
using namespace std;

int main() {
     
    int n ;
    cin >> n;

    int arr [100];

    int start = 0;
    int end = n - 1;
    int temp;

    for (int i = 0; i <n; i++){

        cin >> arr[i];
    }

    

     while(start < end){

        temp = arr[start];
        arr[start]=arr[end];
        arr[end] = temp;

        start++;
        end--;
     }
     
    

    for (int i = 0; i <n; i++){
        cout << arr[i] <<" " ;
    }
    return 0;
}