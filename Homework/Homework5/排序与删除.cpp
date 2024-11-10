//
// Created by 何承洋 on 24-10-26.
//
#include <iostream>
using namespace std;
void Output(int arr[],int n) {
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int min;
    for(int i=0;i<n-1;i++) {
        int minindex=i;
        for(int j=i+1;j<n;j++) {
            if(arr[j]<arr[minindex]) {minindex=j;}
        }
        if(minindex!=i) {
            swap(arr[minindex],arr[i]);
        }
    }
        Output(arr,n);
        for(int i=0;i<n;i++) {
            if(arr[i]%2==0) {cout<<arr[i]<<" ";}
        }cout<<endl;
    return 0;
}