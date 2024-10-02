//
// Created by 何承洋 on 24-10-2.
//
#include <iostream>
using namespace std;
int FindMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int min = FindMin(arr, n);
    cout<<min;
    return 0;
}