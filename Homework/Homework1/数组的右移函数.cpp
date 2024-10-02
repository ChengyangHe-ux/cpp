//
// Created by 何承洋 on 24-10-2.
//
#include <iostream>
using namespace std;
void MoveRight(int arr[],int size) {
    int temp=arr[size-1];
    for (int i = size-1; i > 0; i--) {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) {cin>>arr[i];}
    int k;
    cin>>k;
    for(int i=0; i<k; i++) {MoveRight(arr,n);}
    for(int i=0; i<n; i++) {cout<<arr[i]<<" ";}
    return 0;
}