//
// Created by 何承洋 on 24-10-18.
//
#include<iostream>
using namespace std;
void Output(int arr[],int n) {
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main() {
    int n;
    cin>>n;
    int arr[n]={0};
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int temp=arr[0];
    for(int i=0;i<n-1;i++) {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    Output(arr,n);
    return 0;
}