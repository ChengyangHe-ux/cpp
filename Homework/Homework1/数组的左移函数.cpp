//
// Created by 何承洋 on 24-10-2.
//
#include <iostream>
using namespace std;
void MoveLeft(int arr[],int size) {
    int temp=arr[0];
    for (int i=0; i<size-1; i++) {
        arr[i]=arr[i+1];
    }
    arr[size-1]=temp;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) {cin>>arr[i];}
    int k;
    cin>>k;
    for(int i=0;i<k;i++) {MoveLeft(arr,n);}
    for(int i=0;i<n;i++) {cout<<arr[i]<<" ";}
    return 0;
}